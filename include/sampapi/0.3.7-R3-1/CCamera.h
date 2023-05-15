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
#include "sampapi/0.3.7-R3-1/CEntity.h"

class CEntity;

SAMPAPI_BEGIN_PACKED_V037R3_1

class SAMPAPI_EXPORT CCamera {
public:
    CEntity* m_pAttachedTo;
    CMatrix* m_pMatrix;

    CCamera();
    ~CCamera();

    void  Fade(BOOL bin);
    void  GetMatrix(CMatrix* pMatrix);
    void  SetMatrix(CMatrix matrix);
    void  TakeControl(::CEntity* pTarget, short nModeToGoTo, short nTypeOfSwitch);
    void  SetMoveVector(CVector* pCamera, CVector* pPosition, int nTime, bool bSmoothTransmition);
    void  SetTrackVector(CVector* pPointAt, CVector* pTransverseTo, int nTime, bool bSmooth);
    void  Attach(CEntity* pOwner);
    void  SetToOwner();
    float GetDistanceToPoint(CVector* pPoint);
    void  Restore();
    void  Set(CVector position, CVector rotation);
    void  PointAt(CVector point, int nSwitchStyle);
    void  Detach();
};

SAMPAPI_END_PACKED
