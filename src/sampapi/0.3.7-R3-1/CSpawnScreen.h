/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/0.3.7-R3-1/CFonts.h"

SAMPAPI_BEGIN_PACKED_V037R3_1

class SAMPAPI_EXPORT CSpawnScreen {
public:
    BOOL                  m_bEnabled;
    char*                 m_szSpawnText;
    CFonts*               m_pFont;
    IDirect3DDevice9*     m_pDevice;
    IDirect3DTexture9*    m_pTexture;
    IDirect3DStateBlock9* m_pStateBlockSaved;
    IDirect3DStateBlock9* m_pStateBlockDraw;
    ID3DXSprite*          m_pSprite;

    CSpawnScreen(IDirect3DDevice9* pDevice);
    ~CSpawnScreen();

    void SetText(const char* szString);
    void OnResetDevice();
    void OnLostDevice();
    void Draw();
};

SAMPAPI_EXPORT SAMPAPI_VAR CSpawnScreen*& RefSpawnScreen();

SAMPAPI_END_PACKED
