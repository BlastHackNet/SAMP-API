/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"
#include "CActor.h"
#include "CVector.h"

#define MAX_ACTORS 1000

SAMP_BEGIN

struct SAMP_API ActorInfo {
	ID			m_nId;
	int		m_nModel;
	CVector	m_vPos;
	float		m_fRotation;
	float		m_fHealth;
	bool		m_bInvulnerable;
};

class SAMP_API CActorPool {
public:
	int			m_nLargestId;
	CActor	  *m_pActor[MAX_ACTORS];
	BOOL			m_bNotEmpty[MAX_ACTORS];
	void	     *m_pGamePed[MAX_ACTORS];
	int			pad_2ee4[MAX_ACTORS];
	int			pad_3e84[MAX_ACTORS];

	CActorPool();
	~CActorPool();

	CActor *GetActor(ID nId);
	BOOL DoesExist(ID nId);
	void UpdateLargestId();
	BOOL Delete(ID nId);
	BOOL New(const ActorInfo *pInfo);
	ID GetId(::CPed *pPed);
};

SAMP_END