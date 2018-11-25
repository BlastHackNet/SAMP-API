/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CLabel.h"

SAMP::CLabel *&SAMP::pLabel = *(SAMP::CLabel **)SAMP_ADDROF(0x21A0C0);

SAMP::CLabel::CLabel(IDirect3DDevice9 *pDevice) {
	((void(__thiscall *)(CLabel *, IDirect3DDevice9 *))SAMP_ADDROF(0x674D0))(this, pDevice);
}

void SAMP::CLabel::Begin() {
	((void(__thiscall *)(CLabel *))SAMP_ADDROF(0x67590))(this);
}

void SAMP::CLabel::End() {
	((void(__thiscall *)(CLabel *))SAMP_ADDROF(0x675A0))(this);
}

void SAMP::CLabel::OnLostDevice() {
	((void(__thiscall *)(CLabel *))SAMP_ADDROF(0x67510))(this);
}

void SAMP::CLabel::OnResetDevice() {
	((void(__thiscall *)(CLabel *))SAMP_ADDROF(0x67520))(this);
}

void SAMP::CLabel::Draw(CVector *pPos, const char *szText, D3DCOLOR dwColor, bool bShadow, bool bIfHasNoObstacles) {
	((void(__thiscall *)(CLabel *, CVector *, const char *, D3DCOLOR, bool, bool))SAMP_ADDROF(0x675B0))(this, pPos, szText, dwColor, bShadow, bIfHasNoObstacles);
}