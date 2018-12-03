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

BOOL SAMP::CVehiclePool::New(const VehicleInfo *pVehicle) {
	return ((BOOL(__thiscall *)(CVehiclePool *, const VehicleInfo *))SAMP_ADDROF(0x1B590))(this, pVehicle);
}

BOOL SAMP::CVehiclePool::Delete(ID nId) {
	return ((BOOL(__thiscall *)(CVehiclePool *, ID))SAMP_ADDROF(0x1AF90))(this, nId);
}

void SAMP::CVehiclePool::AddToWaitingList(const VehicleInfo *pVehicle) {
	((void(__thiscall *)(CVehiclePool *, const VehicleInfo *))SAMP_ADDROF(0x1B220))(this, pVehicle);
}

void SAMP::CVehiclePool::ProcessWaitingList() {
	((void(__thiscall *)(CVehiclePool *))SAMP_ADDROF(0x1B810))(this);
}

void SAMP::CVehiclePool::SendVehicleDestroyedNotification(ID nId) {
	((void(__thiscall *)(CVehiclePool *, ID))SAMP_ADDROF(0x1B740))(this, nId);
}

SAMP::ID SAMP::CVehiclePool::FindNearestVehicle() {
	return ((ID(__thiscall *)(CVehiclePool *))SAMP_ADDROF(0x1B110))(this);
}

SAMP::ID SAMP::CVehiclePool::FindVehicle(::CVehicle *pVehicle) {
	return ((ID(__thiscall *)(CVehiclePool *, ::CVehicle *))SAMP_ADDROF(0x1B0A0))(this, pVehicle);
}

SAMP::GTAREF SAMP::CVehiclePool::GetHandle(ID nId) {
	return ((GTAREF(__thiscall *)(CVehiclePool *, ID))SAMP_ADDROF(0x1B0D0))(this, nId);
}

SAMP::GTAREF SAMP::CVehiclePool::GetHandle(::CVehicle *pVehicle) {
	return ((GTAREF(__thiscall *)(CVehiclePool *, ::CVehicle *))SAMP_ADDROF(0x1B0F0))(this, pVehicle);
}

void SAMP::CVehiclePool::Process() {
	((void(__thiscall *)(CVehiclePool *))SAMP_ADDROF(0x1B8D0))(this);
}

void SAMP::CVehiclePool::LinkVehicleToInterior(ID nId, char nInterior) {
	((void(__thiscall *)(CVehiclePool *, ID, char))SAMP_ADDROF(0x1B010))(this, nId, nInterior);
}

SAMP::ID SAMP::CVehiclePool::FindNearestVehicle(CVector vPos) {
	return ((ID(__thiscall *)(CVehiclePool *, CVector))SAMP_ADDROF(0x1B180))(this, vPos);
}

void SAMP::CVehiclePool::ConstructLicensePlates() {
	((void(__thiscall *)(CVehiclePool *))SAMP_ADDROF(0x1B280))(this);
}

void SAMP::CVehiclePool::DestructLicensePlates() {
	((void(__thiscall *)(CVehiclePool *))SAMP_ADDROF(0x1B2F0))(this);
}

BOOL SAMP::CVehiclePool::DoestExist(ID nVehicle) {
	return ((BOOL(__thiscall *)(CVehiclePool *, ID))SAMP_ADDROF(0x1140))(this, nVehicle);
}

SAMP::CVehicle *SAMP::CVehiclePool::At(ID nId) {
	return ((CVehicle *(__thiscall *)(CVehiclePool *, ID))SAMP_ADDROF(0x1110))(this, nId);
}

void SAMP::CVehiclePool::SetParams(ID nVehicle, bool bLocked, bool bObjective) {
	((void(__thiscall *)(CVehiclePool *, ID, bool, bool))SAMP_ADDROF(0x1B040))(this, nVehicle, bLocked, bObjective);
}