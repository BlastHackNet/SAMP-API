/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CPickupPool.h"

SAMPAPI_BEGIN_V03DL_1

CPickupPool::CPickupPool() {
    ((void(__thiscall*)(CPickupPool*))GetAddress(0x8190))(this);
}

CPickupPool::~CPickupPool() {
    ((void(__thiscall*)(CPickupPool*))GetAddress(0x13310))(this);
}

void CPickupPool::Create(Pickup* pData, int nId) {
    ((void(__thiscall*)(CPickupPool*, Pickup*, int))GetAddress(0x13170))(this, pData, nId);
}

void CPickupPool::CreateWeapon(int nModel, CVector position, int nAmmo, ID nExOwner) {
    ((void(__thiscall*)(CPickupPool*, int, CVector, int, ID))GetAddress(0x13080))(this, nModel, position, nAmmo, nExOwner);
}

void CPickupPool::Delete(int nId) {
    ((void(__thiscall*)(CPickupPool*, int))GetAddress(0x13220))(this, nId);
}

void CPickupPool::DeleteWeapon(ID nExOwner) {
    ((void(__thiscall*)(CPickupPool*, ID))GetAddress(0x13280))(this, nExOwner);
}

int CPickupPool::GetIndex(int nId) {
    return ((int(__thiscall*)(CPickupPool*, int))GetAddress(0x132E0))(this, nId);
}

void CPickupPool::SendNotification(int nId) {
    ((void(__thiscall*)(CPickupPool*, int))GetAddress(0x13340))(this, nId);
}

void CPickupPool::Process() {
    ((void(__thiscall*)(CPickupPool*))GetAddress(0x13420))(this);
}

SAMPAPI_END
