/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CPlayerPool.h"

SAMPAPI_BEGIN_V037R3_1

CPlayerPool::CPlayerPool() {
    ((void(__thiscall*)(CPlayerPool*))GetAddress(0x13BE0))(this);
}

CPlayerPool::~CPlayerPool() {
    ((void(__thiscall*)(CPlayerPool*))GetAddress(0x13D40))(this);
}

void CPlayerPool::UpdateLargestId() {
    ((void(__thiscall*)(CPlayerPool*))GetAddress(0x13400))(this);
}

void CPlayerPool::Process() {
    ((void(__thiscall*)(CPlayerPool*))GetAddress(0x13470))(this);
}

ID CPlayerPool::Find(::CPed* pGamePed) {
    return ((ID(__thiscall*)(CPlayerPool*, ::CPed*))GetAddress(0x13570))(this, pGamePed);
}

void CPlayerPool::Deactivate() {
    ((void(__thiscall*)(CPlayerPool*))GetAddress(0x13790))(this);
}

void CPlayerPool::ForceCollision() {
    ((void(__thiscall*)(CPlayerPool*))GetAddress(0x138C0))(this);
}

void CPlayerPool::RestoreCollision() {
    ((void(__thiscall*)(CPlayerPool*))GetAddress(0x13930))(this);
}

BOOL CPlayerPool::Delete(ID nId, int nReason) {
    return ((BOOL(__thiscall*)(CPlayerPool*, ID, int))GetAddress(0x13CB0))(this, nId, nReason);
}

BOOL CPlayerPool::Create(ID nId, const char* szName, BOOL bIsNPC) {
    return ((BOOL(__thiscall*)(CPlayerPool*, ID, const char*, BOOL))GetAddress(0x13E80))(this, nId, szName, bIsNPC);
}

CRemotePlayer* CPlayerPool::GetPlayer(ID nId) {
    return ((CRemotePlayer * (__thiscall*)(CPlayerPool*, ID)) GetAddress(0x10F0))(this, nId);
}

const char* CPlayerPool::GetLocalPlayerName() {
    return ((const char*(__thiscall*)(CPlayerPool*))GetAddress(0xA170))(this);
}

BOOL CPlayerPool::IsDisconnected(ID nId) {
    return ((BOOL(__thiscall*)(CPlayerPool*, ID))GetAddress(0x10D0))(this, nId);
}

BOOL CPlayerPool::IsConnected(ID nId) {
    return ((BOOL(__thiscall*)(CPlayerPool*, ID))GetAddress(0x10B0))(this, nId);
}

void CPlayerPool::SetLocalPlayerName(const char* szName) {
    ((void(__thiscall*)(CPlayerPool*, const char*))GetAddress(0xB5C0))(this, szName);
}

void CPlayerPool::SetAt(ID nId, CPlayerInfo* pObject) {
    ((void(__thiscall*)(CPlayerPool*, ID, CPlayerInfo*))GetAddress(0x133E0))(this, nId, pObject);
}

int CPlayerPool::GetScore(ID nId) {
    return ((int(__thiscall*)(CPlayerPool*, ID))GetAddress(0x6E0E0))(this, nId);
}

int CPlayerPool::GetPing(ID nId) {
    return ((int(__thiscall*)(CPlayerPool*, ID))GetAddress(0x6E110))(this, nId);
}

const char* CPlayerPool::GetName(ID nId) {
    return ((const char*(__thiscall*)(CPlayerPool*, ID))GetAddress(0x16F00))(this, nId);
}

int CPlayerPool::GetLocalPlayerPing() {
    return ((int(__thiscall*)(CPlayerPool*))GetAddress(0x6E150))(this);
}

int CPlayerPool::GetLocalPlayerScore() {
    return ((int(__thiscall*)(CPlayerPool*))GetAddress(0x6E140))(this);
}

int CPlayerPool::GetCount(BOOL bIncludeNPC) {
    return ((int(__thiscall*)(CPlayerPool*, BOOL))GetAddress(0x13670))(this, bIncludeNPC);
}

CLocalPlayer* CPlayerPool::GetLocalPlayer() {
    return ((CLocalPlayer * (__thiscall*)(CPlayerPool*)) GetAddress(0x1A30))(this);
}

CObject* CPlayerPool::FindAccessory(::CObject* pGameObject) {
    return ((CObject * (__thiscall*)(CPlayerPool*, ::CObject*)) GetAddress(0x137F0))(this, pGameObject);
}

SAMPAPI_END
