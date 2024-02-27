/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CSpawnScreen.h"

SAMPAPI_BEGIN_V03DL_1

SAMPAPI_VAR CSpawnScreen*& RefSpawnScreen() {
    return *(CSpawnScreen**)GetAddress(0x2ACA20);
}

CSpawnScreen::CSpawnScreen(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CSpawnScreen*, IDirect3DDevice9*))GetAddress(0x70990))(this, pDevice);
}

CSpawnScreen::~CSpawnScreen() {
    ((void(__thiscall*)(CSpawnScreen*))GetAddress(0x709D0))(this);
}

void CSpawnScreen::SetText(const char* szString) {
    ((void(__thiscall*)(CSpawnScreen*, const char*))GetAddress(0x70630))(this, szString);
}

void CSpawnScreen::OnResetDevice() {
    ((void(__thiscall*)(CSpawnScreen*))GetAddress(0x70690))(this);
}

void CSpawnScreen::OnLostDevice() {
    ((void(__thiscall*)(CSpawnScreen*))GetAddress(0x70940))(this);
}

void CSpawnScreen::Draw() {
    ((void(__thiscall*)(CSpawnScreen*))GetAddress(0x70A30))(this);
}

SAMPAPI_END
