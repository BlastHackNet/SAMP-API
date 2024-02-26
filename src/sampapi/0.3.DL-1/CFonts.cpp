/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CFonts.h"

SAMPAPI_BEGIN_V03DL_1

SAMPAPI_VAR CFonts*& RefFontRenderer() {
    return *(CFonts**)GetAddress(0x2ACA2C);
}

CFonts::CFonts(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CFonts*, IDirect3DDevice9*))GetAddress(0x6B530))(this, pDevice);
}

CFonts::~CFonts() {
    ((void(__thiscall*)(CFonts*))GetAddress(0x6AB40))(this);
}

void CFonts::OnLostDevice() {
    ((void(__thiscall*)(CFonts*))GetAddress(0x6ABC0))(this);
}

void CFonts::OnResetDevice() {
    ((void(__thiscall*)(CFonts*))GetAddress(0x6AC00))(this);
}

void CFonts::GetTextScreenSize(void* pSize, const char* szText, int nFormat) {
    ((void(__thiscall*)(CFonts*, void*, const char*, int))GetAddress(0x6AC40))(this, pSize, szText, nFormat);
}

void CFonts::GetLittleTextScreenSize(void* pSize, const char* szText, int nFormat) {
    ((void(__thiscall*)(CFonts*, void*, const char*, int))GetAddress(0x6ACF0))(this, pSize, szText, nFormat);
}

void CFonts::DrawText(ID3DXSprite* pSprite, const char* szText, CRect rect, D3DCOLOR color, BOOL bShadow) {
    ((void(__thiscall*)(CFonts*, ID3DXSprite*, const char*, CRect, D3DCOLOR, BOOL))GetAddress(0x6ADA0))(this, pSprite, szText, rect, color, bShadow);
}

void CFonts::DrawLittleText(ID3DXSprite* pSprite, const char* szText, CRect rect, int nFormat, D3DCOLOR color, BOOL bShadow) {
    ((void(__thiscall*)(CFonts*, ID3DXSprite*, const char*, CRect, int, D3DCOLOR, BOOL))GetAddress(0x6AF20))(this, pSprite, szText, rect, nFormat, color, bShadow);
}

void CFonts::DrawLicensePlateText(const char* szText, CRect rect, D3DCOLOR color) {
    ((void(__thiscall*)(CFonts*, const char*, CRect, D3DCOLOR))GetAddress(0x6B090))(this, szText, rect, color);
}

void CFonts::Reset() {
    ((void(__thiscall*)(CFonts*))GetAddress(0x6B320))(this);
}

SAMPAPI_END
