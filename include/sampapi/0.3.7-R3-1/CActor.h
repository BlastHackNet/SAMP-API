/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/0.3.7-R3-1/CEntity.h"

class CPed;

SAMPAPI_BEGIN_PACKED_V037R3_1

class SAMPAPI_EXPORT CActor : public CEntity {
public:
    // void **m_lpVtbl = 0xEC298;
    ::CPed* m_pGamePed;
    GTAREF  m_marker;
    GTAREF  m_arrow;
    bool    m_bNeedsToCreateMarker;
    bool    m_bInvulnerable;

    CActor(int nModel, CVector position, float fRotation);
    virtual ~CActor() = 0;

    void  Destroy();
    void  PerformAnimation(const char* szAnim, const char* szIFP, float fFramedelta, int bLockA, int bLockX, int bLockY, int bLockF, int nTime);
    void  SetRotation(float fAngle);
    float GetHealth();
    void  SetHealth(float fAngle);
    void  SetInvulnerable(bool bEnable);
};

SAMPAPI_END_PACKED
