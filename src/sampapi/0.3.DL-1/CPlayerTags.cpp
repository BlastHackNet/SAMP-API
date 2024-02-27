/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CPlayerTags.h"

SAMPAPI_BEGIN_V03DL_1

SAMPAPI_VAR CPlayerTags*& RefPlayerTags() {
    return *(CPlayerTags**)GetAddress(0x2AC9D8);
}

CPlayerTags::CPlayerTags(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CPlayerTags*, IDirect3DDevice9*))GetAddress(0x6C730))(this, pDevice);
}

CPlayerTags::~CPlayerTags() {
    ((void(__thiscall*)(CPlayerTags*))GetAddress(0x6C760))(this);
}

void CPlayerTags::EndHealthBar() {
    ((void(__thiscall*)(CPlayerTags*))GetAddress(0x6C790))(this);
}

void CPlayerTags::BeginLabel() {
    ((void(__thiscall*)(CPlayerTags*))GetAddress(0x6C7C0))(this);
}

void CPlayerTags::EndLabel() {
    ((void(__thiscall*)(CPlayerTags*))GetAddress(0x6C7D0))(this);
}

void CPlayerTags::DrawLabel(CVector* pPosition, const char* szText, D3DCOLOR color, float fDistanceToCamera, bool bDrawStatus, int nStatus) {
    ((void(__thiscall*)(CPlayerTags*, CVector*, const char*, D3DCOLOR, float, bool, int))GetAddress(0x6C7E0))(this, pPosition, szText, color, fDistanceToCamera, bDrawStatus, nStatus);
}

void CPlayerTags::DrawHealthBar(CVector* pPosition, float fHealth, float fArmour, float fDistanceToCamera) {
    ((void(__thiscall*)(CPlayerTags*, CVector*, float, float, float))GetAddress(0x6CAE0))(this, pPosition, fHealth, fArmour, fDistanceToCamera);
}

void CPlayerTags::OnLostDevice() {
    ((void(__thiscall*)(CPlayerTags*))GetAddress(0x6D090))(this);
}

void CPlayerTags::OnResetDevice() {
    ((void(__thiscall*)(CPlayerTags*))GetAddress(0x6D0C0))(this);
}

void CPlayerTags::BeginHealthBar() {
    ((void(__thiscall*)(CPlayerTags*))GetAddress(0x6D0F0))(this);
}

SAMPAPI_END
