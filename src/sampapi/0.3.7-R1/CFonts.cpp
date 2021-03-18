/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CFonts.h"

SAMPAPI_BEGIN_V037R1

SAMPAPI_VAR CFonts*& RefFontRenderer() {
    return *(CFonts**)GetAddress(0x21A0FC);
}

CFonts::CFonts(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CFonts*, IDirect3DDevice9*))GetAddress(0x67410))(this, pDevice);
}

CFonts::~CFonts() {
    ((void(__thiscall*)(CFonts*))GetAddress(0x66A20))(this);
}

void CFonts::OnLostDevice() {
    ((void(__thiscall*)(CFonts*))GetAddress(0x66AA0))(this);
}

void CFonts::OnResetDevice() {
    ((void(__thiscall*)(CFonts*))GetAddress(0x66AE0))(this);
}

void CFonts::GetTextScreenSize(void* pPoint, const char* pText, int nFormat) {
    ((void(__thiscall*)(CFonts*, void*, const char*, unsigned long))GetAddress(0x66B20))(this, pPoint, pText, nFormat);
}

void CFonts::GetLittleTextScreenSize(void* pPoint, const char* pText, int nFormat) {
    ((void(__thiscall*)(CFonts*, void*, const char*, unsigned long))GetAddress(0x66BD0))(this, pPoint, pText, nFormat);
}

void CFonts::DrawText(ID3DXSprite* pSprite, const char* szText, CRect rect, D3DCOLOR color, BOOL bShadow) {
    ((void(__thiscall*)(CFonts*, ID3DXSprite*, const char*, CRect, D3DCOLOR, BOOL))GetAddress(0x66C80))(this, pSprite, szText, rect, color, bShadow);
}

void CFonts::DrawLittleText(ID3DXSprite* pSprite, const char* szText, CRect rect, int nFormat, D3DCOLOR color, BOOL bShadow) {
    ((void(__thiscall*)(CFonts*, ID3DXSprite*, const char*, CRect, int, D3DCOLOR, BOOL))GetAddress(0x66E00))(this, pSprite, szText, rect, nFormat, color, bShadow);
}

void CFonts::Reset() {
    ((void(__thiscall*)(CFonts*))GetAddress(0x67200))(this);
}

void CFonts::DrawLicensePlateText(const char* szText, CRect rect, D3DCOLOR color) {
    ((void(__thiscall*)(CFonts*, const char*, CRect, D3DCOLOR))GetAddress(0x66F70))(this, szText, rect, color);
}

SAMPAPI_END
