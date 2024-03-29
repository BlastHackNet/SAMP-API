/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CObjectMaterialText.h"

SAMPAPI_BEGIN_V03DL_1

SAMPAPI_VAR CObjectMaterialText*& RefObjectMaterialTextManager() {
    return *(CObjectMaterialText**)GetAddress(0x2ACA34);
}

CObjectMaterialText::CObjectMaterialText(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CObjectMaterialText*, IDirect3DDevice9*))GetAddress(0x70320))(this, pDevice);
}

CObjectMaterialText::~CObjectMaterialText() {
    ((void(__thiscall*)(CObjectMaterialText*))GetAddress(0x70340))(this);
}

void CObjectMaterialText::OnLostDevice() {
    ((void(__thiscall*)(CObjectMaterialText*))GetAddress(0x702D0))(this);
}

void CObjectMaterialText::OnResetDevice() {
    ((void(__thiscall*)(CObjectMaterialText*))GetAddress(0x70300))(this);
}

IDirect3DTexture9* CObjectMaterialText::Create(const char* szText, const char* szFont, char nFontSize, int nBgSizeX, int nBgSizeY, D3DCOLOR fontColor, D3DCOLOR bgColor, bool bBold, char align) {
    return ((IDirect3DTexture9 * (__thiscall*)(CObjectMaterialText*, const char*, const char*, char, int, int, D3DCOLOR, D3DCOLOR, bool, char)) GetAddress(0x70350))(this, szText, szFont, nFontSize, nBgSizeX, nBgSizeY, fontColor, bgColor, bBold, align);
}

SAMPAPI_END
