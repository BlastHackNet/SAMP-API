/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CObjectPool.h"

SAMPAPI_BEGIN_V037R3_1

CObjectPool::CObjectPool() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0x124B0))(this);
}

CObjectPool::~CObjectPool() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0x12E10))(this);
}

void CObjectPool::UpdateLargestId() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0x12450))(this);
}

int CObjectPool::GetCount() {
    return ((int(__thiscall*)(CObjectPool*))GetAddress(0x124E0))(this);
}

BOOL CObjectPool::Delete(ID nId) {
    return ((BOOL(__thiscall*)(CObjectPool*, ID))GetAddress(0x12500))(this, nId);
}

BOOL CObjectPool::Create(ID nId, int nModel, CVector position, CVector rotation, float fDrawDistance) {
    return ((BOOL(__thiscall*)(CObjectPool*, ID, int, CVector, CVector, float))GetAddress(0x12580))(this, nId, nModel, position, rotation, fDrawDistance);
}

CObject* CObjectPool::Find(::CObject* pGameObject) {
    return ((CObject * (__thiscall*)(CObjectPool*, ::CObject*)) GetAddress(0x12680))(this, pGameObject);
}

int CObjectPool::GetId(::CObject* pGameObject) {
    return ((int(__thiscall*)(CObjectPool*, ::CObject*))GetAddress(0x126C0))(this, pGameObject);
}

void CObjectPool::Process() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0x12700))(this);
}

void CObjectPool::ConstructMaterials() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0x127C0))(this);
}

void CObjectPool::ShutdownMaterials() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0x12800))(this);
}

void CObjectPool::Draw() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0x12840))(this);
}

void CObjectPool::DrawLast() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0x12880))(this);
}

CObject* CObjectPool::Get(ID nId) {
    return ((CObject * (__thiscall*)(CObjectPool*, ID)) GetAddress(0x2DC0))(this, nId);
}

SAMPAPI_END
