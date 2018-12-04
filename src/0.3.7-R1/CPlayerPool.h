/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"
#include "CPlayerInfo.h"
#include "CLocalPlayer.h"
#include <string>

#define MAX_PLAYERS 1004

SAMP_BEGIN

class SAMP_API CPlayerPool {
public:
	int						m_nLargestId;
	struct {
		ID						m_nId;
#ifndef _DEBUG
	private:
		unsigned int		__align;
	public:
#endif
		std::string			m_szName;
		CLocalPlayer	  *m_pPlayer;
		unsigned int		m_nPing;
		int					m_nScore;
	}							m_localInfo;
	CPlayerInfo			  *m_pInfo[MAX_PLAYERS];
	BOOL						m_bNotEmpty[MAX_PLAYERS];
	BOOL						m_bPrevCollisionFlag[MAX_PLAYERS];

	CPlayerPool();
	~CPlayerPool();

	BOOL New(ID nId, const char *szNickname, BOOL bIsNPC);
	BOOL Delete(ID nId, unsigned char nReason); // 2nd param is unused
	void Process();
	void DeleteAll();
	void SetAt(ID nId, CPlayerInfo *pPlayer); // m_pRemotePlayer[nIdx] = pPlayer (unused)
	const char *GetNickname(ID nId);
	ID GetId(::CPed *pPed); // from game ped
	void ForceCollision(); // enable collision for all players
	void RestoreCollision(); // restore the old collision state
	const char *GetLocalPlayerNickname(); // returns m_localInfo.m_szName.c_str()
	CRemotePlayer *GetPlayer(ID nId); // returns nullptr when a player doesnt exist
	CPlayerInfo *GetPlayerInfo(ID nId);
	BOOL IsPlayerConnected(ID nId);
	BOOL IsNPC(ID nId);
	void SetPing(ID nId, int nPing);
	void SetScore(ID nId, int nScore);
	CLocalPlayer *GetLocalPlayer();
	int GetScore(ID nPlayer);
	unsigned int GetPing(ID nPlayer);
};

SAMP_END
