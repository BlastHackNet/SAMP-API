/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"
#include "CRemotePlayer.h"
#include <string>

SAMP_BEGIN

class CPlayerInfo {
public:
	CRemotePlayer		  *m_pPlayer;
	BOOL						m_bIsNPC;
#ifndef _DEBUG
private:
	unsigned int			__aling;
public:
#endif
	std::string				m_szNick;
	int						m_nScore;
	unsigned int			m_nPing;

	CPlayerInfo(const char *szName, BOOL bIsNPC);
	~CPlayerInfo();
};

SAMP_END