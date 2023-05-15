/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CPlayerTags.h"

SAMPAPI_BEGIN_V037R5_1

SAMPAPI_VAR CPlayerTags*& RefPlayerTags() {
    return *(CPlayerTags**)GetAddress(0x26EB48);
}

CPlayerTags::CPlayerTags(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CPlayerTags*, IDirect3DDevice9*))GetAddress(0x6CCF0))(this, pDevice);
}

CPlayerTags::~CPlayerTags() {
    ((void(__thiscall*)(CPlayerTags*))GetAddress(0x6CD20))(this);
}

void CPlayerTags::EndHealthBar() {
    ((void(__thiscall*)(CPlayerTags*))GetAddress(0x6CD50))(this);
}

void CPlayerTags::BeginLabel() {
    ((void(__thiscall*)(CPlayerTags*))GetAddress(0x6CD80))(this);
}

void CPlayerTags::EndLabel() {
    ((void(__thiscall*)(CPlayerTags*))GetAddress(0x6CD90))(this);
}

void CPlayerTags::DrawLabel(CVector* pPosition, const char* szText, D3DCOLOR color, float fDistanceToCamera, bool bDrawStatus, int nStatus) {
    ((void(__thiscall*)(CPlayerTags*, CVector*, const char*, D3DCOLOR, float, bool, int))GetAddress(0x6CDA0))(this, pPosition, szText, color, fDistanceToCamera, bDrawStatus, nStatus);
}

void CPlayerTags::DrawHealthBar(CVector* pPosition, float fHealth, float fArmour, float fDistanceToCamera) {
    ((void(__thiscall*)(CPlayerTags*, CVector*, float, float, float))GetAddress(0x6D0A0))(this, pPosition, fHealth, fArmour, fDistanceToCamera);
}

void CPlayerTags::OnLostDevice() {
    ((void(__thiscall*)(CPlayerTags*))GetAddress(0x6D650))(this);
}

void CPlayerTags::OnResetDevice() {
    ((void(__thiscall*)(CPlayerTags*))GetAddress(0x6D680))(this);
}

void CPlayerTags::BeginHealthBar() {
    ((void(__thiscall*)(CPlayerTags*))GetAddress(0x6D6B0))(this);
}

SAMPAPI_END
