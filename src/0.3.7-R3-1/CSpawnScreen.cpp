/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CSpawnScreen.h"

SAMP::CSpawnScreen *&SAMP::pSpawnScreen = *(SAMP::CSpawnScreen **)SAMP_ADDROF(0x26E8D8);

SAMP::CSpawnScreen::CSpawnScreen(IDirect3DDevice9 *pDevice) {
	((void(__thiscall *)(CSpawnScreen *, IDirect3DDevice9 *))SAMP_ADDROF(0x70800))(this, pDevice);
}

SAMP::CSpawnScreen::~CSpawnScreen() {
	((void(__thiscall *)(CSpawnScreen *))SAMP_ADDROF(0x70840))(this);
}

void SAMP::CSpawnScreen::SetText(const char *szString) {
	((void(__thiscall *)(CSpawnScreen *, const char *))SAMP_ADDROF(0x704A0))(this, szString);
}

void SAMP::CSpawnScreen::OnResetDevice() {
	((void(__thiscall *)(CSpawnScreen *))SAMP_ADDROF(0x70500))(this);
}

void SAMP::CSpawnScreen::OnLostDevice() {
	((void(__thiscall *)(CSpawnScreen *))SAMP_ADDROF(0x707B0))(this);
}

void SAMP::CSpawnScreen::Draw() {
	((void(__thiscall *)(CSpawnScreen *))SAMP_ADDROF(0x708A0))(this);
}