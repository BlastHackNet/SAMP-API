/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CPlayerPool.h"

SAMP::CPlayerPool::CPlayerPool() {
	((void(__thiscall *)(CPlayerPool *))SAMP_ADDROF(0x10AD0))(this);
}

SAMP::CPlayerPool::~CPlayerPool() {
	((void(__thiscall *)(CPlayerPool *))SAMP_ADDROF(0x10C20))(this);
}

void SAMP::CPlayerPool::Process() {
	((void(__thiscall *)(CPlayerPool *))SAMP_ADDROF(0x10320))(this);
}

void SAMP::CPlayerPool::SetAt(ID nIdx, CPlayerInfo *pPlayer) {
	((void(__thiscall *)(CPlayerPool *, ID, CPlayerInfo *))SAMP_ADDROF(0x10290))(this, nIdx, pPlayer);
}

BOOL SAMP::CPlayerPool::Delete(ID nId, unsigned char nReason) {
	return ((int(__thiscall *)(CPlayerPool *, ID, unsigned char))SAMP_ADDROF(0x10B90))(this, nId, nReason);
}

void SAMP::CPlayerPool::DeleteAll() {
	((void(__thiscall *)(CPlayerPool *))SAMP_ADDROF(0x10650))(this);
}

BOOL SAMP::CPlayerPool::New(ID nId, const char *szNickname, BOOL bIsNPC) {
	return ((BOOL(__thiscall *)(CPlayerPool *, ID, const char *, BOOL))SAMP_ADDROF(0x10D50))(this, nId, szNickname, bIsNPC);
}

const char *SAMP::CPlayerPool::GetNickname(ID nId) {
	return ((const char *(__thiscall *)(CPlayerPool *, ID))SAMP_ADDROF(0x13CE0))(this, nId);
}

SAMP::ID SAMP::CPlayerPool::GetId(::CPed *pPed) {
	return ((ID(__thiscall *)(CPlayerPool *, ::CPed *))SAMP_ADDROF(0x10420))(this, pPed);
}

int SAMP::CPlayerPool::GetPlayerCount(BOOL bIncludeNonStreamed) {
	return ((int(__thiscall *)(CPlayerPool *, BOOL))SAMP_ADDROF(0x10520))(this, bIncludeNonStreamed);
}

void SAMP::CPlayerPool::ForceCollision() {
	((void(__thiscall *)(CPlayerPool *))SAMP_ADDROF(0x107B0))(this);
}

void SAMP::CPlayerPool::RestoreCollision() {
	((void(__thiscall *)(CPlayerPool *))SAMP_ADDROF(0x10820))(this);
}

const char *SAMP::CPlayerPool::GetLocalPlayerNickname() {
	return ((const char *(__thiscall *)(CPlayerPool *))SAMP_ADDROF(0x13CD0))(this);
}

SAMP::CRemotePlayer *SAMP::CPlayerPool::GetPlayer(ID nId) {
	return ((CRemotePlayer *(__thiscall *)(CPlayerPool *, ID))SAMP_ADDROF(0x10F0))(this, nId);
}

SAMP::CPlayerInfo *SAMP::CPlayerPool::GetPlayerInfo(ID nId) {
	return ((CPlayerInfo *(__thiscall *)(CPlayerPool *, ID))SAMP_ADDROF(0x10D0))(this, nId);
}

BOOL SAMP::CPlayerPool::IsPlayerConnected(ID nId) {
	return ((BOOL(__thiscall *)(CPlayerPool *, ID))SAMP_ADDROF(0x10B0))(this, nId);
}

BOOL SAMP::CPlayerPool::IsNPC(ID nId) {
	return ((BOOL(__thiscall *)(CPlayerPool *, ID))SAMP_ADDROF(0xB680))(this, nId);
}

void SAMP::CPlayerPool::SetPing(ID nId, int nPing) {
	((void(__thiscall *)(CPlayerPool *, ID, int))SAMP_ADDROF(0xB705))(this, nId, nPing);
}

void SAMP::CPlayerPool::SetScore(ID nId, int nScore) {
	((void(__thiscall *)(CPlayerPool *, ID, int))SAMP_ADDROF(0xB6C0))(this, nId, nScore);
}

SAMP::CLocalPlayer *SAMP::CPlayerPool::GetLocalPlayer() {
	return ((CLocalPlayer *(__thiscall *)(CPlayerPool *))SAMP_ADDROF(0x1A30))(this);
}

int SAMP::CPlayerPool::GetScore(ID nPlayer) {
	return ((int(__thiscall *)(CPlayerPool *, ID))SAMP_ADDROF(0x6A190))(this, nPlayer);
}

unsigned int SAMP::CPlayerPool::GetPing(ID nPlayer) {
	return ((unsigned int(__thiscall *)(CPlayerPool *, ID))SAMP_ADDROF(0x6A1C0))(this, nPlayer);
}