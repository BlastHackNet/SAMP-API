/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CVehiclePool.h"

SAMPAPI_BEGIN_V037R3_1

CVehiclePool::CVehiclePool() {
    ((void(__thiscall*)(CVehiclePool*))GetAddress(0x1E2C0))(this);
}

CVehiclePool::~CVehiclePool() {
    ((void(__thiscall*)(CVehiclePool*))GetAddress(0x1E910))(this);
}

void CVehiclePool::UpdateCount() {
    ((void(__thiscall*)(CVehiclePool*))GetAddress(0x1E260))(this);
}

BOOL CVehiclePool::Delete(ID nId) {
    return ((BOOL(__thiscall*)(CVehiclePool*, ID))GetAddress(0x1E330))(this, nId);
}

void CVehiclePool::ChangeInterior(ID nId, int nInteriorId) {
    ((void(__thiscall*)(CVehiclePool*, ID, int))GetAddress(0x1E3B0))(this, nId, nInteriorId);
}

void CVehiclePool::SetParams(ID nId, bool bIsObjective, bool bIsLocked) {
    ((void(__thiscall*)(CVehiclePool*, ID, bool, bool))GetAddress(0x1E3E0))(this, nId, bIsObjective, bIsLocked);
}

ID CVehiclePool::Find(::CVehicle* pGameObject) {
    return ((ID(__thiscall*)(CVehiclePool*, ::CVehicle*))GetAddress(0x1E440))(this, pGameObject);
}

GTAREF CVehiclePool::GetRef(int nId) {
    return ((GTAREF(__thiscall*)(CVehiclePool*, int))GetAddress(0x1E470))(this, nId);
}

GTAREF CVehiclePool::GetRef(::CVehicle* pGameObject) {
    return ((GTAREF(__thiscall*)(CVehiclePool*, ::CVehicle*))GetAddress(0x1E490))(this, pGameObject);
}

ID CVehiclePool::GetNearest() {
    return ((ID(__thiscall*)(CVehiclePool*))GetAddress(0x1E4B0))(this);
}

ID CVehiclePool::GetNearest(CVector point) {
    return ((ID(__thiscall*)(CVehiclePool*, CVector))GetAddress(0x1E520))(this, point);
}

void CVehiclePool::AddToWaitingList(const VehicleInfo* pInfo) {
    ((void(__thiscall*)(CVehiclePool*, const VehicleInfo*))GetAddress(0x1E5C0))(this, pInfo);
}

void CVehiclePool::ConstructLicensePlates() {
    ((void(__thiscall*)(CVehiclePool*))GetAddress(0x1E620))(this);
}

void CVehiclePool::ShutdownLicensePlates() {
    ((void(__thiscall*)(CVehiclePool*))GetAddress(0x1E690))(this);
}

BOOL CVehiclePool::Create(VehicleInfo* pInfo) {
    return ((BOOL(__thiscall*)(CVehiclePool*, VehicleInfo*))GetAddress(0x1E930))(this, pInfo);
}

void CVehiclePool::SendDestroyNotification(ID nId) {
    ((void(__thiscall*)(CVehiclePool*, ID))GetAddress(0x1EAE0))(this, nId);
}

void CVehiclePool::ProcessWaitingList() {
    ((void(__thiscall*)(CVehiclePool*))GetAddress(0x1EBC0))(this);
}

void CVehiclePool::Process() {
    ((void(__thiscall*)(CVehiclePool*))GetAddress(0x1EC80))(this);
}

CVehicle* CVehiclePool::Get(ID nId) {
    return ((CVehicle * (__thiscall*)(CVehiclePool*, ID)) GetAddress(0x1110))(this, nId);
}

BOOL CVehiclePool::DoesExist(ID nId) {
    return ((BOOL(__thiscall*)(CVehiclePool*, ID))GetAddress(0x1140))(this, nId);
}

SAMPAPI_END
