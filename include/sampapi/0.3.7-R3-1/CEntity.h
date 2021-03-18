/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/CVector.h"
#include "sampapi/CMatrix.h"

class CEntity;
struct RwObject;

SAMPAPI_BEGIN_PACKED_V037R3_1

class SAMPAPI_EXPORT CEntity {
public:
    // void **m_lpVtbl = samp.dll+0xEC28C;
    char       pad_4[60];
    ::CEntity* m_pGameEntity;
    GTAREF     m_handle;

    CEntity();

    virtual ~CEntity() = 0;
    virtual void Add() = 0;    // adds entity to the game world
    virtual void Remove() = 0; // removes entity from the game world

    void      GetMatrix(CMatrix* pMatrix);
    void      SetMatrix(CMatrix matrix);
    void      GetSpeed(CVector* pVec);
    void      SetSpeed(CVector vec);
    void      GetTurnSpeed(CVector* pVec);
    void      SetTurnSpeed(CVector vec);
    void      ApplyTurnSpeed();
    float     GetDistanceFromCentreOfMassToBaseOfModel();
    void      GetBoundCentre(CVector* pVec);
    void      SetModelIndex(int nModel);
    int       GetModelIndex();
    void      Teleport(CVector position);
    float     GetDistanceToLocalPlayer();
    float     GetDistanceToCamera();
    float     GetDistanceToPoint(CVector position);
    BOOL      DoesExist(); // does entity exist in the game world?
    BOOL      EnforceWorldBoundries(float fPX, float fZX, float fPY, float fNY);
    BOOL      HasExceededWorldBoundries(float fPX, float fZX, float fPY, float fNY);
    void      GetEulerInverted(float* x, float* y, float* z);
    BOOL      IsIgnored();
    BOOL      IsStationary();
    BOOL      GetCollisionFlag();
    void      SetCollisionFlag(BOOL bEnable);
    RwObject* GetRwObject();
    void      DeleteRwObject();
    void      UpdateRwFrame();
    float     GetDistanceToLocalPlayerNoHeight();
    void      SetCollisionProcessed(BOOL bProcessed);
};

SAMPAPI_END_PACKED
