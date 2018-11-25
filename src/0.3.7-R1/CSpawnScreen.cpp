/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CSpawnScreen.h"

SAMP::CSpawnScreen *&SAMP::pSpawnScreen = *(SAMP::CSpawnScreen **)SAMP_ADDROF(0x21A0F4);

void SAMP::CSpawnScreen::SetText(const char *szText) {
	((void(__thiscall *)(CSpawnScreen *, const char *))SAMP_ADDROF(0x6C5B0))(this, szText);
}

void SAMP::CSpawnScreen::OnResetDevice() {
	((void(__thiscall *)(CSpawnScreen *))SAMP_ADDROF(0x6C610))(this);
}

void SAMP::CSpawnScreen::OnLostDevice() {
	((void(__thiscall *)(CSpawnScreen *))SAMP_ADDROF(0x6C8C0))(this);
}

SAMP::CSpawnScreen::CSpawnScreen(IDirect3DDevice9 *pDevice) {
	((void(__thiscall *)(CSpawnScreen *, IDirect3DDevice9 *))SAMP_ADDROF(0x6C910))(this, pDevice);
}

SAMP::CSpawnScreen::~CSpawnScreen() {
	((void(__thiscall *)(CSpawnScreen *))SAMP_ADDROF(0x6C950))(this);
}

void SAMP::CSpawnScreen::Draw() {
	((void(__thiscall *)(CSpawnScreen *))SAMP_ADDROF(0x6C9B0))(this);
}