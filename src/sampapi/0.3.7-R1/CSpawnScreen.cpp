/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CSpawnScreen.h"

SAMPAPI_BEGIN_V037R1

SAMPAPI_VAR CSpawnScreen*& RefSpawnScreen() {
    return *(CSpawnScreen**)GetAddress(0x21A0F4);
}

void CSpawnScreen::SetText(const char* szText) {
    ((void(__thiscall*)(CSpawnScreen*, const char*))GetAddress(0x6C5B0))(this, szText);
}

void CSpawnScreen::OnResetDevice() {
    ((void(__thiscall*)(CSpawnScreen*))GetAddress(0x6C610))(this);
}

void CSpawnScreen::OnLostDevice() {
    ((void(__thiscall*)(CSpawnScreen*))GetAddress(0x6C8C0))(this);
}

CSpawnScreen::CSpawnScreen(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CSpawnScreen*, IDirect3DDevice9*))GetAddress(0x6C910))(this, pDevice);
}

CSpawnScreen::~CSpawnScreen() {
    ((void(__thiscall*)(CSpawnScreen*))GetAddress(0x6C950))(this);
}

void CSpawnScreen::Draw() {
    ((void(__thiscall*)(CSpawnScreen*))GetAddress(0x6C9B0))(this);
}

SAMPAPI_END
