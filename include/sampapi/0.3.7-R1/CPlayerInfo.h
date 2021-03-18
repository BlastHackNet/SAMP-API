/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/0.3.7-R1/CRemotePlayer.h"
#include <string>

SAMPAPI_BEGIN_PACKED_V037R1

class SAMPAPI_EXPORT CPlayerInfo {
public:
    CRemotePlayer* m_pPlayer;
    BOOL           m_bIsNPC;
#ifndef _DEBUG
private:
    unsigned int __align;

public:
#endif
    std::string  m_szNick;
    int          m_nScore;
    unsigned int m_nPing;

    CPlayerInfo(const char* szName, BOOL bIsNPC);
    ~CPlayerInfo();
};

SAMPAPI_END_PACKED
