/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"
#include "CVector.h"
#include "CMatrix.h"
#include "CEntity.h"

class CEntity;

SAMP_BEGIN

class SAMP_API CCamera {
public:
	CEntity *m_pAttachedTo;
	CMatrix *m_pMatrix;

	CCamera();

	~CCamera() {
		Detach();
	}

	void SetVectorTrack(CVector *vPoint, CVector *vTransverseTo, unsigned int nTime, bool bSmooth);
	void SetVectorMove(CVector *vCamera, CVector *vDestination, unsigned int nTime, bool bSmooth);
	void SetFixedPosition(CVector vPosition, CVector vRotation);
	void Attach(CEntity *pEntity);
	void Detach();
	void SetToOwner(); // if it was attached to an entity
	void GetMatrix(CMatrix *pMatrix); // returns a copy of the matrix
	void Restore();
	void PointAt(CVector vPosition, unsigned char nSwitchType);
	float DistToCamera(CVector *vPosition);
	void Fade(bool bIn);
	void SetMatrix(CMatrix matrix);
	void TakeControl(::CEntity *pTarget, short nModeToGoTo, short nTypeOfSwitch);
};

SAMP_END
