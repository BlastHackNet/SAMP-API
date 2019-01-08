/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CVehiclePool.h"

SAMP::CVehiclePool::CVehiclePool() {
	((void(__thiscall *)(CVehiclePool *))SAMP_ADDROF(0x1AF20))(this);
}

SAMP::CVehiclePool::~CVehiclePool() {
	((void(__thiscall *)(CVehiclePool *))SAMP_ADDROF(0x1B570))(this);
}

BOOL SAMP::CVehiclePool::Create(Info *pVehicle) {
	return ((BOOL(__thiscall *)(CVehiclePool *, Info *))SAMP_ADDROF(0x1B590))(this, pVehicle);
}

BOOL SAMP::CVehiclePool::Delete(ID nId) {
	return ((BOOL(__thiscall *)(CVehiclePool *, ID))SAMP_ADDROF(0x1AF90))(this, nId);
}

void SAMP::CVehiclePool::AddToWaitingList(const Info *pVehicle) {
	((void(__thiscall *)(CVehiclePool *, const Info *))SAMP_ADDROF(0x1B220))(this, pVehicle);
}

void SAMP::CVehiclePool::ProcessWaitingList() {
	((void(__thiscall *)(CVehiclePool *))SAMP_ADDROF(0x1B810))(this);
}

void SAMP::CVehiclePool::SendDestroyNotification(ID nId) {
	((void(__thiscall *)(CVehiclePool *, ID))SAMP_ADDROF(0x1B740))(this, nId);
}

SAMP::ID SAMP::CVehiclePool::GetNearest() {
	return ((ID(__thiscall *)(CVehiclePool *))SAMP_ADDROF(0x1B110))(this);
}

SAMP::ID SAMP::CVehiclePool::Find(::CVehicle *pGameObject) {
	return ((ID(__thiscall *)(CVehiclePool *, ::CVehicle *))SAMP_ADDROF(0x1B0A0))(this, pGameObject);
}

SAMP::GTAREF SAMP::CVehiclePool::GetRef(int nId) {
	return ((GTAREF(__thiscall *)(CVehiclePool *, int))SAMP_ADDROF(0x1B0D0))(this, nId);
}

SAMP::GTAREF SAMP::CVehiclePool::GetRef(::CVehicle *pGameObject) {
	return ((GTAREF(__thiscall *)(CVehiclePool *, ::CVehicle *))SAMP_ADDROF(0x1B0F0))(this, pGameObject);
}

void SAMP::CVehiclePool::Process() {
	((void(__thiscall *)(CVehiclePool *))SAMP_ADDROF(0x1B8D0))(this);
}

void SAMP::CVehiclePool::ChangeInterior(ID nId, int nInteriorId) {
	((void(__thiscall *)(CVehiclePool *, ID, char))SAMP_ADDROF(0x1B010))(this, nId, nInteriorId);
}

SAMP::ID SAMP::CVehiclePool::GetNearest(CVector point) {
	return ((ID(__thiscall *)(CVehiclePool *, CVector))SAMP_ADDROF(0x1B180))(this, point);
}

void SAMP::CVehiclePool::ConstructLicensePlates() {
	((void(__thiscall *)(CVehiclePool *))SAMP_ADDROF(0x1B280))(this);
}

void SAMP::CVehiclePool::ShutdownLicensePlates() {
	((void(__thiscall *)(CVehiclePool *))SAMP_ADDROF(0x1B2F0))(this);
}

BOOL SAMP::CVehiclePool::DoesExist(ID nId) {
	return ((BOOL(__thiscall *)(CVehiclePool *, ID))SAMP_ADDROF(0x1140))(this, nId);
}

SAMP::CVehicle *SAMP::CVehiclePool::GetObject(ID nId) {
	return ((CVehicle *(__thiscall *)(CVehiclePool *, ID))SAMP_ADDROF(0x1110))(this, nId);
}

void SAMP::CVehiclePool::SetParams(ID nVehicle, bool bIsObjective, bool bIsLocked) {
	((void(__thiscall *)(CVehiclePool *, ID, bool, bool))SAMP_ADDROF(0x1B040))(this, nVehicle, bIsObjective, bIsLocked);
}

void SAMP::CVehiclePool::UpdateCount() {
	((void(__thiscall *)(CVehiclePool *))SAMP_ADDROF(0x1AEC0))(this);
}