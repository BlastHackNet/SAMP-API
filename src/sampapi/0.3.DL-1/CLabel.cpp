/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CLabel.h"

SAMPAPI_BEGIN_V03DL_1

SAMPAPI_VAR CLabel*& RefLabel() {
    return *(CLabel**)GetAddress(0x2AC9EC);
}

CLabel::CLabel(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CLabel*, IDirect3DDevice9*))GetAddress(0x6B5F0))(this, pDevice);
}

CLabel::~CLabel() {
    ((void(__thiscall*)(CLabel*))GetAddress(0x6B610))(this);
}

void CLabel::OnLostDevice() {
    ((void(__thiscall*)(CLabel*))GetAddress(0x6B630))(this);
}

void CLabel::OnResetDevice() {
    ((void(__thiscall*)(CLabel*))GetAddress(0x6B640))(this);
}

BOOL CLabel::HasNoObstacles(CVector position) {
    return ((BOOL(__thiscall*)(CLabel*, CVector))GetAddress(0x6B650))(this, position);
}

void CLabel::Begin() {
    ((void(__thiscall*)(CLabel*))GetAddress(0x6B6B0))(this);
}

void CLabel::End() {
    ((void(__thiscall*)(CLabel*))GetAddress(0x6B6C0))(this);
}

void CLabel::Draw(CVector* pPosition, const char* szText, D3DCOLOR color, BOOL bShadow, bool bNoObstacles) {
    ((void(__thiscall*)(CLabel*, CVector*, const char*, D3DCOLOR, BOOL, bool))GetAddress(0x6B6D0))(this, pPosition, szText, color, bShadow, bNoObstacles);
}

SAMPAPI_END
