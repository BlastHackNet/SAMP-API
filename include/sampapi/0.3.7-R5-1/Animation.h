/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"

SAMPAPI_BEGIN_PACKED_V037R5_1

struct SAMPAPI_EXPORT Animation {
    union {
        struct {
            unsigned short m_nId : 16;
            unsigned char  m_nFramedelta : 8;
            unsigned char  m_nLoopA : 1;
            unsigned char  m_nLockX : 1;
            unsigned char  m_nLockY : 1;
            unsigned char  m_nLockF : 1;
            unsigned char  m_nTime : 2;
        };
        int m_value;
    };
};

SAMPAPI_END_PACKED
