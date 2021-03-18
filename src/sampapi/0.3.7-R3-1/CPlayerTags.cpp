/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CPlayerTags.h"

SAMPAPI_BEGIN_V037R3_1

SAMPAPI_VAR CPlayerTags*& RefPlayerTags() {
    return *(CPlayerTags**)GetAddress(0x26E890);
}

CPlayerTags::CPlayerTags(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CPlayerTags*, IDirect3DDevice9*))GetAddress(0x6C580))(this, pDevice);
}

CPlayerTags::~CPlayerTags() {
    ((void(__thiscall*)(CPlayerTags*))GetAddress(0x6C5B0))(this);
}

void CPlayerTags::EndHealthBar() {
    ((void(__thiscall*)(CPlayerTags*))GetAddress(0x6C5E0))(this);
}

void CPlayerTags::BeginLabel() {
    ((void(__thiscall*)(CPlayerTags*))GetAddress(0x6C610))(this);
}

void CPlayerTags::EndLabel() {
    ((void(__thiscall*)(CPlayerTags*))GetAddress(0x6C620))(this);
}

void CPlayerTags::DrawLabel(CVector* pPosition, const char* szText, D3DCOLOR color, float fDistanceToCamera, bool bDrawStatus, int nStatus) {
    ((void(__thiscall*)(CPlayerTags*, CVector*, const char*, D3DCOLOR, float, bool, int))GetAddress(0x6C630))(this, pPosition, szText, color, fDistanceToCamera, bDrawStatus, nStatus);
}

void CPlayerTags::DrawHealthBar(CVector* pPosition, float fHealth, float fArmour, float fDistanceToCamera) {
    ((void(__thiscall*)(CPlayerTags*, CVector*, float, float, float))GetAddress(0x6C930))(this, pPosition, fHealth, fArmour, fDistanceToCamera);
}

void CPlayerTags::OnLostDevice() {
    ((void(__thiscall*)(CPlayerTags*))GetAddress(0x6CEE0))(this);
}

void CPlayerTags::OnResetDevice() {
    ((void(__thiscall*)(CPlayerTags*))GetAddress(0x6CF10))(this);
}

void CPlayerTags::BeginHealthBar() {
    ((void(__thiscall*)(CPlayerTags*))GetAddress(0x6CF40))(this);
}

SAMPAPI_END
