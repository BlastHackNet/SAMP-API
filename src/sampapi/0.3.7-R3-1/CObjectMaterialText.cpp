/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CObjectMaterialText.h"

SAMPAPI_BEGIN_V037R3_1

SAMPAPI_VAR CObjectMaterialText*& RefObjectMaterialTextManager() {
    return *(CObjectMaterialText**)GetAddress(0x26E8EC);
}

CObjectMaterialText::CObjectMaterialText(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CObjectMaterialText*, IDirect3DDevice9*))GetAddress(0x70190))(this, pDevice);
}

CObjectMaterialText::~CObjectMaterialText() {
    ((void(__thiscall*)(CObjectMaterialText*))GetAddress(0x701B0))(this);
}

void CObjectMaterialText::OnLostDevice() {
    ((void(__thiscall*)(CObjectMaterialText*))GetAddress(0x70140))(this);
}

void CObjectMaterialText::OnResetDevice() {
    ((void(__thiscall*)(CObjectMaterialText*))GetAddress(0x70170))(this);
}

IDirect3DTexture9* CObjectMaterialText::Create(const char* szText, const char* szFont, char nFontSize, int nBgSizeX, int nBgSizeY, D3DCOLOR fontColor, D3DCOLOR bgColor, bool bBold, char align) {
    return ((IDirect3DTexture9 * (__thiscall*)(CObjectMaterialText*, const char*, const char*, char, int, int, D3DCOLOR, D3DCOLOR, bool, char)) GetAddress(0x701C0))(this, szText, szFont, nFontSize, nBgSizeX, nBgSizeY, fontColor, bgColor, bBold, align);
}

SAMPAPI_END
