/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"
#include "CVector.h"
#include "CMatrix.h"

class CEntity;
struct RwObject;

SAMP_BEGIN

class SAMP_API CEntity {
public:
	// void **m_lpVtbl = samp.dll+0xEC28C;
	unsigned char	pad_4[60];
	::CEntity	  *m_pGameEntity;
	GTAREF			m_handle;

	CEntity();

	virtual ~CEntity() SAMP_VIRTUAL
	virtual void Add() SAMP_VIRTUAL // adds entity to the game world
	virtual void Remove() SAMP_VIRTUAL // removes entity from the game world

	void GetMatrix(CMatrix *pMatrix);
	void SetMatrix(CMatrix matrix);
	void GetSpeed(CVector *pVec);
	void SetSpeed(CVector vec);
	void GetTurnSpeed(CVector *pVec);
	void SetTurnSpeed(CVector vec);
	void ApplyTurnSpeed();
	float GetDistanceFromCentreOfMassToBaseOfModel();
	void GetBoundCentre(CVector *pVec);
	void SetModelIndex(int nModel);
	int GetModelIndex();
	void Teleport(CVector position);
	float GetDistanceToLocalPlayer();
	float GetDistanceToCamera();
	float GetDistanceToPoint(CVector position);
	BOOL DoesExist(); // does entity exist in the game world?
	BOOL EnforceWorldBoundries(float fPX, float fZX, float fPY, float fNY);
	BOOL HasExceededWorldBoundries(float fPX, float fZX, float fPY, float fNY);
	void GetEulerInverted(float *x, float *y, float *z);
	BOOL IsIgnored();
	BOOL IsStationary();
	BOOL GetCollisionFlag();
	void SetCollisionFlag(BOOL bEnable);
	RwObject *GetRwObject();
	void DeleteRwObject();
	void UpdateRwFrame();
	float GetDistanceToLocalPlayerNoHeight();
	void SetCollisionProcessed(BOOL bProcessed);
};

SAMP_END