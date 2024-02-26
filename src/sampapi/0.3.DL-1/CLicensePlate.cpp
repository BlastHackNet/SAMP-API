/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CLicensePlate.h"

SAMPAPI_BEGIN_V03DL_1

SAMPAPI_VAR CLicensePlate*& RefLicensePlateManager() {
    return *(CLicensePlate**)GetAddress(0x2ACA30);
}

CLicensePlate::CLicensePlate(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CLicensePlate*, IDirect3DDevice9*))GetAddress(0x6D3F0))(this, pDevice);
}

CLicensePlate::~CLicensePlate() {
    ((void(__thiscall*)(CLicensePlate*))GetAddress(0x6D420))(this);
}

void CLicensePlate::OnLostDevice() {
    ((void(__thiscall*)(CLicensePlate*))GetAddress(0x6D1F0))(this);
}

void CLicensePlate::OnResetDevice() {
    ((void(__thiscall*)(CLicensePlate*))GetAddress(0x6D240))(this);
}

IDirect3DTexture9* CLicensePlate::Create(const char* szText) {
    return ((IDirect3DTexture9 * (__thiscall*)(CLicensePlate*, const char*)) GetAddress(0x6D2C0))(this, szText);
}

SAMPAPI_END
