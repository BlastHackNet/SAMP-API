/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CPickupPool.h"

SAMPAPI_BEGIN_V037R3_1

CPickupPool::CPickupPool() {
    ((void(__thiscall*)(CPickupPool*))GetAddress(0x8130))(this);
}

CPickupPool::~CPickupPool() {
    ((void(__thiscall*)(CPickupPool*))GetAddress(0x130C0))(this);
}

void CPickupPool::Create(Pickup* pData, int nId) {
    ((void(__thiscall*)(CPickupPool*, Pickup*, int))GetAddress(0x12F20))(this, pData, nId);
}

void CPickupPool::CreateWeapon(int nModel, CVector position, int nAmmo, ID nExOwner) {
    ((void(__thiscall*)(CPickupPool*, int, CVector, int, ID))GetAddress(0x12E30))(this, nModel, position, nAmmo, nExOwner);
}

void CPickupPool::Delete(int nId) {
    ((void(__thiscall*)(CPickupPool*, int))GetAddress(0x12FD0))(this, nId);
}

void CPickupPool::DeleteWeapon(ID nExOwner) {
    ((void(__thiscall*)(CPickupPool*, ID))GetAddress(0x13030))(this, nExOwner);
}

int CPickupPool::GetIndex(int nId) {
    return ((int(__thiscall*)(CPickupPool*, int))GetAddress(0x13090))(this, nId);
}

void CPickupPool::SendNotification(int nId) {
    ((void(__thiscall*)(CPickupPool*, int))GetAddress(0x130F0))(this, nId);
}

void CPickupPool::Process() {
    ((void(__thiscall*)(CPickupPool*))GetAddress(0x131D0))(this);
}

SAMPAPI_END
