/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CLabel.h"

SAMPAPI_BEGIN_V037R1

SAMPAPI_VAR CLabel*& RefLabel() {
    return *(CLabel**)GetAddress(0x21A0C0);
}

CLabel::CLabel(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CLabel*, IDirect3DDevice9*))GetAddress(0x674D0))(this, pDevice);
}

CLabel::~CLabel() {
    ((void(__thiscall*)(CLabel*))GetAddress(0x674F0))(this);
}

void CLabel::Begin() {
    ((void(__thiscall*)(CLabel*))GetAddress(0x67590))(this);
}

void CLabel::End() {
    ((void(__thiscall*)(CLabel*))GetAddress(0x675A0))(this);
}

void CLabel::OnLostDevice() {
    ((void(__thiscall*)(CLabel*))GetAddress(0x67510))(this);
}

void CLabel::OnResetDevice() {
    ((void(__thiscall*)(CLabel*))GetAddress(0x67520))(this);
}

void CLabel::Draw(CVector* pPosition, const char* szText, D3DCOLOR color, BOOL bShadow, bool bNoObstacles) {
    ((void(__thiscall*)(CLabel*, CVector*, const char*, D3DCOLOR, bool, bool))GetAddress(0x675B0))(this, pPosition, szText, color, bShadow, bNoObstacles);
}

BOOL CLabel::HasNoObstacles(CVector position) {
    return ((BOOL(__thiscall*)(CLabel*, CVector))GetAddress(0x67530))(this, position);
}

SAMPAPI_END
