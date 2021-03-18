/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CSpawnScreen.h"

SAMPAPI_BEGIN_V037R3_1

SAMPAPI_VAR CSpawnScreen*& RefSpawnScreen() {
    return *(CSpawnScreen**)GetAddress(0x26E8D8);
}

CSpawnScreen::CSpawnScreen(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CSpawnScreen*, IDirect3DDevice9*))GetAddress(0x70800))(this, pDevice);
}

CSpawnScreen::~CSpawnScreen() {
    ((void(__thiscall*)(CSpawnScreen*))GetAddress(0x70840))(this);
}

void CSpawnScreen::SetText(const char* szString) {
    ((void(__thiscall*)(CSpawnScreen*, const char*))GetAddress(0x704A0))(this, szString);
}

void CSpawnScreen::OnResetDevice() {
    ((void(__thiscall*)(CSpawnScreen*))GetAddress(0x70500))(this);
}

void CSpawnScreen::OnLostDevice() {
    ((void(__thiscall*)(CSpawnScreen*))GetAddress(0x707B0))(this);
}

void CSpawnScreen::Draw() {
    ((void(__thiscall*)(CSpawnScreen*))GetAddress(0x708A0))(this);
}

SAMPAPI_END
