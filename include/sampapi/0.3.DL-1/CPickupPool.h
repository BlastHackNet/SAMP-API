/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/CVector.h"

SAMPAPI_BEGIN_PACKED_V03DL_1

struct SAMPAPI_EXPORT Pickup {
    int     m_nModel;
    int     m_nType;
    CVector m_position;
};

struct SAMPAPI_EXPORT WeaponPickup {
    bool m_bExists;
    ID   m_nExOwner;
};

class SAMPAPI_EXPORT CPickupPool {
public:
    enum { MAX_PICKUPS = 4096 };

    int           m_nCount;
    GTAREF        m_handle[MAX_PICKUPS];
    int           m_nId[MAX_PICKUPS];
    unsigned long m_nTimer[MAX_PICKUPS];
    WeaponPickup  m_weapon[MAX_PICKUPS];
    Pickup        m_object[MAX_PICKUPS];

    CPickupPool();
    ~CPickupPool();

    void Create(Pickup* pData, int nId);
    void CreateWeapon(int nModel, CVector position, int nAmmo, ID nExOwner);
    void Delete(int nId);
    void DeleteWeapon(ID nExOwner);
    int  GetIndex(int nId);
    void SendNotification(int nId);
    void Process();
};

SAMPAPI_END_PACKED
