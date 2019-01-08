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

	static TICK &lastProcess;

	CObjectPool();
	~CObjectPool();

	void UpdateLargestId();
	int GetCount();
	BOOL Delete(ID nId);
	BOOL Create(ID nId, int nModel, CVector position, CVector rotation, float fDrawDistance);
	CObject *Find(::CObject *pGameObject);
	int GetId(::CObject *pGameObject);
	void Process();
	void ConstructMaterials();
	void ShutdownMaterials();
	void Draw();
	void DrawLast();
	CObject *GetObject(ID nId) { 
		if (m_bNotEmpty[nId]) 
			return m_pObject[nId]; 
		return nullptr;
	}
};

SAMP_END