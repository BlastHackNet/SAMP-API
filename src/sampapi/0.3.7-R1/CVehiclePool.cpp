/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CVehiclePool.h"

SAMPAPI_BEGIN_V037R1

CVehiclePool::CVehiclePool() {
    ((void(__thiscall*)(CVehiclePool*))GetAddress(0x1AF20))(this);
}

CVehiclePool::~CVehiclePool() {
    ((void(__thiscall*)(CVehiclePool*))GetAddress(0x1B570))(this);
}

BOOL CVehiclePool::Create(VehicleInfo* pVehicle) {
    return ((BOOL(__thiscall*)(CVehiclePool*, VehicleInfo*))GetAddress(0x1B590))(this, pVehicle);
}

BOOL CVehiclePool::Delete(ID nId) {
    return ((BOOL(__thiscall*)(CVehiclePool*, ID))GetAddress(0x1AF90))(this, nId);
}

void CVehiclePool::AddToWaitingList(const VehicleInfo* pVehicle) {
    ((void(__thiscall*)(CVehiclePool*, const VehicleInfo*))GetAddress(0x1B220))(this, pVehicle);
}

void CVehiclePool::ProcessWaitingList() {
    ((void(__thiscall*)(CVehiclePool*))GetAddress(0x1B810))(this);
}

void CVehiclePool::SendDestroyNotification(ID nId) {
    ((void(__thiscall*)(CVehiclePool*, ID))GetAddress(0x1B740))(this, nId);
}

ID CVehiclePool::GetNearest() {
    return ((ID(__thiscall*)(CVehiclePool*))GetAddress(0x1B110))(this);
}

ID CVehiclePool::Find(::CVehicle* pGameObject) {
    return ((ID(__thiscall*)(CVehiclePool*, ::CVehicle*))GetAddress(0x1B0A0))(this, pGameObject);
}

GTAREF CVehiclePool::GetRef(int nId) {
    return ((GTAREF(__thiscall*)(CVehiclePool*, int))GetAddress(0x1B0D0))(this, nId);
}

GTAREF CVehiclePool::GetRef(::CVehicle* pGameObject) {
    return ((GTAREF(__thiscall*)(CVehiclePool*, ::CVehicle*))GetAddress(0x1B0F0))(this, pGameObject);
}

void CVehiclePool::Process() {
    ((void(__thiscall*)(CVehiclePool*))GetAddress(0x1B8D0))(this);
}

void CVehiclePool::ChangeInterior(ID nId, int nInteriorId) {
    ((void(__thiscall*)(CVehiclePool*, ID, char))GetAddress(0x1B010))(this, nId, nInteriorId);
}

ID CVehiclePool::GetNearest(CVector point) {
    return ((ID(__thiscall*)(CVehiclePool*, CVector))GetAddress(0x1B180))(this, point);
}

void CVehiclePool::ConstructLicensePlates() {
    ((void(__thiscall*)(CVehiclePool*))GetAddress(0x1B280))(this);
}

void CVehiclePool::ShutdownLicensePlates() {
    ((void(__thiscall*)(CVehiclePool*))GetAddress(0x1B2F0))(this);
}

BOOL CVehiclePool::DoesExist(ID nId) {
    return ((BOOL(__thiscall*)(CVehiclePool*, ID))GetAddress(0x1140))(this, nId);
}

CVehicle* CVehiclePool::Get(ID nId) {
    return ((CVehicle * (__thiscall*)(CVehiclePool*, ID)) GetAddress(0x1110))(this, nId);
}

void CVehiclePool::SetParams(ID nVehicle, bool bIsObjective, bool bIsLocked) {
    ((void(__thiscall*)(CVehiclePool*, ID, bool, bool))GetAddress(0x1B040))(this, nVehicle, bIsObjective, bIsLocked);
}

void CVehiclePool::UpdateCount() {
    ((void(__thiscall*)(CVehiclePool*))GetAddress(0x1AEC0))(this);
}

SAMPAPI_END
