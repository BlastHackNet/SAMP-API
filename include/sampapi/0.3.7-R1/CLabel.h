/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/CVector.h"

SAMPAPI_BEGIN_PACKED_V037R1

class SAMPAPI_EXPORT CLabel {
public:
    IDirect3DDevice9* m_pDevice;
    ID3DXSprite*      m_pSprite;

    CLabel(IDirect3DDevice9* pDevice);
    ~CLabel();

    void OnLostDevice();
    void OnResetDevice();
    BOOL HasNoObstacles(CVector position);
    void Begin();
    void End();
    void Draw(CVector* pPosition, const char* szText, D3DCOLOR color, BOOL bShadow, bool bNoObstacles);
};

SAMPAPI_EXPORT SAMPAPI_VAR CLabel*& RefLabel();

SAMPAPI_END_PACKED
