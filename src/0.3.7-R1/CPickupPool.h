/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"
#include "CVector.h"

#define MAX_PICKUPS 4096

SAMP_BEGIN

struct SAMP_API Pickup {
	int		m_nModel;
	int		m_nType;
	CVector	m_position;
};

struct SAMP_API WeaponPickup {
	bool  m_bExists;
	ID		m_nExOwner;
};

class SAMP_API CPickupPool {
public:
	int				m_nCount;
	GTAREF			m_handle[MAX_PICKUPS];
	int				m_nId[MAX_PICKUPS];
	unsigned long	m_nTimer[MAX_PICKUPS];
	WeaponPickup	m_weapon[MAX_PICKUPS];
	Pickup			m_object[MAX_PICKUPS];

	CPickupPool();
	~CPickupPool();

	void Create(Pickup *pData, ID nId);
	void CreateWeapon(int nModel, CVector position, int nAmmo, ID nExOwner);
	void Delete(int nId);
	void DeleteWeapon(ID nExOwner);
	int GetIndex(int nId);
	void SendNotification(int nId);
	void Process();
};

SAMP_END