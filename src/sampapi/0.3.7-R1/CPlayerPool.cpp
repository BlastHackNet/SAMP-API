/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CPlayerPool.h"

SAMPAPI_BEGIN_V037R1

CPlayerPool::CPlayerPool() {
    ((void(__thiscall*)(CPlayerPool*))GetAddress(0x10AD0))(this);
}

CPlayerPool::~CPlayerPool() {
    ((void(__thiscall*)(CPlayerPool*))GetAddress(0x10C20))(this);
}

void CPlayerPool::Process() {
    ((void(__thiscall*)(CPlayerPool*))GetAddress(0x10320))(this);
}

void CPlayerPool::SetAt(ID nIdx, CPlayerInfo* pPlayer) {
    ((void(__thiscall*)(CPlayerPool*, ID, CPlayerInfo*))GetAddress(0x10290))(this, nIdx, pPlayer);
}

BOOL CPlayerPool::Delete(ID nId, int nReason) {
    return ((int(__thiscall*)(CPlayerPool*, ID, int))GetAddress(0x10B90))(this, nId, nReason);
}

void CPlayerPool::Deactivate() {
    ((void(__thiscall*)(CPlayerPool*))GetAddress(0x10650))(this);
}

BOOL CPlayerPool::Create(ID nId, const char* szName, BOOL bIsNPC) {
    return ((BOOL(__thiscall*)(CPlayerPool*, ID, const char*, BOOL))GetAddress(0x10D50))(this, nId, szName, bIsNPC);
}

const char* CPlayerPool::GetName(ID nId) {
    return ((const char*(__thiscall*)(CPlayerPool*, ID))GetAddress(0x13CE0))(this, nId);
}

int CPlayerPool::GetLocalPlayerPing() {
    return ((int(__thiscall*)(CPlayerPool*))GetAddress(0x6A200))(this);
}

int CPlayerPool::GetLocalPlayerScore() {
    return ((int(__thiscall*)(CPlayerPool*))GetAddress(0x6A1F0))(this);
}

ID CPlayerPool::Find(::CPed* pPed) {
    return ((ID(__thiscall*)(CPlayerPool*, ::CPed*))GetAddress(0x10420))(this, pPed);
}

int CPlayerPool::GetCount(BOOL bIncludeNPC) {
    return ((int(__thiscall*)(CPlayerPool*, BOOL))GetAddress(0x10520))(this, bIncludeNPC);
}

void CPlayerPool::ForceCollision() {
    ((void(__thiscall*)(CPlayerPool*))GetAddress(0x107B0))(this);
}

void CPlayerPool::RestoreCollision() {
    ((void(__thiscall*)(CPlayerPool*))GetAddress(0x10820))(this);
}

const char* CPlayerPool::GetLocalPlayerName() {
    return ((const char*(__thiscall*)(CPlayerPool*))GetAddress(0x13CD0))(this);
}

CRemotePlayer* CPlayerPool::GetPlayer(ID nId) {
    return ((CRemotePlayer * (__thiscall*)(CPlayerPool*, ID)) GetAddress(0x10F0))(this, nId);
}

CPlayerInfo* CPlayerPool::GetAt(ID nId) {
    return ((CPlayerInfo * (__thiscall*)(CPlayerPool*, ID)) GetAddress(0x10D0))(this, nId);
}

BOOL CPlayerPool::IsConnected(ID nId) {
    return ((BOOL(__thiscall*)(CPlayerPool*, ID))GetAddress(0x10B0))(this, nId);
}

BOOL CPlayerPool::IsNPC(ID nId) {
    return ((BOOL(__thiscall*)(CPlayerPool*, ID))GetAddress(0xB680))(this, nId);
}

void CPlayerPool::SetPing(ID nId, int nValue) {
    ((void(__thiscall*)(CPlayerPool*, ID, int))GetAddress(0xB705))(this, nId, nValue);
}

void CPlayerPool::SetScore(ID nId, int nValue) {
    ((void(__thiscall*)(CPlayerPool*, ID, int))GetAddress(0xB6C0))(this, nId, nValue);
}

CLocalPlayer* CPlayerPool::GetLocalPlayer() {
    return ((CLocalPlayer * (__thiscall*)(CPlayerPool*)) GetAddress(0x1A30))(this);
}

int CPlayerPool::GetScore(ID nPlayer) {
    return ((int(__thiscall*)(CPlayerPool*, ID))GetAddress(0x6A190))(this, nPlayer);
}

int CPlayerPool::GetPing(ID nPlayer) {
    return ((int(__thiscall*)(CPlayerPool*, ID))GetAddress(0x6A1C0))(this, nPlayer);
}

void CPlayerPool::UpdateLargestId() {
    ((void(__thiscall*)(CPlayerPool*))GetAddress(0x102B0))(this);
}

CObject* CPlayerPool::FindAccessory(::CObject* pGameObject) {
    return ((CObject * (__thiscall*)(CPlayerPool*, ::CObject*)) GetAddress(0x106A0))(this, pGameObject);
}

void CPlayerPool::SetLocalPlayerName(const char* szName) {
    ((void(__thiscall*)(CPlayerPool*, const char*))GetAddress(0xB3E0))(this, szName);
}

BOOL CPlayerPool::IsDisconnected(ID nId) {
    if (nId < 0 || nId >= MAX_PLAYERS)
        return 0;
    return m_pObject[nId] == nullptr;
}

SAMPAPI_END
