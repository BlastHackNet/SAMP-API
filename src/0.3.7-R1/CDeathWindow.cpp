/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CDeathWindow.h"

SAMP::CDeathWindow *&SAMP::pDeathWindow = *(SAMP::CDeathWindow **)SAMP_ADDROF(0x21A0EC);

SAMP::CDeathWindow::CDeathWindow(IDirect3DDevice9 *pDevice) {
	((void(__thiscall *)(CDeathWindow *, IDirect3DDevice9 *pDevice))SAMP_ADDROF(0x669B0))(this, pDevice);
}

void SAMP::CDeathWindow::InitAuxFont() {
	((void(__thiscall *)(CDeathWindow *))SAMP_ADDROF(0x65F10))(this);
}

void SAMP::CDeathWindow::PushBack() {
	((void(__thiscall *)(CDeathWindow *))SAMP_ADDROF(0x65F80))(this);
}

void SAMP::CDeathWindow::RenderText(const char *pText, CRect rect, D3DCOLOR dwColor) {
	((void(__thiscall *)(CDeathWindow *, const char *, CRect, D3DCOLOR))SAMP_ADDROF(0x65FA0))(this, pText, rect, dwColor);
}

void SAMP::CDeathWindow::RenderWeaponSprite(const char *pWeaponChar, CRect rect, D3DCOLOR dwColor) {
	((void(__thiscall *)(CDeathWindow *, const char *, CRect, D3DCOLOR))SAMP_ADDROF(0x660A0))(this, pWeaponChar, rect, dwColor);
}

void SAMP::CDeathWindow::GetWeaponRectSize(void *pPoint) {
	((void(__thiscall *)(CDeathWindow *, void *))SAMP_ADDROF(0x66130))(this, pPoint);
}

const char *SAMP::CDeathWindow::GetWeaponSpriteId(char nWeapon) {
	return ((const char *(__thiscall *)(CDeathWindow *, char))SAMP_ADDROF(0x661B0))(this, nWeapon);
}

void SAMP::CDeathWindow::CreateFonts() {
	((void(__thiscall *)(CDeathWindow *))SAMP_ADDROF(0x664B0))(this);
}

void SAMP::CDeathWindow::Draw() {
	((void(__thiscall *)(CDeathWindow *))SAMP_ADDROF(0x66640))(this);
}

void SAMP::CDeathWindow::AddEntry(const char *pKiller, const char *pVictim, D3DCOLOR dwKiller, D3DCOLOR dwVictim, char nWeapon) {
	((void(__thiscall *)(CDeathWindow *, const char *, const char *, D3DCOLOR, D3DCOLOR, char))SAMP_ADDROF(0x66930))(this, pKiller, pVictim, dwKiller, dwVictim, nWeapon);
}

void SAMP::CDeathWindow::AddMessage(const char *pKiller, const char *pVictim, D3DCOLOR dwKiller, D3DCOLOR dwVictim, char nWeapon) {
	((void(__thiscall *)(CDeathWindow *, const char *, const char *, D3DCOLOR, D3DCOLOR, char))SAMP_ADDROF(0x66A10))(this, pKiller, pVictim, dwKiller, dwVictim, nWeapon);
}