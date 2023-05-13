/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CFonts.h"

SAMPAPI_BEGIN_V037R5_1

SAMPAPI_VAR CFonts*& RefFontRenderer() {
    return *(CFonts**)GetAddress(0x26EB9C);
}

CFonts::CFonts(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CFonts*, IDirect3DDevice9*))GetAddress(0x6BAF0))(this, pDevice);
}

CFonts::~CFonts() {
    ((void(__thiscall*)(CFonts*))GetAddress(0x6B100))(this);
}

void CFonts::OnLostDevice() {
    ((void(__thiscall*)(CFonts*))GetAddress(0x70EA0))(this);
}

void CFonts::OnResetDevice() {
    ((void(__thiscall*)(CFonts*))GetAddress(0x6B1C0))(this);
}

void CFonts::GetTextScreenSize(void* pSize, const char* szText, int nFormat) {
    ((void(__thiscall*)(CFonts*, void*, const char*, int))GetAddress(0x6B200))(this, pSize, szText, nFormat);
}

void CFonts::GetLittleTextScreenSize(void* pSize, const char* szText, int nFormat) {
    ((void(__thiscall*)(CFonts*, void*, const char*, int))GetAddress(0x6B2B0))(this, pSize, szText, nFormat);
}

void CFonts::DrawText(ID3DXSprite* pSprite, const char* szText, CRect rect, D3DCOLOR color, BOOL bShadow) {
    ((void(__thiscall*)(CFonts*, ID3DXSprite*, const char*, CRect, D3DCOLOR, BOOL))GetAddress(0x6B360))(this, pSprite, szText, rect, color, bShadow);
}

void CFonts::DrawLittleText(ID3DXSprite* pSprite, const char* szText, CRect rect, int nFormat, D3DCOLOR color, BOOL bShadow) {
    ((void(__thiscall*)(CFonts*, ID3DXSprite*, const char*, CRect, int, D3DCOLOR, BOOL))GetAddress(0x6B4E0))(this, pSprite, szText, rect, nFormat, color, bShadow);
}

void CFonts::DrawLicensePlateText(const char* szText, CRect rect, D3DCOLOR color) {
    ((void(__thiscall*)(CFonts*, const char*, CRect, D3DCOLOR))GetAddress(0x6B650))(this, szText, rect, color);
}

void CFonts::Reset() {
    ((void(__thiscall*)(CFonts*))GetAddress(0x6B8E0))(this);
}

SAMPAPI_END
