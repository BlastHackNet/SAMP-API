/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CObjectPool.h"

SAMPAPI_BEGIN_V037R1

SAMPAPI_VAR TICK& CObjectPool::RefLastProcess() {
    return *(TICK*)GetAddress(0x1049B0);
}

CObjectPool::CObjectPool() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0xF3A0))(this);
}

CObjectPool::~CObjectPool() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0xFCB0))(this);
}

void CObjectPool::UpdateLargestId() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0xF340))(this);
}

int CObjectPool::GetCount() {
    return ((int(__thiscall*)(CObjectPool*))GetAddress(0xF3D0))(this);
}

BOOL CObjectPool::Delete(ID nId) {
    return ((BOOL(__thiscall*)(CObjectPool*, ID))GetAddress(0xF3F0))(this, nId);
}

BOOL CObjectPool::Create(ID nId, int nModel, CVector position, CVector rotation, float fDrawDistance) {
    return ((BOOL(__thiscall*)(CObjectPool*, ID, int, CVector, CVector, float))GetAddress(0xF470))(this, nId, nModel, position, rotation, fDrawDistance);
}

CObject* CObjectPool::Find(::CObject* pGameObject) {
    return ((CObject * (__thiscall*)(CObjectPool*, ::CObject*)) GetAddress(0xF520))(this, pGameObject);
}

int CObjectPool::GetId(::CObject* pObject) {
    return ((int(__thiscall*)(CObjectPool*, ::CObject*))GetAddress(0xF560))(this, pObject);
}

void CObjectPool::Process() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0xF5A0))(this);
}

void CObjectPool::ConstructMaterials() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0xF660))(this);
}

void CObjectPool::ShutdownMaterials() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0xF6A0))(this);
}

void CObjectPool::Draw() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0xF6E0))(this);
}

void CObjectPool::DrawLast() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0xF720))(this);
}

CObject* CObjectPool::Get(ID nId) {
    return ((CObject*(__thiscall*)(CObjectPool*, ID))GetAddress(0x2DD0))(this, nId);
}

SAMPAPI_END
