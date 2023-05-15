/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn

	See more here https://github.com/LUCHARE/SAMP-API

	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/0.3.7-R5-1/CPlayerInfo.h"
#include "sampapi/0.3.7-R5-1/CLocalPlayer.h"
#include <string>

class CPed;
class CObject;

SAMPAPI_BEGIN_PACKED_V037R5_1

class SAMPAPI_EXPORT CPlayerPool {
public:
    enum { MAX_PLAYERS = 1004 };

    struct SAMPAPI_EXPORT {
        int m_nScore;
        ID  m_nId;
#ifndef _DEBUG
    private:
        int __align;

    public:
#endif
        std::string   m_szName;
        int           m_nPing;
        CLocalPlayer* m_pObject;
    } m_localInfo;

    BOOL         m_bNotEmpty[MAX_PLAYERS];
    BOOL         m_bPrevCollisionFlag[MAX_PLAYERS];
    CPlayerInfo* m_pObject[MAX_PLAYERS];
    int          m_nLargestId;

    CPlayerPool();
    ~CPlayerPool();

    void           UpdateLargestId();
    void           Process();
    ID             Find(::CPed* pGamePed);
    void           Deactivate();
    void           ForceCollision();
    void           RestoreCollision();
    BOOL           Delete(ID nId, int nReason = SAMPAPI_UNUSED);
    BOOL           Create(ID nId, const char* szName, BOOL bIsNPC);
    CRemotePlayer* GetPlayer(ID nId);
    const char*    GetLocalPlayerName();
    BOOL           IsDisconnected(ID nId);
    BOOL           IsConnected(ID nId);
    void           SetLocalPlayerName(const char* szName);
    void           SetAt(ID nId, CPlayerInfo* pObject);
    int            GetScore(ID nId);
    int            GetPing(ID nId);
    const char*    GetName(ID nId);
    int            GetLocalPlayerPing();
    int            GetLocalPlayerScore();
    int            GetCount(BOOL bIncludeNPC = 0);
    CLocalPlayer*  GetLocalPlayer();
    CObject*       FindAccessory(::CObject* pGameObject);
};

SAMPAPI_END_PACKED
