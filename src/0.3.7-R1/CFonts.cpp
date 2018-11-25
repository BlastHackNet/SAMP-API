/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CFonts.h"

SAMP::CFonts *&SAMP::pFontRenderer = *(SAMP::CFonts **)SAMP_ADDROF(0x21A0FC);

SAMP::CFonts::CFonts(IDirect3DDevice9 *pDevice) {
	((void(__thiscall *)(CFonts *, IDirect3DDevice9 *))SAMP_ADDROF(0x67410))(this, pDevice);
}

SAMP::CFonts::~CFonts() {
	((void(__thiscall *)(CFonts *))SAMP_ADDROF(0x66A20))(this);
}

void SAMP::CFonts::OnLostDevice() {
	((void(__thiscall *)(CFonts *))SAMP_ADDROF(0x66AA0))(this);
}

void SAMP::CFonts::OnResetDevice() {
	((void(__thiscall *)(CFonts *))SAMP_ADDROF(0x66AE0))(this);
}

void SAMP::CFonts::GetTextScreenSize(void *pPoint, const char *pText, unsigned long dwFormat) {
	((void(__thiscall *)(CFonts *, void *, const char *, unsigned long))SAMP_ADDROF(0x66B20))(this, pPoint, pText, dwFormat);
}

void SAMP::CFonts::GetLittleTextScreenSize(void *pPoint, const char *pText, unsigned long dwFormat) {
	((void(__thiscall *)(CFonts *, void *, const char *, unsigned long))SAMP_ADDROF(0x66BD0))(this, pPoint, pText, dwFormat);
}

void SAMP::CFonts::RenderText(ID3DXSprite *pSprite, const char *pText, CRect rect, D3DCOLOR dwColor, bool bShadow) {
	((void(__thiscall *)(CFonts *, ID3DXSprite *, const char *, CRect, D3DCOLOR, bool))SAMP_ADDROF(0x66C80))(this, pSprite, pText, rect, dwColor, bShadow);
}

void SAMP::CFonts::RenderLittleText(ID3DXSprite *pSprite, const char *pText, CRect rect, D3DCOLOR dwColor, bool bShadow) {
	((void(__thiscall *)(CFonts *, ID3DXSprite *, const char *, CRect, D3DCOLOR, bool))SAMP_ADDROF(0x66E00))(this, pSprite, pText, rect, dwColor, bShadow);
}

void SAMP::CFonts::CreateFonts() {
	((void(__thiscall *)(CFonts *))SAMP_ADDROF(0x67200))(this);
}