/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/CVector.h"
#include "sampapi/0.3.7-R5-1/CVehicle.h"

SAMPAPI_BEGIN_PACKED_V037R5_1

class SAMPAPI_EXPORT CVehiclePool {
public:
    enum {
        MAX_VEHICLES = 2000,
        WAITING_LIST_SIZE = 100,
    };
    struct SAMPAPI_EXPORT VehicleInfo {
        ID      m_nId;
        int     m_nType;
        CVector m_position;
        float   m_fRotation;
        NUMBER  m_nPrimaryColor;
        NUMBER  m_nSecondaryColor;
        float   m_fHealth;
        char    m_nInterior;
        int     m_nDoorDamageStatus;
        int     m_nPanelDamageStatus;
        char    m_nLightDamageStatus;
        bool    m_bDoorsLocked;
        bool    m_bHasSiren;
    };

    int m_nCount;

    // vehicles that will be created after loading the model
    struct SAMPAPI_EXPORT {
        VehicleInfo m_entry[WAITING_LIST_SIZE];
        BOOL        m_bNotEmpty[WAITING_LIST_SIZE];
    } m_waitingList;

    CVehicle*    m_pObject[MAX_VEHICLES];
    BOOL         m_bNotEmpty[MAX_VEHICLES];
    ::CVehicle*  m_pGameObject[MAX_VEHICLES];
    unsigned int pad_6ef4[MAX_VEHICLES];
    ID           m_nLastUndrivenId[MAX_VEHICLES]; // a player who send unoccupied sync data
    TICK         m_lastUndrivenProcessTick[MAX_VEHICLES];
    BOOL         m_bIsActive[MAX_VEHICLES];
    BOOL         m_bIsDestroyed[MAX_VEHICLES];
    TICK         m_tickWhenDestroyed[MAX_VEHICLES];
    CVector      m_spawnedAt[MAX_VEHICLES];
    BOOL         m_bNeedsToInitializeLicensePlates;

    CVehiclePool();
    ~CVehiclePool();

    void      UpdateCount();
    BOOL      Delete(ID nId);
    void      ChangeInterior(ID nId, int nInteriorId);
    void      SetParams(ID nId, bool bIsObjective, bool bIsLocked);
    ID        Find(::CVehicle* pGameObject);
    GTAREF    GetRef(int nId);
    GTAREF    GetRef(::CVehicle* pGameObject);
    ID        GetNearest();
    ID        GetNearest(CVector point);
    void      AddToWaitingList(const VehicleInfo* pInfo);
    void      ConstructLicensePlates();
    void      ShutdownLicensePlates();
    BOOL      Create(VehicleInfo* pInfo);
    void      SendDestroyNotification(ID nId);
    void      ProcessWaitingList();
    void      Process();
    CVehicle* Get(ID nId);
    BOOL      DoesExist(ID nId);
};

SAMPAPI_END_PACKED
