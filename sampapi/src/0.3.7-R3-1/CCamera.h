/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi.h"
#include "CVector.h"
#include "CMatrix.h"
#include "CEntity.h"

class CEntity;

SAMPAPI_BEGIN_PACKED

class SAMPAPI_EXPORT CCamera {
public:
    CEntity* m_pOwner;
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
