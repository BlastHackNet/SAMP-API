/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CPickupPool.h"

SAMP::CPickupPool::CPickupPool() {
	((void(__thiscall *)(CPickupPool *))SAMP_ADDROF(0x8130))(this);
}

SAMP::CPickupPool::~CPickupPool() {
	((void(__thiscall *)(CPickupPool *))SAMP_ADDROF(0x130C0))(this);
}

void SAMP::CPickupPool::Create(Pickup *pData, ID nId) {
	((void(__thiscall *)(CPickupPool *, Pickup *, ID))SAMP_ADDROF(0x12F20))(this, pData, nId);
}

void SAMP::CPickupPool::CreateWeapon(int nModel, CVector position, int nAmmo, ID nExOwner) {
	((void(__thiscall *)(CPickupPool *, int, CVector, int, ID))SAMP_ADDROF(0x12E30))(this, nModel, position, nAmmo, nExOwner);
}

void SAMP::CPickupPool::Delete(int nId) {
	((void(__thiscall *)(CPickupPool *, int))SAMP_ADDROF(0x12FD0))(this, nId);
}

void SAMP::CPickupPool::DeleteWeapon(ID nExOwner) {
	((void(__thiscall *)(CPickupPool *, ID))SAMP_ADDROF(0x13030))(this, nExOwner);
}

int SAMP::CPickupPool::GetIndex(int nId) {
	return ((int(__thiscall *)(CPickupPool *, int))SAMP_ADDROF(0x13090))(this, nId);
}

void SAMP::CPickupPool::SendNotification(int nId) {
	((void(__thiscall *)(CPickupPool *, int))SAMP_ADDROF(0x130F0))(this, nId);
}

void SAMP::CPickupPool::Process() {
	((void(__thiscall *)(CPickupPool *))SAMP_ADDROF(0x131D0))(this);
}