/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CDeathWindow.h"

SAMP::CDeathWindow *&SAMP::pDeathWindow = *(SAMP::CDeathWindow **)SAMP_ADDROF(0x26E8D0);

SAMP::CDeathWindow::CDeathWindow(IDirect3DDevice9 *pDevice) {
	((void(__thiscall *)(CDeathWindow *, IDirect3DDevice9 *))SAMP_ADDROF(0x69EE0))(this, pDevice);
}

SAMP::CDeathWindow::~CDeathWindow() {
	((void(__thiscall *)(CDeathWindow *))SAMP_ADDROF(0x693D0))(this);
}

void SAMP::CDeathWindow::InitializeAuxFonts() {
	((void(__thiscall *)(CDeathWindow *))SAMP_ADDROF(0x69440))(this);
}

void SAMP::CDeathWindow::PushBack() {
	((void(__thiscall *)(CDeathWindow *))SAMP_ADDROF(0x694B0))(this);
}

void SAMP::CDeathWindow::DrawText(const char *szText, CRect rect, D3DCOLOR color, int nFormat) {
	((void(__thiscall *)(CDeathWindow *, const char *, CRect, D3DCOLOR, int))SAMP_ADDROF(0x694D0))(this, szText, rect, color, nFormat);
}

void SAMP::CDeathWindow::DrawWeaponSprite(const char *szSpriteId, CRect rect, D3DCOLOR color) {
	((void(__thiscall *)(CDeathWindow *, const char *, CRect, D3DCOLOR))SAMP_ADDROF(0x695D0))(this, szSpriteId, rect, color);
}

void SAMP::CDeathWindow::GetWeaponSpriteRectSize(void *pPoint) {
	((void(__thiscall *)(CDeathWindow *, void *))SAMP_ADDROF(0x69660))(this, pPoint);
}

const char *SAMP::CDeathWindow::GetWeaponSpriteId(char nWeapon) {
	return ((const char *(__thiscall *)(CDeathWindow *, char))SAMP_ADDROF(0x696E0))(this, nWeapon);
}

void SAMP::CDeathWindow::ResetFonts() {
	((void(__thiscall *)(CDeathWindow *))SAMP_ADDROF(0x699E0))(this);
}

void SAMP::CDeathWindow::Draw() {
	((void(__thiscall *)(CDeathWindow *))SAMP_ADDROF(0x69B70))(this);
}

void SAMP::CDeathWindow::AddEntry(const char *szKiller, const char *szVictim, D3DCOLOR killerColor, D3DCOLOR victimColor, char nWeapon) {
	((void(__thiscall *)(CDeathWindow *, const char *, const char *, D3DCOLOR, D3DCOLOR, char))SAMP_ADDROF(0x69E60))(this, szKiller, szVictim, killerColor, victimColor, nWeapon);
}

void SAMP::CDeathWindow::AddMessage(const char *szKiller, const char *szVictim, D3DCOLOR killerColor, D3DCOLOR victimColor, char nWeapon) {
	((void(__thiscall *)(CDeathWindow *, const char *, const char *, D3DCOLOR, D3DCOLOR, char))SAMP_ADDROF(0x69F40))(this, szKiller, szVictim, killerColor, victimColor, nWeapon);
}