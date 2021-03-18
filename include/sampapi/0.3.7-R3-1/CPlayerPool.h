/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/0.3.7-R3-1/CPlayerInfo.h"
#include "sampapi/0.3.7-R3-1/CLocalPlayer.h"
#include <string>

class CPed;
class CObject;

SAMPAPI_BEGIN_PACKED_V037R3_1

class SAMPAPI_EXPORT CPlayerPool {
public:
    enum { MAX_PLAYERS = 1004 };

    int          m_nLargestId;
    CPlayerInfo* m_pObject[MAX_PLAYERS];
    BOOL         m_bNotEmpty[MAX_PLAYERS];
    BOOL         m_bPrevCollisionFlag[MAX_PLAYERS];

    struct SAMPAPI_EXPORT {
        int m_nPing;
        int m_nScore;
        ID  m_nId;
#ifndef _DEBUG
    private:
        int __align;

    public:
#endif
        std::string   m_szName;
        CLocalPlayer* m_pObject;
    } m_localInfo;

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
