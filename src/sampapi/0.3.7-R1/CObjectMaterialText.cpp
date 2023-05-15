/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CObjectMaterialText.h"

SAMPAPI_BEGIN_V037R1

SAMPAPI_VAR CObjectMaterialText*& RefObjectMaterialTextManager() {
    return *(CObjectMaterialText**)GetAddress(0x21A104);
}

CObjectMaterialText::CObjectMaterialText(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CObjectMaterialText*, IDirect3DDevice9*))GetAddress(0x6C2A0))(this, pDevice);
}

CObjectMaterialText::~CObjectMaterialText() {
    ((void(__thiscall*)(CObjectMaterialText*))GetAddress(0x6C2C0))(this);
}

void CObjectMaterialText::OnLostDevice() {
    ((void(__thiscall*)(CObjectMaterialText*))GetAddress(0x6C250))(this);
}

void CObjectMaterialText::OnResetDevice() {
    ((void(__thiscall*)(CObjectMaterialText*))GetAddress(0x6C280))(this);
}

IDirect3DTexture9* CObjectMaterialText::Create(const char* szText, const char* szFont, char nFontSize, int nBgSizeX, int nBgSizeY, D3DCOLOR fontColor, D3DCOLOR bgColor, bool bBold, char align) {
    return ((IDirect3DTexture9 * (__thiscall*)(CObjectMaterialText*, const char*, const char*, char, int, int, D3DCOLOR, D3DCOLOR, bool, char)) GetAddress(0x6C2D0))(this, szText, szFont, nFontSize, nBgSizeX, nBgSizeY, fontColor, bgColor, bBold, align);
}

SAMPAPI_END
