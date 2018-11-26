/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"
#include "CMatrix.h"

class CEntity;

SAMP_BEGIN

class CEntity {
public:
	// void **lpVtbl = samp.dll+0xD9EBC;
	unsigned char		pad_4[60];
	::CEntity		  *m_pGameEntity;
	GTAREF				m_dwHandle;

	CEntity();
	
	virtual ~CEntity() {}
	virtual void Add() {}
	virtual void Remove() {}

	void GetMatrix(CMatrix *pMatrix);
	void SetMatrix(CMatrix matrix);
	void TeleportTo(CVector vPosition);
	void GetMoveSpeed(CVector *pSpeed);
	void SetMoveSpeed(CVector vSpeed);
	void GetTurnSpeed(CVector *pSpeed);
	void SetTurnSpeed(CVector vSpeed);
	void GetBoundCentre(CVector *pCentre);
	int GetModelId();
	float GetDistToLocalPlayerPedNoHeight();
	float GetDistToLocalPlayerPed();
	float GetDistToCamera();
	float GetDistToPoint(CVector vPoint);
	void UpdateRwFrame();
	void ApplyTurnSpeed();
	float GetDistanceFromCentreOfMassToBaseOfModel();
	void SetModelIndex(int nModel);
	int IsAdded();
	int EnforceWorldBoundries(float fPX, float fZX, float fPY, float fNY);
	int HasExceededWorldBoundries(float fPX, float fZX, float fPY, float fNY);
	void SetClumpAlpha(unsigned char nValue);
	void SetFromEuler(CVector vAngles);
	void GetEulerInverted(float *pX, float *pY, float *pZ);
	void ApplyTurnForce(CVector vDirection, CVector vVelocity);
	BOOL IsStationary();
	void *GetRwObject(); // RwObject/RpClump/RpAtomic
	bool IsIgnored(); // m_pGameEntity == *(::CEntity *)0xB7CD68
};

SAMP_END