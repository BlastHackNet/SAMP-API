/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CChat.h"

SAMPAPI_BEGIN_V037R1
#include <stdarg.h>
#include <stdio.h>

SAMPAPI_VAR CChat*& RefChat() {
    return *(CChat**)GetAddress(0x21A0E4);
}

int CChat::GetMode() {
    return ((int(__thiscall*)(CChat*))GetAddress(0x5D7A0))(this);
}

CChat::CChat(IDirect3DDevice9* pDevice, CFonts* pFontRenderer, const char* pChatLogPath) {
    ((void(__thiscall*)(CChat*, IDirect3DDevice9*, CFonts*, const char*))GetAddress(0x647B0))(this, pDevice, pFontRenderer, pChatLogPath);
}

CChat::~CChat() {
    ((void(__thiscall*)(CChat*))GetAddress(0x63840))(this);
}

void CChat::SwitchMode() {
    ((void(__thiscall*)(CChat*))GetAddress(0x5D7B0))(this);
}

void CChat::RecalcFontSize() {
    ((void(__thiscall*)(CChat*))GetAddress(0x63550))(this);
}

void CChat::OnLostDevice() {
    ((void(__thiscall*)(CChat*))GetAddress(0x635D0))(this);
}

void CChat::OnResetDevice() {
    ((void(__thiscall*)(CChat*))GetAddress(0x64600))(this);
}

void CChat::UpdateScrollbar() {
    ((void(__thiscall*)(CChat*))GetAddress(0x63630))(this);
}

void CChat::SetPageSize(int nPageSize) {
    ((void(__thiscall*)(CChat*, int))GetAddress(0x636D0))(this, nPageSize);
}

void CChat::PageUp() {
    ((void(__thiscall*)(CChat*))GetAddress(0x63700))(this);
}

void CChat::PageDown() {
    ((void(__thiscall*)(CChat*))GetAddress(0x63760))(this);
}

void CChat::RenderEntry(const char* szText, CRect rect, D3DCOLOR color) {
    ((void(__thiscall*)(CChat*, const char*, CRect, D3DCOLOR))GetAddress(0x638A0))(this, szText, rect, color);
}

void CChat::Log(int nType, const char* szText, const char* szPrefix) {
    ((void(__thiscall*)(CChat*, int, const char*, const char*))GetAddress(0x63C00))(this, nType, szText, szPrefix);
}

void CChat::ResetDialogControls(CDXUTDialog* pGameUI) {
    ((void(__thiscall*)(CChat*, CDXUTDialog*))GetAddress(0x63CD0))(this, pGameUI);
}

void CChat::Render() {
    ((void(__thiscall*)(CChat*))GetAddress(0x63D70))(this);
}

void CChat::AddEntry(int nType, const char* szText, const char* szPrefix, D3DCOLOR textColor, D3DCOLOR prefixColor) {
    ((void(__thiscall*)(CChat*, int, const char*, const char*, D3DCOLOR, D3DCOLOR))GetAddress(0x64010))(this, nType, szText, szPrefix, textColor, prefixColor);
}

void CChat::Draw() {
    ((void(__thiscall*)(CChat*))GetAddress(0x64230))(this);
}

void CChat::RenderToSurface() {
    ((void(__thiscall*)(CChat*))GetAddress(0x64300))(this);
}

void CChat::AddChatMessage(const char* pNick, D3DCOLOR dwNickColor, const char* pText) {
    ((void(__thiscall*)(CChat*, const char*, D3DCOLOR, const char*))GetAddress(0x64450))(this, pNick, dwNickColor, pText);
}

void CChat::AddMessage(D3DCOLOR color, const char* szText) {
    ((void(__thiscall*)(CChat*, D3DCOLOR, const char*))GetAddress(0x645A0))(this, color, szText);
}

void CChat::ScrollToBottom() {
    ((void(__thiscall*)(CChat*))GetAddress(0x637C0))(this);
}

void CChat::Scroll(int nDelta) {
    ((void(__thiscall*)(CChat*, int))GetAddress(0x637F0))(this, nDelta);
}

void CChat::FilterOutInvalidChars(char* szText) {
    ((void(__thiscall*)(CChat*, char*))GetAddress(0x63850))(this, szText);
}

void CChat::Print(D3DCOLOR dwColor, const char* pFormat, ...) {
    char buf[512]{};

    va_list args;
    va_start(args, pFormat);
    vsprintf_s(buf, pFormat, args);
    va_end(args);

    FilterOutInvalidChars(buf);
    AddEntry(ENTRY_TYPE_DEBUG, buf, nullptr, dwColor, 0);
}

SAMPAPI_END
