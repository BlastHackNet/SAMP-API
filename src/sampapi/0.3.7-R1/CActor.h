/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/0.3.7-R1/CEntity.h"

class CPed;

SAMPAPI_BEGIN_PACKED_V037R1

class SAMPAPI_EXPORT CActor : public CEntity {
public:
    // void **lpVtbl = 0xD9EC8;
    ::CPed* m_pGamePed;
    GTAREF  m_marker;
    GTAREF  m_arrow;
    bool    m_bNeedsToCreateMarker;
    bool    m_bInvulnerable;

    CActor(int nSkin, CVector vPos, float fRotation);
    virtual ~CActor() = 0;

    void  Destroy();
    void  PerformAnimation(const char* szAnim, const char* szIFP, float fFramedelta, int bLockA, int bLockX, int bLockY, int bLockF, int nTime);
    void  SetRotation(float fValue);
    void  SetHealth(float fValue);
    float GetHealth();
    void  SetInvulnerable(bool bInv);
    void  SetArmour(float fValue);
    float GetArmour();
    // state/status is a flags
    void SetState(int nValue);
    int  GetState();
    BOOL IsDead();
    void SetStatus(int nValue);
    int  GetStatus();
};

SAMPAPI_END_PACKED
