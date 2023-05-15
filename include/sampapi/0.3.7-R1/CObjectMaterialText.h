/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"

SAMPAPI_BEGIN_PACKED_V037R1

class SAMPAPI_EXPORT CObjectMaterialText {
public:
    IDirect3DDevice9* m_pDevice;
    ID3DXSprite*      m_pSprite;
    ID3DXSprite*      m_pSprite_0; // maybe unused

    CObjectMaterialText(IDirect3DDevice9* pDevice);
    ~CObjectMaterialText();

    void               OnResetDevice();
    void               OnLostDevice();
    IDirect3DTexture9* Create(const char* szText, const char* szFont, char nFontSize, int nBgSizeX, int nBgSizeY, D3DCOLOR fontColor, D3DCOLOR bgColor, bool bBold, char align);
};

SAMPAPI_EXPORT SAMPAPI_VAR CObjectMaterialText*& RefObjectMaterialTextManager();

SAMPAPI_END_PACKED
