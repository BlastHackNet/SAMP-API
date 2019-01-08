/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CChat.h"
#include <stdarg.h>
#include <stdio.h>

SAMP::CChat *&SAMP::pChat = *(SAMP::CChat **)SAMP_ADDROF(0x21A0E4);

SAMP::CChat::CChat(IDirect3DDevice9 *pDevice, CFonts *pFontRenderer, const char *pChatLogPath) {
	((void(__thiscall *)(CChat *, IDirect3DDevice9 *, CFonts *, const char *))SAMP_ADDROF(0x647B0))(this, pDevice, pFontRenderer, pChatLogPath);
}

SAMP::CChat::~CChat() {
	((void(__thiscall *)(CChat *))SAMP_ADDROF(0x63840))(this);
}

void SAMP::CChat::SwitchMode() {
	((void(__thiscall *)(CChat *))SAMP_ADDROF(0x5D7B0))(this);
}

void SAMP::CChat::RecalcFontSize() {
	((void(__thiscall *)(CChat *))SAMP_ADDROF(0x63550))(this);
}

void SAMP::CChat::OnLostDevice() {
	((void(__thiscall *)(CChat *))SAMP_ADDROF(0x635D0))(this);
}

void SAMP::CChat::OnResetDevice() {
	((void(__thiscall *)(CChat *))SAMP_ADDROF(0x64600))(this);
}

void SAMP::CChat::UpdateScrollbar() {
	((void(__thiscall *)(CChat *))SAMP_ADDROF(0x63630))(this);
}

void SAMP::CChat::SetPageSize(int nPageSize) {
	((void(__thiscall *)(CChat *, int))SAMP_ADDROF(0x636D0))(this, nPageSize);
}

void SAMP::CChat::PageUp() {
	((void(__thiscall *)(CChat *))SAMP_ADDROF(0x63700))(this);
}

void SAMP::CChat::PageDown() {
	((void(__thiscall *)(CChat *))SAMP_ADDROF(0x63760))(this);
}

void SAMP::CChat::RenderEntry(const char *szText, CRect rect, D3DCOLOR color) {
	((void(__thiscall *)(CChat *, const char *, CRect, D3DCOLOR))SAMP_ADDROF(0x638A0))(this, szText, rect, color);
}

void SAMP::CChat::Log(int nType, const char *szText, const char *szPrefix) {
	((void(__thiscall *)(CChat *, int, const char *, const char *))SAMP_ADDROF(0x63C00))(this, nType, szText, szPrefix);
}

void SAMP::CChat::ResetDialogControls(CDXUTDialog *pGameUI) {
	((void(__thiscall *)(CChat *, CDXUTDialog *))SAMP_ADDROF(0x63CD0))(this, pGameUI);
}

void SAMP::CChat::Render() {
	((void(__thiscall *)(CChat *))SAMP_ADDROF(0x63D70))(this);
}

void SAMP::CChat::AddEntry(int nType, const char *szText, const char *szPrefix, D3DCOLOR textColor, D3DCOLOR prefixColor) {
	((void(__thiscall *)(CChat *, int, const char *, const char *, D3DCOLOR, D3DCOLOR))SAMP_ADDROF(0x64010))(this, nType, szText, szPrefix, textColor, prefixColor);
}

void SAMP::CChat::Draw() {
	((void(__thiscall *)(CChat *))SAMP_ADDROF(0x64230))(this);
}

void SAMP::CChat::AddChatMessage(const char *pNick, D3DCOLOR dwNickColor, const char *pText) {
	((void(__thiscall *)(CChat *, const char *, D3DCOLOR, const char *))SAMP_ADDROF(0x64450))(this, pNick, dwNickColor, pText);
}

void SAMP::CChat::AddMessage(D3DCOLOR color, const char *szText) {
	((void(__thiscall *)(CChat *, D3DCOLOR, const char *))SAMP_ADDROF(0x645A0))(this, color, szText);
}

void SAMP::CChat::ScrollToBottom() {
	((void(__thiscall *)(CChat *))SAMP_ADDROF(0x637C0))(this);
}

void SAMP::CChat::FilterOutInvalidChars(char *szText) {
	((void(__thiscall *)(CChat *, char *))SAMP_ADDROF(0x63850))(this, szText);
}

void SAMP::CChat::Print(CChat *pChat, D3DCOLOR dwColor, const char *pFormat, ...) {
	char buf[512];
	
	for (int i = 0; i < 512; i++)
		buf[i] = 0;
	
	va_list args;
	
	va_start(args, pFormat);
	vsprintf_s(buf, pFormat, args);
	va_end(args);

	pChat->FilterOutInvalidChars(buf);

	pChat->AddEntry(CHAT_TYPE_DEBUG, buf, nullptr, dwColor, 0);
}