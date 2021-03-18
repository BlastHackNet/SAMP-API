/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CLicensePlate.h"

SAMPAPI_BEGIN_V037R1

SAMPAPI_VAR CLicensePlate*& RefLicensePlateManager() {
    return *(CLicensePlate**)GetAddress(0x21A100);
}

CLicensePlate::CLicensePlate(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CLicensePlate*, IDirect3DDevice9*))GetAddress(0x692D0))(this, pDevice);
}

CLicensePlate::~CLicensePlate() {
    ((void(__thiscall*)(CLicensePlate*))GetAddress(0x69300))(this);
}

void CLicensePlate::OnLostDevice() {
    ((void(__thiscall*)(CLicensePlate*))GetAddress(0x690D0))(this);
}

void CLicensePlate::OnResetDevice() {
    ((void(__thiscall*)(CLicensePlate*))GetAddress(0x69120))(this);
}

IDirect3DTexture9* CLicensePlate::Create(const char* szText) {
    return ((IDirect3DTexture9 * (__thiscall*)(CLicensePlate*, const char*)) GetAddress(0x691A0))(this, szText);
}

SAMPAPI_END
