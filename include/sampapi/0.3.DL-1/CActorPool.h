/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/0.3.DL-1/CActor.h"
#include "sampapi/CVector.h"

SAMPAPI_BEGIN_PACKED_V03DL_1

struct SAMPAPI_EXPORT ActorInfo {
    ID      m_nId;
    int     m_nModel;
    int     pad_1;
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
    BOOL    Create(ActorInfo* pInfo);
    ID      Find(::CPed* pPed);
};

SAMPAPI_END_PACKED
