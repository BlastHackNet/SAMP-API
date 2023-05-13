/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"

SAMPAPI_BEGIN_PACKED_V037R5_1

class SAMPAPI_EXPORT CChatBubble {
public:
    struct SAMPAPI_EXPORT Player {
        BOOL     m_bExists;
        char     m_szText[256];
        int      m_creationTick;
        int      m_lifeSpan;
        D3DCOLOR m_color;
        float    m_fDrawDistance;
        int      m_nMaxLineLength;
    } m_player[1004];

    CChatBubble();

    void Add(ID nPlayer, const char* szText, D3DCOLOR color, float fDrawDistance, int lifeSpan);
    void Draw();
};

SAMPAPI_EXPORT SAMPAPI_VAR CChatBubble*& RefChatBubble();

SAMPAPI_END_PACKED
