/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CDeathWindow.h"

SAMPAPI_BEGIN_V03DL_1

SAMPAPI_VAR CDeathWindow*& RefDeathWindow() {
    return *(CDeathWindow**)GetAddress(0x26EB88);
}

CDeathWindow::CDeathWindow(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CDeathWindow*, IDirect3DDevice9*))GetAddress(0x6A650))(this, pDevice);
}

CDeathWindow::~CDeathWindow() {
    ((void(__thiscall*)(CDeathWindow*))GetAddress(0x69B40))(this);
}

void CDeathWindow::InitializeAuxFonts() {
    ((void(__thiscall*)(CDeathWindow*))GetAddress(0x69BB0))(this);
}

void CDeathWindow::PushBack() {
    ((void(__thiscall*)(CDeathWindow*))GetAddress(0x69C20))(this);
}

void CDeathWindow::DrawText(const char* szText, CRect rect, D3DCOLOR color, int nFormat) {
    ((void(__thiscall*)(CDeathWindow*, const char*, CRect, D3DCOLOR, int))GetAddress(0x69C40))(this, szText, rect, color, nFormat);
}

void CDeathWindow::DrawWeaponSprite(const char* szSpriteId, CRect rect, D3DCOLOR color) {
    ((void(__thiscall*)(CDeathWindow*, const char*, CRect, D3DCOLOR))GetAddress(0x69D40))(this, szSpriteId, rect, color);
}

void CDeathWindow::GetWeaponSpriteRectSize(void* pPoint) {
    ((void(__thiscall*)(CDeathWindow*, void*))GetAddress(0x69DD0))(this, pPoint);
}

const char* CDeathWindow::GetWeaponSpriteId(char nWeapon) {
    return ((const char*(__thiscall*)(CDeathWindow*, char))GetAddress(0x69E50))(this, nWeapon);
}

void CDeathWindow::ResetFonts() {
    ((void(__thiscall*)(CDeathWindow*))GetAddress(0x6A150))(this);
}

void CDeathWindow::Draw() {
    ((void(__thiscall*)(CDeathWindow*))GetAddress(0x6A2E0))(this);
}

void CDeathWindow::AddEntry(const char* szKiller, const char* szVictim, D3DCOLOR killerColor, D3DCOLOR victimColor, char nWeapon) {
    ((void(__thiscall*)(CDeathWindow*, const char*, const char*, D3DCOLOR, D3DCOLOR, char))GetAddress(0x6A5D0))(this, szKiller, szVictim, killerColor, victimColor, nWeapon);
}

void CDeathWindow::AddMessage(const char* szKiller, const char* szVictim, D3DCOLOR killerColor, D3DCOLOR victimColor, char nWeapon) {
    ((void(__thiscall*)(CDeathWindow*, const char*, const char*, D3DCOLOR, D3DCOLOR, char))GetAddress(0x6A6B0))(this, szKiller, szVictim, killerColor, victimColor, nWeapon);
}

SAMPAPI_END
