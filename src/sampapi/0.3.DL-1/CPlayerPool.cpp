/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CPlayerPool.h"

SAMPAPI_BEGIN_V03DL_1

CPlayerPool::CPlayerPool() {
    ((void(__thiscall*)(CPlayerPool*))GetAddress(0x13E80))(this);
}

CPlayerPool::~CPlayerPool() {
    ((void(__thiscall*)(CPlayerPool*))GetAddress(0x13FD0))(this);
}

void CPlayerPool::UpdateLargestId() {
    ((void(__thiscall*)(CPlayerPool*))GetAddress(0x13650))(this);
}

void CPlayerPool::Process() {
    ((void(__thiscall*)(CPlayerPool*))GetAddress(0x136C0))(this);
}

ID CPlayerPool::Find(::CPed* pGamePed) {
    return ((ID(__thiscall*)(CPlayerPool*, ::CPed*))GetAddress(0x137C0))(this, pGamePed);
}

void CPlayerPool::Deactivate() {
    ((void(__thiscall*)(CPlayerPool*))GetAddress(0x139F0))(this);
}

void CPlayerPool::ForceCollision() {
    ((void(__thiscall*)(CPlayerPool*))GetAddress(0x13B50))(this);
}

void CPlayerPool::RestoreCollision() {
    ((void(__thiscall*)(CPlayerPool*))GetAddress(0x13BD0))(this);
}

BOOL CPlayerPool::Delete(ID nId, int nReason) {
    return ((BOOL(__thiscall*)(CPlayerPool*, ID, int))GetAddress(0x13F40))(this, nId, nReason);
}

BOOL CPlayerPool::Create(ID nId, const char* szName, BOOL bIsNPC) {
    return ((BOOL(__thiscall*)(CPlayerPool*, ID, const char*, BOOL))GetAddress(0x14100))(this, nId, szName, bIsNPC);
}

CRemotePlayer* CPlayerPool::GetPlayer(ID nId) {
    return ((CRemotePlayer * (__thiscall*)(CPlayerPool*, ID)) GetAddress(0x10F0))(this, nId);
}

const char* CPlayerPool::GetLocalPlayerName() {
    return ((const char*(__thiscall*)(CPlayerPool*))GetAddress(0xA1D0))(this);
}

BOOL CPlayerPool::IsDisconnected(ID nId) {
    return ((BOOL(__thiscall*)(CPlayerPool*, ID))GetAddress(0x10D0))(this, nId);
}

BOOL CPlayerPool::IsConnected(ID nId) {
    return ((BOOL(__thiscall*)(CPlayerPool*, ID))GetAddress(0x10B0))(this, nId);
}

void CPlayerPool::SetLocalPlayerName(const char* szName) {
    ((void(__thiscall*)(CPlayerPool*, const char*))GetAddress(0xB580))(this, szName);
}

void CPlayerPool::SetAt(ID nId, CPlayerInfo* pObject) {
    ((void(__thiscall*)(CPlayerPool*, ID, CPlayerInfo*))GetAddress(0x13630))(this, nId, pObject);
}

int CPlayerPool::GetScore(ID nId) {
    return ((int(__thiscall*)(CPlayerPool*, ID))GetAddress(0x6E290))(this, nId);
}

int CPlayerPool::GetPing(ID nId) {
    return ((int(__thiscall*)(CPlayerPool*, ID))GetAddress(0x6E2B0))(this, nId);
}

const char* CPlayerPool::GetName(ID nId) {
    return ((const char*(__thiscall*)(CPlayerPool*, ID))GetAddress(0x170D0))(this, nId);
}

int CPlayerPool::GetLocalPlayerPing() {
    return ((int(__thiscall*)(CPlayerPool*))GetAddress(0x6E2F0))(this);
}

int CPlayerPool::GetLocalPlayerScore() {
    return ((int(__thiscall*)(CPlayerPool*))GetAddress(0x6E2E0))(this);
}

int CPlayerPool::GetCount(BOOL bIncludeNPC) {
    return ((int(__thiscall*)(CPlayerPool*, BOOL))GetAddress(0x138C0))(this, bIncludeNPC);
}

CLocalPlayer* CPlayerPool::GetLocalPlayer() {
    return ((CLocalPlayer * (__thiscall*)(CPlayerPool*)) GetAddress(0x1A80))(this);
}

CObject* CPlayerPool::FindAccessory(::CObject* pGameObject) {
    return ((CObject * (__thiscall*)(CPlayerPool*, ::CObject*)) GetAddress(0x13A40))(this, pGameObject);
}

SAMPAPI_END
