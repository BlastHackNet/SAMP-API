/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CChat.h"

SAMP::CChat *&SAMP::pChat = *(SAMP::CChat **)SAMP_ADDROF(0x26E8C8);

SAMP::CChat::CChat(IDirect3DDevice9 *pDevice, CFonts *pFontRenderer, const char *szLogPath) {
	((void(__thiscall *)(CChat *, IDirect3DDevice9 *, CFonts *, const char *))SAMP_ADDROF(0x67C00))(this, pDevice, pFontRenderer, szLogPath);
}

void SAMP::CChat::RecalcFontSize() {
	((void(__thiscall *)(CChat *))SAMP_ADDROF(0x669A0))(this);
}

void SAMP::CChat::OnLostDevice() {
	((void(__thiscall *)(CChat *))SAMP_ADDROF(0x66A20))(this);
}

void SAMP::CChat::UpdateScrollbar() {
	((void(__thiscall *)(CChat *))SAMP_ADDROF(0x66A80))(this);
}

void SAMP::CChat::SetPageSize(int nValue) {
	((void(__thiscall *)(CChat *, int))SAMP_ADDROF(0x66B20))(this, nValue);
}

void SAMP::CChat::PageUp() {
	((void(__thiscall *)(CChat *))SAMP_ADDROF(0x66B50))(this);
}

void SAMP::CChat::PageDown() {
	((void(__thiscall *)(CChat *))SAMP_ADDROF(0x66BB0))(this);
}

void SAMP::CChat::ScrollToBottom() {
	((void(__thiscall *)(CChat *))SAMP_ADDROF(0x66C10))(this);
}

void SAMP::CChat::Scroll(int nDelta) {
	((void(__thiscall *)(CChat *, int))SAMP_ADDROF(0x66C40))(this, nDelta);
}

void SAMP::CChat::FilterOutInvalidChars(char *szString) {
	((void(__thiscall *)(CChat *, char *))SAMP_ADDROF(0x66CA0))(this, szString);
}

void SAMP::CChat::PushBack() {
	((void(__thiscall *)(CChat *))SAMP_ADDROF(0x66CD0))(this);
}

void SAMP::CChat::RenderEntry(const char *szText, CRect rect, D3DCOLOR color) {
	((void(__thiscall *)(CChat *, const char *, CRect, D3DCOLOR))SAMP_ADDROF(0x66CF0))(this, szText, rect, color);
}

void SAMP::CChat::Log(int nType, const char *szText, const char *szPrefix) {
	((void(__thiscall *)(CChat *, int, const char *, const char *))SAMP_ADDROF(0x67050))(this, nType, szText, szPrefix);
}

void SAMP::CChat::ResetDialogControls(CDXUTDialog *pGameUi) {
	((void(__thiscall *)(CChat *, CDXUTDialog *))SAMP_ADDROF(0x67120))(this, pGameUi);
}

void SAMP::CChat::Render() {
	((void(__thiscall *)(CChat *))SAMP_ADDROF(0x671C0))(this);
}

void SAMP::CChat::AddEntry(int nType, const char *szText, const char *szPrefix, D3DCOLOR textColor, D3DCOLOR prefixColor) {
	((void(__thiscall *)(CChat *, int, const char *, const char *, D3DCOLOR, D3DCOLOR))SAMP_ADDROF(0x67460))(this, nType, szText, szPrefix, textColor, prefixColor);
}

void SAMP::CChat::Draw() {
	((void(__thiscall *)(CChat *))SAMP_ADDROF(0x67680))(this);
}

void SAMP::CChat::RenderToSurface() {
	((void(__thiscall *)(CChat *))SAMP_ADDROF(0x67750))(this);
}

void SAMP::CChat::AddChatMessage(const char *szPrefix, D3DCOLOR prefixColor, const char *szText) {
	((void(__thiscall *)(CChat *, const char *, D3DCOLOR, const char *))SAMP_ADDROF(0x678A0))(this, szPrefix, prefixColor, szText);
}

void SAMP::CChat::AddMessage(D3DCOLOR color, const char *szText) {
	((void(__thiscall *)(CChat *, D3DCOLOR, const char *))SAMP_ADDROF(0x679F0))(this, color, szText);
}

void SAMP::CChat::OnResetDevice() {
	((void(__thiscall *)(CChat *))SAMP_ADDROF(0x67A50))(this);
}

void SAMP::CChat::SwitchMode() {
	((void(__thiscall *)(CChat *))SAMP_ADDROF(0x60B50))(this);
}

int SAMP::CChat::GetMode() {
	return ((int(__thiscall *)(CChat *))SAMP_ADDROF(0x60B40))(this);
}