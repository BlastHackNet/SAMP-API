/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"
#include "CVector.h"
#include "CVehicle.h"

#define MAX_VEHICLES 2000
#define WAITING_LIST_SIZE 100

class CVehicle;

SAMP_BEGIN

class SAMP_API CVehiclePool {
public:
	struct SAMP_API VehicleInfo {
		ID				  m_nId;
		int			  m_nType;
		CVector		  m_vPos;
		float			  m_fRotation;
		unsigned char m_nPrimaryColor;
		unsigned char m_nSecondaryColor;
		float			  m_fHealth;
		char			  m_nInterior;
		int			  m_nDoorDamageStatus;
		int			  m_nPanelDamageStatus;
		char			  m_nLightDamageStatus;
		bool			  m_bDoorsLocked;
		char			  field_27;
	};

	int						m_nCount;

	// vehicles that will be created after loading the model
	struct {
		VehicleInfo	m_vehicle[WAITING_LIST_SIZE];
		BOOL			m_bNotEmpty[WAITING_LIST_SIZE];
	}							m_waiting;

	CVehicle				  *m_pVehicle[MAX_VEHICLES];
	BOOL						m_bNotEmpty[MAX_VEHICLES];
	::CVehicle			  *m_pGameVehicle[MAX_VEHICLES];
	unsigned int			pad_6ef4[MAX_VEHICLES];
	ID							m_nLastUndrivenId[MAX_VEHICLES]; // a player who send unoccupied sync data
	unsigned long			m_dwLastUndrivenProcessTick[MAX_VEHICLES];
	BOOL						m_bIsActive[MAX_VEHICLES]; 
	BOOL						m_bIsDestroyed[MAX_VEHICLES];
	unsigned long			m_dwTickWhenDestroyed[MAX_VEHICLES];
	CVector					m_vSpawnPos[MAX_VEHICLES];
	BOOL						m_bLicensePlatesInitialized;

	CVehiclePool();
	~CVehiclePool();

	BOOL New(const VehicleInfo *pVehicle);
	BOOL Delete(ID nId);
	void Process();
	void AddToWaitingList(const VehicleInfo *pVehicle);
	void ProcessWaitingList();
	void SendVehicleDestroyedNotification(ID nId);
	ID FindNearestVehicle();
	ID FindNearestVehicle(CVector vPos);
	ID FindVehicle(::CVehicle *pVehicle);
	GTAREF GetHandle(ID nId);
	GTAREF GetHandle(::CVehicle *pVehicle);
	void LinkVehicleToInterior(ID nId, char nInterior);
	void ConstructLicensePlates();
	void DestructLicensePlates();
	BOOL DoestExist(ID nId);
	CVehicle *At(ID nId);
};

SAMP_END