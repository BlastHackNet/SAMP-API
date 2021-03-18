/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CLicensePlate.h"

SAMPAPI_BEGIN_V037R3_1

SAMPAPI_VAR CLicensePlate*& RefLicensePlateManager() {
    return *(CLicensePlate**)GetAddress(0x26E8E8);
}

CLicensePlate::CLicensePlate(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CLicensePlate*, IDirect3DDevice9*))GetAddress(0x6D240))(this, pDevice);
}

CLicensePlate::~CLicensePlate() {
    ((void(__thiscall*)(CLicensePlate*))GetAddress(0x6D270))(this);
}

void CLicensePlate::OnLostDevice() {
    ((void(__thiscall*)(CLicensePlate*))GetAddress(0x6D040))(this);
}

void CLicensePlate::OnResetDevice() {
    ((void(__thiscall*)(CLicensePlate*))GetAddress(0x6D090))(this);
}

IDirect3DTexture9* CLicensePlate::Create(const char* szText) {
    return ((IDirect3DTexture9 * (__thiscall*)(CLicensePlate*, const char*)) GetAddress(0x6D110))(this, szText);
}

SAMPAPI_END
