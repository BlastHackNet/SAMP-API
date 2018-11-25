/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"
#include "CEntity.h"
#include "CMatrix.h"
#include "CVehicle.h"

SAMP_BEGIN

class SAMP_API CObject : public CEntity {
public:
	// void **lpVtbl = samp.dll+0xDA84C;
	char				pad_48[6];
	int				m_nModel;
	char				pad_52[2];
	float				m_fDrawDistance;
	float				field_58;
	CVector			m_vPosition;
	unsigned char	pad_68[69];
	CVector			m_vRotation;
	unsigned char	pad_b9[5];
	ID					m_nAttachedToVehicle;
	ID					m_nAttachedToObject;
	CVector			m_vAttachOffset;
	CVector			m_vAttachRotation;
	unsigned char	field_da;
	CMatrix			m_targetMatrix;
	unsigned char	pad_11b[148];
	unsigned char	m_bMoving;
	float				m_fSpeed;
	unsigned char	pad_1b4[4069];

	CObject() { *(void **)this = (void *)SAMP_ADDROF(0xDA84C); }
	CObject(int nModel, CVector vPosition, CVector vRotation, float fDrawDistance, int arg5);

	virtual ~CObject() {}
	virtual void Add() {}
	virtual void Remove() {}

	float DistanceRemaining(CMatrix *pFrom);
	void Stop();
	void SetRotation(CVector *pRotation);
	void Attach(CVehicle *pVehicle);
	void Attach(CObject *pObject);
	void Attach(::CEntity *pEntity, CVector *pOffset, CVector *pRotation);
	void Rotate(CVector vRotation);
	void Process(float fTimeElapsed);
};

SAMP_END