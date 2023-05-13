/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CPickupPool.h"

SAMPAPI_BEGIN_V037R5_1

CPickupPool::CPickupPool() {
    ((void(__thiscall*)(CPickupPool*))GetAddress(0x84A0))(this);
}

CPickupPool::~CPickupPool() {
    ((void(__thiscall*)(CPickupPool*))GetAddress(0x13410))(this);
}

void CPickupPool::Create(Pickup* pData, int nId) {
    ((void(__thiscall*)(CPickupPool*, Pickup*, int))GetAddress(0x12F20))(this, pData, nId);
}

void CPickupPool::CreateWeapon(int nModel, CVector position, int nAmmo, ID nExOwner) {
    ((void(__thiscall*)(CPickupPool*, int, CVector, int, ID))GetAddress(0x13180))(this, nModel, position, nAmmo, nExOwner);
}

void CPickupPool::Delete(int nId) {
    ((void(__thiscall*)(CPickupPool*, int))GetAddress(0x13320))(this, nId);
}

void CPickupPool::DeleteWeapon(ID nExOwner) {
    ((void(__thiscall*)(CPickupPool*, ID))GetAddress(0x13380))(this, nExOwner);
}

int CPickupPool::GetIndex(int nId) {
    return ((int(__thiscall*)(CPickupPool*, int))GetAddress(0x133E0))(this, nId);
}

void CPickupPool::SendNotification(int nId) {
    ((void(__thiscall*)(CPickupPool*, int))GetAddress(0x13440))(this, nId);
}

void CPickupPool::Process() {
    ((void(__thiscall*)(CPickupPool*))GetAddress(0x13520))(this);
}

SAMPAPI_END
