/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CLabel.h"

SAMPAPI_BEGIN_V037R3_1

SAMPAPI_VAR CLabel*& RefLabel() {
    return *(CLabel**)GetAddress(0x26E8A4);
}

CLabel::CLabel(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CLabel*, IDirect3DDevice9*))GetAddress(0x6B440))(this, pDevice);
}

CLabel::~CLabel() {
    ((void(__thiscall*)(CLabel*))GetAddress(0x6B460))(this);
}

void CLabel::OnLostDevice() {
    ((void(__thiscall*)(CLabel*))GetAddress(0x6B480))(this);
}

void CLabel::OnResetDevice() {
    ((void(__thiscall*)(CLabel*))GetAddress(0x6B490))(this);
}

BOOL CLabel::HasNoObstacles(CVector position) {
    return ((BOOL(__thiscall*)(CLabel*, CVector))GetAddress(0x6B4A0))(this, position);
}

void CLabel::Begin() {
    ((void(__thiscall*)(CLabel*))GetAddress(0x6B500))(this);
}

void CLabel::End() {
    ((void(__thiscall*)(CLabel*))GetAddress(0x6B510))(this);
}

void CLabel::Draw(CVector* pPosition, const char* szText, D3DCOLOR color, BOOL bShadow, bool bNoObstacles) {
    ((void(__thiscall*)(CLabel*, CVector*, const char*, D3DCOLOR, BOOL, bool))GetAddress(0x6B520))(this, pPosition, szText, color, bShadow, bNoObstacles);
}

SAMPAPI_END
