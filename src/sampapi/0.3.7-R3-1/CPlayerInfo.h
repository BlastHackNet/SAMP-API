/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi.h"
#include "CRemotePlayer.h"
#include <string>

SAMPAPI_BEGIN_PACKED

class SAMPAPI_EXPORT CPlayerInfo {
public:
    CRemotePlayer* m_pPlayer;
    int            m_nPing;
#ifndef _DEBUG
private:
    int __aling;

public:
#endif
    std::string m_szNick;
    int         m_nScore;
    BOOL        m_bIsNPC;

    CPlayerInfo(const char* szName, BOOL bIsNPC);
    ~CPlayerInfo();
};

SAMPAPI_END_PACKED
