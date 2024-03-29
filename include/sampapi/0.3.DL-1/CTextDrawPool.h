/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/0.3.DL-1/CTextDraw.h"

SAMPAPI_BEGIN_PACKED_V03DL_1

class SAMPAPI_EXPORT CTextDrawPool {
public:
    enum {
        MAX_TEXTDRAWS = 2048,
        MAX_LOCAL_TEXTDRAWS = 256,
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
