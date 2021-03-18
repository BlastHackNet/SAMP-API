/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/CVector.h"
#include "sampapi/0.3.7-R3-1/CActor.h"

SAMPAPI_BEGIN_PACKED_V037R3_1

struct SAMPAPI_EXPORT ActorInfo {
    ID      m_nId;
    int     m_nModel;
    CVector m_position;
    float   m_fRotation;
    float   m_fHealth;
    bool    m_bInvulnerable;
};

class SAMPAPI_EXPORT CActorPool {
public:
    enum { MAX_ACTORS = 1000 };

    int     m_nLargestId;
    CActor* m_pObject[MAX_ACTORS];
    BOOL    m_bNotEmpty[MAX_ACTORS];
    ::CPed* m_pGameObject[MAX_ACTORS];
    int     pad_2ee4[MAX_ACTORS];
    int     pad_3e84[MAX_ACTORS];

    CActorPool();
    ~CActorPool();

    CActor* Get(ID nId);
    BOOL    DoesExist(ID nId);
    void    UpdateLargestId();
    BOOL    Delete(ID nId);
    ID      Find(::CPed* pGamePed);
    BOOL    Create(ActorInfo* pInfo);
};

SAMPAPI_END_PACKED
