/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CActorPool.h"

SAMP::CActorPool::CActorPool() {
	((void(__thiscall *)(CActorPool *))SAMP_ADDROF(0x16B0))(this);
}

SAMP::CActorPool::~CActorPool() {
	((void(__thiscall *)(CActorPool *))SAMP_ADDROF(0x18D0))(this);
}

SAMP::CActor *SAMP::CActorPool::GetActor(ID nId) {
	return ((CActor *(__thiscall *)(CActorPool *, ID))SAMP_ADDROF(0x1600))(this, nId);
}

BOOL SAMP::CActorPool::DoesExist(ID nId) {
	return ((BOOL(__thiscall *)(CActorPool *, ID))SAMP_ADDROF(0x1630))(this, nId);
}

void SAMP::CActorPool::UpdateLargestId() {
	((void(__thiscall *)(CActorPool *))SAMP_ADDROF(0x1650))(this);
}

BOOL SAMP::CActorPool::Delete(ID nId) {
	return ((BOOL(__thiscall *)(CActorPool *, ID))SAMP_ADDROF(0x16E0))(this, nId);
}

BOOL SAMP::CActorPool::New(const ActorInfo *pInfo) {
	return ((BOOL(__thiscall *)(CActorPool *, const ActorInfo *))SAMP_ADDROF(0x18F0))(this, pInfo);
}

SAMP::ID SAMP::CActorPool::GetId(::CPed *pPed) {
	return ((ID(__thiscall *)(CActorPool *, ::CPed *))SAMP_ADDROF(0x18A0))(this, pPed);
}