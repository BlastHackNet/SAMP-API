/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/0.3.7-R3-1/CTextDraw.h"

SAMPAPI_BEGIN_PACKED_V037R3_1

class SAMPAPI_EXPORT CTextDrawPool {
public:
    enum {
        MAX_TEXTDRAWS = 2048,
        MAX_LOCAL_TEXTDRAWS = 256
    };

    BOOL       m_bNotEmpty[MAX_TEXTDRAWS + MAX_LOCAL_TEXTDRAWS];
    CTextDraw* m_pObject[MAX_TEXTDRAWS + MAX_LOCAL_TEXTDRAWS];

    CTextDrawPool();
    ~CTextDrawPool();

    void       Delete(ID nId);
    void       Draw();
    CTextDraw* Create(int nId, CTextDraw::Transmit* pData, const char* szText);
};

SAMPAPI_END_PACKED
