/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CLicensePlate.h"

SAMP::CLicensePlate *&SAMP::pLicensePlateManager = *(SAMP::CLicensePlate **)SAMP_ADDROF(0x21A100);

SAMP::CLicensePlate::CLicensePlate(IDirect3DDevice9 *pDevice) {
	((void(__thiscall  *)(CLicensePlate *, IDirect3DDevice9 *))SAMP_ADDROF(0x692D0))(this, pDevice);
}

SAMP::CLicensePlate::~CLicensePlate() {
	((void(__thiscall *)(CLicensePlate *))SAMP_ADDROF(0x69300))(this);
}

void SAMP::CLicensePlate::OnLostDevice() {
	((void(__thiscall *)(CLicensePlate *))SAMP_ADDROF(0x690D0))(this);
}

void SAMP::CLicensePlate::OnResetDevice() {
	((void(__thiscall *)(CLicensePlate *))SAMP_ADDROF(0x69120))(this);
}

IDirect3DTexture9 *SAMP::CLicensePlate::Create(const char *szText) {
	return ((IDirect3DTexture9 *(__thiscall *)(CLicensePlate *, const char *))SAMP_ADDROF(0x691A0))(this, szText);
}