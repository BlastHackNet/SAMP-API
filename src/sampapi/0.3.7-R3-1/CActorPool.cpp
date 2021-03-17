/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CActorPool.h"

SAMPAPI_BEGIN

CActorPool::CActorPool() {
    ((void(__thiscall*)(CActorPool*))GetAddress(0x16B0))(this);
}

CActorPool::~CActorPool() {
    ((void(__thiscall*)(CActorPool*))GetAddress(0x18D0))(this);
}

CActor* CActorPool::Get(ID nId) {
    return ((CActor * (__thiscall*)(CActorPool*, ID)) GetAddress(0x1600))(this, nId);
}

BOOL CActorPool::DoesExist(ID nId) {
    return ((BOOL(__thiscall*)(CActorPool*, ID))GetAddress(0x1630))(this, nId);
}

void CActorPool::UpdateLargestId() {
    ((void(__thiscall*)(CActorPool*))GetAddress(0x1650))(this);
}

BOOL CActorPool::Delete(ID nId) {
    return ((BOOL(__thiscall*)(CActorPool*, ID))GetAddress(0x16E0))(this, nId);
}

ID CActorPool::Find(::CPed* pGamePed) {
    return ((ID(__thiscall*)(CActorPool*, ::CPed*))GetAddress(0x18A0))(this, pGamePed);
}

BOOL CActorPool::Create(ActorInfo* pInfo) {
    return ((BOOL(__thiscall*)(CActorPool*, ActorInfo*))GetAddress(0x18F0))(this, pInfo);
}

SAMPAPI_END
