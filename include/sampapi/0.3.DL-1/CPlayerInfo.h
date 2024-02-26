/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/0.3.DL-1/CRemotePlayer.h"
#include <string>

SAMPAPI_BEGIN_PACKED_V03DL_1

class SAMPAPI_EXPORT CPlayerInfo {
public:
    int            m_nScore;
    BOOL           m_bIsNPC;
    CRemotePlayer* m_pPlayer;
    unsigned int   m_nPing;
#ifndef _DEBUG
private:
    unsigned int __align;

public:
#endif
    std::string  m_szNick;

    CPlayerInfo(const char* szName, BOOL bIsNPC);
    ~CPlayerInfo();
};

SAMPAPI_END_PACKED
