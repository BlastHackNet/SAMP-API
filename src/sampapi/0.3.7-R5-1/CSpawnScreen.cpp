/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CSpawnScreen.h"

SAMPAPI_BEGIN_V037R5_1

SAMPAPI_VAR CSpawnScreen*& RefSpawnScreen() {
    return *(CSpawnScreen**)GetAddress(0x26EB90);
}

CSpawnScreen::CSpawnScreen(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CSpawnScreen*, IDirect3DDevice9*))GetAddress(0x70EF0))(this, pDevice);
}

CSpawnScreen::~CSpawnScreen() {
    ((void(__thiscall*)(CSpawnScreen*))GetAddress(0x70F30))(this);
}

void CSpawnScreen::SetText(const char* szString) {
    ((void(__thiscall*)(CSpawnScreen*, const char*))GetAddress(0x70B90))(this, szString);
}

void CSpawnScreen::OnResetDevice() {
    ((void(__thiscall*)(CSpawnScreen*))GetAddress(0x70BF0))(this);
}

void CSpawnScreen::OnLostDevice() {
    ((void(__thiscall*)(CSpawnScreen*))GetAddress(0x70EA0))(this);
}

void CSpawnScreen::Draw() {
    ((void(__thiscall*)(CSpawnScreen*))GetAddress(0x70F90))(this);
}

SAMPAPI_END
