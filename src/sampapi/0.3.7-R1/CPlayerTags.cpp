/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CPlayerTags.h"

SAMPAPI_BEGIN_V037R1

SAMPAPI_VAR CPlayerTags*& RefPlayerTags() {
    return *(CPlayerTags**)GetAddress(0x21A0B0);
}

CPlayerTags::CPlayerTags(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CPlayerTags*, IDirect3DDevice9*))GetAddress(0x68610))(this, pDevice);
}

CPlayerTags::~CPlayerTags() {
    ((void(__thiscall*)(CPlayerTags*))GetAddress(0x68640))(this);
}

void CPlayerTags::BeginLabel() {
    ((void(__thiscall*)(CPlayerTags*))GetAddress(0x686A0))(this);
}

void CPlayerTags::DrawLabel(CVector* pPosition, const char* szText, D3DCOLOR color, float fDistanceToCamera, bool bDrawStatus, int nStatus) {
    ((void(__thiscall*)(CPlayerTags*, CVector*, const char*, D3DCOLOR, float, bool, int))GetAddress(0x686C0))(this, pPosition, szText, color, fDistanceToCamera, bDrawStatus, nStatus);
}

void CPlayerTags::EndLabel() {
    ((void(__thiscall*)(CPlayerTags*))GetAddress(0x686B0))(this);
}

void CPlayerTags::BeginHealthBar() {
    ((void(__thiscall*)(CPlayerTags*))GetAddress(0x68FD0))(this);
}

void CPlayerTags::DrawHealthBar(CVector* pPosition, float fHealth, float fArmour, float fDistanceToCamera) {
    ((void(__thiscall*)(CPlayerTags*, CVector*, float, float, float))GetAddress(0x689C0))(this, pPosition, fHealth, fArmour, fDistanceToCamera);
}

void CPlayerTags::EndHealthBar() {
    ((void(__thiscall*)(CPlayerTags*))GetAddress(0x68670))(this);
}

void CPlayerTags::OnLostDevice() {
    ((void(__thiscall*)(CPlayerTags*))GetAddress(0x68F70))(this);
}

void CPlayerTags::OnResetDevice() {
    ((void(__thiscall*)(CPlayerTags*))GetAddress(0x68FA0))(this);
}

SAMPAPI_END
