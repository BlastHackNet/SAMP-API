/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CDeathWindow.h"

SAMPAPI_BEGIN_V037R1

SAMPAPI_VAR CDeathWindow*& RefDeathWindow() {
    return *(CDeathWindow**)GetAddress(0x21A0EC);
}

CDeathWindow::CDeathWindow(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CDeathWindow*, IDirect3DDevice9 * pDevice)) GetAddress(0x669B0))(this, pDevice);
}

CDeathWindow::~CDeathWindow() {
    ((void(__thiscall*)(CDeathWindow*))GetAddress(0x65EA0))(this);
}

void CDeathWindow::InitializeAuxFonts() {
    ((void(__thiscall*)(CDeathWindow*))GetAddress(0x65F10))(this);
}

void CDeathWindow::PushBack() {
    ((void(__thiscall*)(CDeathWindow*))GetAddress(0x65F80))(this);
}

void CDeathWindow::DrawText(const char* szText, CRect rect, D3DCOLOR color, int nFormat) {
    ((void(__thiscall*)(CDeathWindow*, const char*, CRect, D3DCOLOR, int))GetAddress(0x65FA0))(this, szText, rect, color, nFormat);
}

void CDeathWindow::DrawWeaponSprite(const char* szSpriteId, CRect rect, D3DCOLOR color) {
    ((void(__thiscall*)(CDeathWindow*, const char*, CRect, D3DCOLOR))GetAddress(0x660A0))(this, szSpriteId, rect, color);
}

void CDeathWindow::GetWeaponSpriteRectSize(void* pPoint) {
    ((void(__thiscall*)(CDeathWindow*, void*))GetAddress(0x66130))(this, pPoint);
}

const char* CDeathWindow::GetWeaponSpriteId(char nWeapon) {
    return ((const char*(__thiscall*)(CDeathWindow*, char))GetAddress(0x661B0))(this, nWeapon);
}

void CDeathWindow::ResetFonts() {
    ((void(__thiscall*)(CDeathWindow*))GetAddress(0x664B0))(this);
}

void CDeathWindow::Draw() {
    ((void(__thiscall*)(CDeathWindow*))GetAddress(0x66640))(this);
}

void CDeathWindow::AddEntry(const char* szKiller, const char* szVictim, D3DCOLOR killerColor, D3DCOLOR victimColor, char nWeapon) {
    ((void(__thiscall*)(CDeathWindow*, const char*, const char*, D3DCOLOR, D3DCOLOR, char))GetAddress(0x66930))(this, szKiller, szVictim, killerColor, victimColor, nWeapon);
}

void CDeathWindow::AddMessage(const char* szKiller, const char* szVictim, D3DCOLOR killerColor, D3DCOLOR victimColor, char nWeapon) {
    ((void(__thiscall*)(CDeathWindow*, const char*, const char*, D3DCOLOR, D3DCOLOR, char))GetAddress(0x66A10))(this, szKiller, szVictim, killerColor, victimColor, nWeapon);
}

SAMPAPI_END
