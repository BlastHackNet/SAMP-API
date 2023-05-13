/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/0.3.7-R5-1/CRemotePlayer.h"
#include <string>

SAMPAPI_BEGIN_PACKED_V037R5_1

class SAMPAPI_EXPORT CPlayerInfo {
public:
    int            pad_0;
    int            m_nScore;
    BOOL           m_bIsNPC;
    int            m_nPing;
    CRemotePlayer* m_pPlayer;
#ifndef _DEBUG
private:
    int __aling;

public:
#endif
    std::string m_szNick;

    CPlayerInfo(const char* szName, BOOL bIsNPC);
    ~CPlayerInfo();
};

SAMPAPI_END_PACKED
