/*
	This is a SAMP API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include <windows.h>
#include <functional>
#include <fstream>
#include <d3d9.h>
#include "imgui.h"
#include "CChat.h"
#include "CGame.h"
#include "CLicensePlate.h"

#if defined(SAMP_037_R1)
#define LPLATE_TEXT_COLOR_ADDR SAMP_ADDROF(0x6922E + 1)
#define LPLATE_BG_COLOR_ADDR SAMP_ADDROF(0x6921C + 1)
#define LPLATE_RESET_PATCH SAMP_ADDROF(0x1B295)
#endif

#if defined(SAMP_037_R3_1)
#define LPLATE_TEXT_COLOR_ADDR SAMP_ADDROF(0x6D19E + 1)
#define LPLATE_BG_COLOR_ADDR SAMP_ADDROF(0x6D18C + 1)
#define LPLATE_RESET_PATCH SAMP_ADDROF(0x1E635)
#endif

union color32 {
	struct {
		BYTE b, g, r, a;
	};
	D3DCOLOR m_v;

	color32(ImColor src) {
		a = static_cast<BYTE>(src.Value.w * 0xFF);
		r = static_cast<BYTE>(src.Value.x * 0xFF);
		g = static_cast<BYTE>(src.Value.y * 0xFF);
		b = static_cast<BYTE>(src.Value.z * 0xFF);
	}

	color32() {
		m_v = 0;
	}
};

template<class T> class temporary {
public:
	temporary(T *object, T value) {
		m_pObject = object;
		m_bBad = !(read(m_original) && write(value));
	}
	
	~temporary() {
		if (!m_bBad)
			write(m_original);
	}

	BOOL bad() {
		return m_bBad;
	}
private:
	BOOL write(T value) {
		DWORD oldProtect;
		if (VirtualProtect(m_pObject, sizeof(value), PAGE_EXECUTE_READWRITE, &oldProtect)) {
			*m_pObject = value;
			VirtualProtect(m_pObject, sizeof(value), oldProtect, &oldProtect);
			return TRUE;
		}
		return FALSE;
	}

	BOOL read(T &out) {
		DWORD oldProtect;
		if (VirtualProtect(m_pObject, sizeof(out), PAGE_EXECUTE_READWRITE, &oldProtect)) {
			out = *m_pObject;
			VirtualProtect(m_pObject, sizeof(out), oldProtect, &oldProtect);
			return TRUE;
		}
		return FALSE;
	}

	T m_original;
	T *m_pObject;
	BOOL m_bBad;
};

class lplate_editor {
	struct {
		CHAR m_szText[256];
		ImColor m_textColor;
		ImColor m_bgColor;
	}		m_info;
	BOOL	m_bDraw;
	BOOL  m_bInited;

	const ImColor defaultTextColor = ImColor(0x44, 0x44, 0x70, 0xEE);
	const ImColor defaultBgColor = ImColor(0xBE, 0xB6, 0xA8);

	void reset() {
		strcpy_s(m_info.m_szText, DEFAULT_PLATE_TEXT);
		m_info.m_textColor = defaultTextColor;
		m_info.m_bgColor = defaultBgColor;
	}

	template<class T> BOOL writeToProtectedMemoryRegion(DWORD address, T value) {
		DWORD oldProtect;
		if (VirtualProtect(reinterpret_cast<LPVOID>(address), sizeof(value), PAGE_EXECUTE_READWRITE, &oldProtect)) {
			*reinterpret_cast<T *>(address) = value;
			VirtualProtect(reinterpret_cast<LPVOID>(address), sizeof(value), oldProtect, &oldProtect);
			return TRUE;
		}
		return FALSE;
	}

	void update() {
		if (SAMP::pLicensePlateManager) {
			temporary<color32> textColorParam(reinterpret_cast<color32 *>(LPLATE_TEXT_COLOR_ADDR), color32(m_info.m_textColor)); // push    0EE444470h
			temporary<color32> bgColorParam(reinterpret_cast<color32 *>(LPLATE_BG_COLOR_ADDR), color32(m_info.m_bgColor)); // push    0FFBEB6A8h
			
			if ((textColorParam.bad() || bgColorParam.bad()) && SAMP::pChat)
				SAMP::pChat->AddMessage(-1, "[l-plate] something went wrong...");

			IDirect3DTexture9 *newTexture = SAMP::pLicensePlateManager->Create(m_info.m_szText);

			if (newTexture) {
				IDirect3DTexture9 *&defaultTexture = SAMP::pLicensePlateManager->m_pDefaultPlate;
				
				if (defaultTexture)
					defaultTexture->Release();

				defaultTexture = newTexture;
			}
			else if (SAMP::pChat) {
				SAMP::pChat->AddMessage(-1, "[l-plate] cannot create texture");
			}
		}
		else if (SAMP::pChat) {
			SAMP::pChat->AddMessage(-1, "[l-plate] the license plate manager is currently unavailable");
		}
	}
	
	void resetButton(std::function<void()> cb, const char *sz) {
		if (ImGui::Button(sz)) {
			cb();
			update();
		}
		ImGui::SameLine();
	}
public:
	lplate() {
		m_bDraw = FALSE;
		m_bInited = FALSE;
		std::ifstream sets("l-plate", std::ifstream::binary);
		if (sets.is_open()) {
			sets.read(reinterpret_cast<PCHAR>(&m_info), sizeof(m_info));
		}
		else {
			reset();
		}
		sets.close();
		writeToProtectedMemoryRegion<BYTE>(LPLATE_RESET_PATCH, 0xEB);
	}

	~lplate() {
		std::ofstream sets("l-plate", std::ofstream::trunc | std::ofstream::binary);
		if (sets.is_open()) sets.write(reinterpret_cast<LPCSTR>(&m_info), sizeof(m_info));
		sets.close();
	}

	void drawMenu() {
		if (m_bDraw) {
			if (SAMP::pGame) SAMP::pGame->SetCursorMode(SAMP::CMODE_LOCKCAMANDCONTROL, FALSE);
			ImGui::Begin("l-plate | luchare | blast.hk", NULL, ImVec2(430.0f, 155.0f), -1.0f, ImGuiWindowFlags_NoResize);
			resetButton([&]() { strcpy_s(m_info.m_szText, DEFAULT_PLATE_TEXT); }, "R##1");
			if (ImGui::InputText("Text", m_info.m_szText, 256, ImGuiInputTextFlags_EnterReturnsTrue))
				update();
			resetButton([&]() { m_info.m_textColor = defaultTextColor; }, "R##2");
			if (ImGui::ColorEdit4("Text color", reinterpret_cast<float *>(&m_info.m_textColor)))
				update();
			resetButton([&]() { m_info.m_bgColor = defaultBgColor; }, "R##3");
			if (ImGui::ColorEdit4("Background color", reinterpret_cast<float *>(&m_info.m_bgColor)))
				update();
			if (ImGui::Button("Reset", ImVec2(-0.1f, 0.0f))) {
				reset();
				update();
			}
			if (ImGui::Button("Close", ImVec2(-0.1f, 0.0f))) 
				toggleMenu();
			ImGui::End();
		}
	}

	void toggleMenu() {
		m_bDraw ^= true;
		if (!m_bDraw && SAMP::pGame) {
			SAMP::pGame->SetCursorMode(SAMP::CMODE_NONE, TRUE);
			SAMP::pGame->ProcessInputEnabling();
		}
	}
	
	void process() {
		if (!m_bInited && SAMP::pLicensePlateManager) {
			update();
			m_bInited = TRUE;
		}
		if (SAMP::pLicensePlateManager && !SAMP::pLicensePlateManager->m_pDefaultPlate) update();
	}
};
