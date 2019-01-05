/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CObjectPool.h"

SAMP::CObjectPool::CObjectPool() {
	((void(__thiscall *)(CObjectPool *))SAMP_ADDROF(0x124B0))(this);
}

SAMP::CObjectPool::~CObjectPool() {
	((void(__thiscall *)(CObjectPool *))SAMP_ADDROF(0x12E10))(this);
}

void SAMP::CObjectPool::UpdateLargestId() {
	((void(__thiscall *)(CObjectPool *))SAMP_ADDROF(0x12450))(this);
}

int SAMP::CObjectPool::GetCount() {
	return ((int(__thiscall *)(CObjectPool *))SAMP_ADDROF(0x124E0))(this);
}

BOOL SAMP::CObjectPool::Delete(ID nId) {
	return ((BOOL(__thiscall *)(CObjectPool *, ID))SAMP_ADDROF(0x12500))(this, nId);
}

BOOL SAMP::CObjectPool::Create(ID nId, int nModel, CVector position, CVector rotation, float fDrawDistance) {
	return ((BOOL(__thiscall *)(CObjectPool *, ID, int, CVector, CVector, float))SAMP_ADDROF(0x12580))(this, nId, nModel, position, rotation, fDrawDistance);
}

SAMP::CObject *SAMP::CObjectPool::Find(::CObject *pGameObject) {
	return ((CObject *(__thiscall *)(CObjectPool *, ::CObject *))SAMP_ADDROF(0x12680))(this, pGameObject);
}

int SAMP::CObjectPool::GetId(::CObject *pGameObject) {
	return ((int(__thiscall *)(CObjectPool *, ::CObject *))SAMP_ADDROF(0x126C0))(this, pGameObject);
}

void SAMP::CObjectPool::Process() {
	((void(__thiscall *)(CObjectPool *))SAMP_ADDROF(0x12700))(this);
}

void SAMP::CObjectPool::ConstructMaterials() {
	((void(__thiscall *)(CObjectPool *))SAMP_ADDROF(0x127C0))(this);
}

void SAMP::CObjectPool::ShutdownMaterials() {
	((void(__thiscall *)(CObjectPool *))SAMP_ADDROF(0x12800))(this);
}

void SAMP::CObjectPool::Draw() {
	((void(__thiscall *)(CObjectPool *))SAMP_ADDROF(0x12840))(this);
}

void SAMP::CObjectPool::DrawLast() {
	((void(__thiscall *)(CObjectPool *))SAMP_ADDROF(0x12880))(this);
}

SAMP::CObject *SAMP::CObjectPool::GetObject(ID nId) {
	return ((CObject *(__thiscall *)(CObjectPool *, ID))SAMP_ADDROF(0x2DC0))(this, nId);
}
