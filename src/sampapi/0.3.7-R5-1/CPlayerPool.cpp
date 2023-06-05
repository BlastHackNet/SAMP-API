/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CPlayerPool.h"

SAMPAPI_BEGIN_V037R5_1

CPlayerPool::CPlayerPool() {
    ((void(__thiscall*)(CPlayerPool*))GetAddress(0x13FD0))(this);
}

CPlayerPool::~CPlayerPool() {
    ((void(__thiscall*)(CPlayerPool*))GetAddress(0x14120))(this);
}

void CPlayerPool::UpdateLargestId() {
    ((void(__thiscall*)(CPlayerPool*))GetAddress(0x13750))(this);
}

void CPlayerPool::Process() {
    ((void(__thiscall*)(CPlayerPool*))GetAddress(0x137C0))(this);
}

ID CPlayerPool::Find(::CPed* pGamePed) {
    return ((ID(__thiscall*)(CPlayerPool*, ::CPed*))GetAddress(0x138C0))(this, pGamePed);
}

void CPlayerPool::Deactivate() {
    ((void(__thiscall*)(CPlayerPool*))GetAddress(0x13B10))(this);
}

void CPlayerPool::ForceCollision() {
    ((void(__thiscall*)(CPlayerPool*))GetAddress(0x13C90))(this);
}

void CPlayerPool::RestoreCollision() {
    ((void(__thiscall*)(CPlayerPool*))GetAddress(0x13D10))(this);
}

BOOL CPlayerPool::Delete(ID nId, int nReason) {
    return ((BOOL(__thiscall*)(CPlayerPool*, ID, int))GetAddress(0x14090))(this, nId, nReason);
}

BOOL CPlayerPool::Create(ID nId, const char* szName, BOOL bIsNPC) {
    return ((BOOL(__thiscall*)(CPlayerPool*, ID, const char*, BOOL))GetAddress(0x14250))(this, nId, szName, bIsNPC);
}

CRemotePlayer* CPlayerPool::GetPlayer(ID nId) {
    return ((CRemotePlayer * (__thiscall*)(CPlayerPool*, ID)) GetAddress(0x10F0))(this, nId);
}

const char* CPlayerPool::GetLocalPlayerName() {
    return ((const char*(__thiscall*)(CPlayerPool*))GetAddress(0xA4E0))(this);
}

BOOL CPlayerPool::IsDisconnected(ID nId) {
    return ((BOOL(__thiscall*)(CPlayerPool*, ID))GetAddress(0x10D0))(this, nId);
}

BOOL CPlayerPool::IsConnected(ID nId) {
    return ((BOOL(__thiscall*)(CPlayerPool*, ID))GetAddress(0x10B0))(this, nId);
}

void CPlayerPool::SetLocalPlayerName(const char* szName) {
    ((void(__thiscall*)(CPlayerPool*, const char*))GetAddress(0xB8A0))(this, szName);
}

void CPlayerPool::SetAt(ID nId, CPlayerInfo* pObject) {
    ((void(__thiscall*)(CPlayerPool*, ID, CPlayerInfo*))GetAddress(0x13730))(this, nId, pObject);
}

int CPlayerPool::GetScore(ID nId) {
    return ((int(__thiscall*)(CPlayerPool*, ID))GetAddress(0x6E850))(this, nId);
}

int CPlayerPool::GetPing(ID nId) {
    return ((int(__thiscall*)(CPlayerPool*, ID))GetAddress(0x6E880))(this, nId);
}

const char* CPlayerPool::GetName(ID nId) {
    return ((const char*(__thiscall*)(CPlayerPool*, ID))GetAddress(0x175C0))(this, nId);
}

int CPlayerPool::GetLocalPlayerPing() {
    return ((int(__thiscall*)(CPlayerPool*))GetAddress(0x6E8C0))(this);
}

int CPlayerPool::GetLocalPlayerScore() {
    return ((int(__thiscall*)(CPlayerPool*))GetAddress(0x6E8B0))(this);
}

int CPlayerPool::GetCount(BOOL bIncludeNPC) {
    return ((int(__thiscall*)(CPlayerPool*, BOOL))GetAddress(0x139F0))(this, bIncludeNPC);
}

CLocalPlayer* CPlayerPool::GetLocalPlayer() {
    return ((CLocalPlayer * (__thiscall*)(CPlayerPool*)) GetAddress(0x1A40))(this);
}

CObject* CPlayerPool::FindAccessory(::CObject* pGameObject) {
    return ((CObject * (__thiscall*)(CPlayerPool*, ::CObject*)) GetAddress(0x13B70))(this, pGameObject);
}

SAMPAPI_END
