/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CPickupPool.h"

SAMPAPI_BEGIN_V037R1

CPickupPool::CPickupPool() {
    ((void(__thiscall*)(CPickupPool*))GetAddress(0x80F0))(this);
}

CPickupPool::~CPickupPool() {
    ((void(__thiscall*)(CPickupPool*))GetAddress(0xFF60))(this);
}

void CPickupPool::Create(Pickup* pPickup, int nId) {
    ((void(__thiscall*)(CPickupPool*, Pickup*, int))GetAddress(0xFDC0))(this, pPickup, nId);
}

void CPickupPool::CreateWeapon(int nModel, CVector position, int nAmmo, ID nExOwner) {
    ((void(__thiscall*)(CPickupPool*, int, CVector, int, ID))GetAddress(0xFCD0))(this, nModel, position, nAmmo, nExOwner);
}

int CPickupPool::GetIndex(int nId) {
    return ((int(__thiscall*)(CPickupPool*, int))GetAddress(0xFF30))(this, nId);
}

void CPickupPool::Delete(int nId) {
    ((void(__thiscall*)(CPickupPool*, int))GetAddress(0xFE70))(this, nId);
}

void CPickupPool::DeleteWeapon(ID nExOwner) {
    ((void(__thiscall*)(CPickupPool*, ID))GetAddress(0xFED0))(this, nExOwner);
}

void CPickupPool::SendNotification(int nId) {
    ((void(__thiscall*)(CPickupPool*, int))GetAddress(0xFF90))(this, nId);
}

void CPickupPool::Process() {
    ((void(__thiscall*)(CPickupPool*))GetAddress(0x10070))(this);
}

SAMPAPI_END
