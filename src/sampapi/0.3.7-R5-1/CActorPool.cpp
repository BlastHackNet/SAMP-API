/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CActorPool.h"

SAMPAPI_BEGIN_V037R5_1

CActorPool::CActorPool() {
    ((void(__thiscall*)(CActorPool*))GetAddress(0x16C0))(this);
}

CActorPool::~CActorPool() {
    ((void(__thiscall*)(CActorPool*))GetAddress(0x18E0))(this);
}

CActor* CActorPool::Get(ID nId) {
    return ((CActor * (__thiscall*)(CActorPool*, ID)) GetAddress(0x1610))(this, nId);
}

BOOL CActorPool::DoesExist(ID nId) {
    return ((BOOL(__thiscall*)(CActorPool*, ID))GetAddress(0x1640))(this, nId);
}

void CActorPool::UpdateLargestId() {
    ((void(__thiscall*)(CActorPool*))GetAddress(0x1660))(this);
}

BOOL CActorPool::Delete(ID nId) {
    return ((BOOL(__thiscall*)(CActorPool*, ID))GetAddress(0x16F0))(this, nId);
}

ID CActorPool::Find(::CPed* pGamePed) {
    return ((ID(__thiscall*)(CActorPool*, ::CPed*))GetAddress(0x18B0))(this, pGamePed);
}

BOOL CActorPool::Create(ActorInfo* pInfo) {
    return ((BOOL(__thiscall*)(CActorPool*, ActorInfo*))GetAddress(0x1900))(this, pInfo);
}

SAMPAPI_END
