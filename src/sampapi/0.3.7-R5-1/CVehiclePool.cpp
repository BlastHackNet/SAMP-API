/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CVehiclePool.h"

SAMPAPI_BEGIN_V037R5_1

CVehiclePool::CVehiclePool() {
    ((void(__thiscall*)(CVehiclePool*))GetAddress(0x1EA10))(this);
}

CVehiclePool::~CVehiclePool() {
    ((void(__thiscall*)(CVehiclePool*))GetAddress(0x1F060))(this);
}

void CVehiclePool::UpdateCount() {
    ((void(__thiscall*)(CVehiclePool*))GetAddress(0x1E9B0))(this);
}

BOOL CVehiclePool::Delete(ID nId) {
    return ((BOOL(__thiscall*)(CVehiclePool*, ID))GetAddress(0x1EA80))(this, nId);
}

void CVehiclePool::ChangeInterior(ID nId, int nInteriorId) {
    ((void(__thiscall*)(CVehiclePool*, ID, int))GetAddress(0x1EB00))(this, nId, nInteriorId);
}

void CVehiclePool::SetParams(ID nId, bool bIsObjective, bool bIsLocked) {
    ((void(__thiscall*)(CVehiclePool*, ID, bool, bool))GetAddress(0x1EB30))(this, nId, bIsObjective, bIsLocked);
}

ID CVehiclePool::Find(::CVehicle* pGameObject) {
    return ((ID(__thiscall*)(CVehiclePool*, ::CVehicle*))GetAddress(0x1EB90))(this, pGameObject);
}

GTAREF CVehiclePool::GetRef(int nId) {
    return ((GTAREF(__thiscall*)(CVehiclePool*, int))GetAddress(0x1EBC0))(this, nId);
}

GTAREF CVehiclePool::GetRef(::CVehicle* pGameObject) {
    return ((GTAREF(__thiscall*)(CVehiclePool*, ::CVehicle*))GetAddress(0x1EBE0))(this, pGameObject);
}

ID CVehiclePool::GetNearest() {
    return ((ID(__thiscall*)(CVehiclePool*))GetAddress(0x1EC00))(this);
}

ID CVehiclePool::GetNearest(CVector point) {
    return ((ID(__thiscall*)(CVehiclePool*, CVector))GetAddress(0x1EC70))(this, point);
}

void CVehiclePool::AddToWaitingList(const VehicleInfo* pInfo) {
    ((void(__thiscall*)(CVehiclePool*, const VehicleInfo*))GetAddress(0x1ED10))(this, pInfo);
}

void CVehiclePool::ConstructLicensePlates() {
    ((void(__thiscall*)(CVehiclePool*))GetAddress(0x1ED70))(this);
}

void CVehiclePool::ShutdownLicensePlates() {
    ((void(__thiscall*)(CVehiclePool*))GetAddress(0x1EDE0))(this);
}

BOOL CVehiclePool::Create(VehicleInfo* pInfo) {
    return ((BOOL(__thiscall*)(CVehiclePool*, VehicleInfo*))GetAddress(0x1F080))(this, pInfo);
}

void CVehiclePool::SendDestroyNotification(ID nId) {
    ((void(__thiscall*)(CVehiclePool*, ID))GetAddress(0x1F230))(this, nId);
}

void CVehiclePool::ProcessWaitingList() {
    ((void(__thiscall*)(CVehiclePool*))GetAddress(0x1F300))(this);
}

void CVehiclePool::Process() {
    ((void(__thiscall*)(CVehiclePool*))GetAddress(0x1F3C0))(this);
}

CVehicle* CVehiclePool::Get(ID nId) {
    return ((CVehicle * (__thiscall*)(CVehiclePool*, ID)) GetAddress(0x1120))(this, nId);
}

BOOL CVehiclePool::DoesExist(ID nId) {
    return ((BOOL(__thiscall*)(CVehiclePool*, ID))GetAddress(0x1150))(this, nId);
}

SAMPAPI_END
