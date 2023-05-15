/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/CVector.h"

SAMPAPI_BEGIN_PACKED_V037R5_1

struct SAMPAPI_EXPORT TextLabel {
    char*    m_pText;
    D3DCOLOR m_color;
    CVector  m_position;
    float    m_fDrawDistance;
    bool     m_bBehindWalls;
    ID       m_nAttachedToPlayer;
    ID       m_nAttachedToVehicle;
};

class SAMPAPI_EXPORT CLabelPool {
public:
    enum { MAX_TEXT_LABELS = 2048 };

    TextLabel m_object[MAX_TEXT_LABELS];
    BOOL      m_bNotEmpty[MAX_TEXT_LABELS];

    CLabelPool();
    ~CLabelPool();

    void Create(ID nId, const char* szText, D3DCOLOR color, CVector position, float fDrawDistance, bool bBehindWalls, ID nAttachedToPlayer, ID nAttachedToVehicle);
    BOOL Delete(ID nId);
    void Draw();
};

SAMPAPI_END_PACKED
