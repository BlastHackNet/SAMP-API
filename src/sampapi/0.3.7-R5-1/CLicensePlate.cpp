/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CLicensePlate.h"

SAMPAPI_BEGIN_V037R5_1

SAMPAPI_VAR CLicensePlate*& RefLicensePlateManager() {
    return *(CLicensePlate**)GetAddress(0x26EBA0);
}

CLicensePlate::CLicensePlate(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CLicensePlate*, IDirect3DDevice9*))GetAddress(0x6D9B0))(this, pDevice);
}

CLicensePlate::~CLicensePlate() {
    ((void(__thiscall*)(CLicensePlate*))GetAddress(0x6D9E0))(this);
}

void CLicensePlate::OnLostDevice() {
    ((void(__thiscall*)(CLicensePlate*))GetAddress(0x6D7B0))(this);
}

void CLicensePlate::OnResetDevice() {
    ((void(__thiscall*)(CLicensePlate*))GetAddress(0x6D800))(this);
}

IDirect3DTexture9* CLicensePlate::Create(const char* szText) {
    return ((IDirect3DTexture9 * (__thiscall*)(CLicensePlate*, const char*)) GetAddress(0x6D880))(this, szText);
}

SAMPAPI_END
