/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"
#include "CObject.h"

#define MAX_OBJECTS 1000

class CObject;

SAMP_BEGIN

class SAMP_API CObjectPool {
public:
	int			m_nLargestId;
	BOOL			m_bNotEmpty[MAX_OBJECTS];
	CObject	  *m_pObject[MAX_OBJECTS];

	static unsigned long &dwLastProcessTick;

	CObjectPool();
	~CObjectPool();

	void UpdateLargestId();
	int GetFirstFree();
	BOOL Delete(ID nId);
	BOOL New(ID nId, int nModel, CVector vPosition, CVector vRotation, float fDrawDistance);
	CObject *GetObject(::CObject *pObject);
	int GetId(::CObject *pObject);
	void Process();
};

SAMP_END