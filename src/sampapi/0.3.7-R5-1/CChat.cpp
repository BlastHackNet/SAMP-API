/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CChat.h"

SAMPAPI_BEGIN_V037R5_1

SAMPAPI_VAR CChat*& RefChat() {
    return *(CChat**)GetAddress(0x26EB80);
}

CChat::CChat(IDirect3DDevice9* pDevice, CFonts* pFontRenderer, const char* szLogPath) {
    ((void(__thiscall*)(CChat*, IDirect3DDevice9*, CFonts*, const char*))GetAddress(0x68380))(this, pDevice, pFontRenderer, szLogPath);
}

void CChat::RecalcFontSize() {
    ((void(__thiscall*)(CChat*))GetAddress(0x67120))(this);
}

void CChat::OnLostDevice() {
    ((void(__thiscall*)(CChat*))GetAddress(0x671A0))(this);
}

void CChat::UpdateScrollbar() {
    ((void(__thiscall*)(CChat*))GetAddress(0x67200))(this);
}

void CChat::SetPageSize(int nValue) {
    ((void(__thiscall*)(CChat*, int))GetAddress(0x672A0))(this, nValue);
}

void CChat::PageUp() {
    ((void(__thiscall*)(CChat*))GetAddress(0x672D0))(this);
}

void CChat::PageDown() {
    ((void(__thiscall*)(CChat*))GetAddress(0x67330))(this);
}

void CChat::ScrollToBottom() {
    ((void(__thiscall*)(CChat*))GetAddress(0x67390))(this);
}

void CChat::Scroll(int nDelta) {
    ((void(__thiscall*)(CChat*, int))GetAddress(0x673C0))(this, nDelta);
}

void CChat::FilterOutInvalidChars(char* szString) {
    ((void(__thiscall*)(CChat*, char*))GetAddress(0x67420))(this, szString);
}

void CChat::PushBack() {
    ((void(__thiscall*)(CChat*))GetAddress(0x67450))(this);
}

void CChat::RenderEntry(const char* szText, CRect rect, D3DCOLOR color) {
    ((void(__thiscall*)(CChat*, const char*, CRect, D3DCOLOR))GetAddress(0x67470))(this, szText, rect, color);
}

void CChat::Log(int nType, const char* szText, const char* szPrefix) {
    ((void(__thiscall*)(CChat*, int, const char*, const char*))GetAddress(0x677D0))(this, nType, szText, szPrefix);
}

void CChat::ResetDialogControls(CDXUTDialog* pGameUi) {
    ((void(__thiscall*)(CChat*, CDXUTDialog*))GetAddress(0x678A0))(this, pGameUi);
}

void CChat::Render() {
    ((void(__thiscall*)(CChat*))GetAddress(0x67940))(this);
}

void CChat::AddEntry(int nType, const char* szText, const char* szPrefix, D3DCOLOR textColor, D3DCOLOR prefixColor) {
    ((void(__thiscall*)(CChat*, int, const char*, const char*, D3DCOLOR, D3DCOLOR))GetAddress(0x67BE0))(this, nType, szText, szPrefix, textColor, prefixColor);
}

void CChat::Draw() {
    ((void(__thiscall*)(CChat*))GetAddress(0x67E00))(this);
}

void CChat::RenderToSurface() {
    ((void(__thiscall*)(CChat*))GetAddress(0x67ED0))(this);
}

void CChat::AddChatMessage(const char* szPrefix, D3DCOLOR prefixColor, const char* szText) {
    ((void(__thiscall*)(CChat*, const char*, D3DCOLOR, const char*))GetAddress(0x68020))(this, szPrefix, prefixColor, szText);
}

void CChat::AddMessage(D3DCOLOR color, const char* szText) {
    ((void(__thiscall*)(CChat*, D3DCOLOR, const char*))GetAddress(0x68170))(this, color, szText);
}

void CChat::OnResetDevice() {
    ((void(__thiscall*)(CChat*))GetAddress(0x681D0))(this);
}

void CChat::SwitchMode() {
    ((void(__thiscall*)(CChat*))GetAddress(0x612C0))(this);
}

int CChat::GetMode() {
    return ((int(__thiscall*)(CChat*))GetAddress(0x612B0))(this);
}

SAMPAPI_END
