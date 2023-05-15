/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CObjectPool.h"

SAMPAPI_BEGIN_V037R5_1

CObjectPool::CObjectPool() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0x12800))(this);
}

CObjectPool::~CObjectPool() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0x13160))(this);
}

void CObjectPool::UpdateLargestId() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0x127A0))(this);
}

int CObjectPool::GetCount() {
    return ((int(__thiscall*)(CObjectPool*))GetAddress(0x12830))(this);
}

BOOL CObjectPool::Delete(ID nId) {
    return ((BOOL(__thiscall*)(CObjectPool*, ID))GetAddress(0x12850))(this, nId);
}

BOOL CObjectPool::Create(ID nId, int nModel, CVector position, CVector rotation, float fDrawDistance) {
    return ((BOOL(__thiscall*)(CObjectPool*, ID, int, CVector, CVector, float))GetAddress(0x128D0))(this, nId, nModel, position, rotation, fDrawDistance);
}

CObject* CObjectPool::Find(::CObject* pGameObject) {
    return ((CObject * (__thiscall*)(CObjectPool*, ::CObject*)) GetAddress(0x129D0))(this, pGameObject);
}

int CObjectPool::GetId(::CObject* pGameObject) {
    return ((int(__thiscall*)(CObjectPool*, ::CObject*))GetAddress(0x12A10))(this, pGameObject);
}

void CObjectPool::Process() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0x12A50))(this);
}

void CObjectPool::ConstructMaterials() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0x12B10))(this);
}

void CObjectPool::ShutdownMaterials() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0x12B50))(this);
}

void CObjectPool::Draw() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0x12B90))(this);
}

void CObjectPool::DrawLast() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0x12BD0))(this);
}

CObject* CObjectPool::Get(ID nId) {
    return ((CObject * (__thiscall*)(CObjectPool*, ID)) GetAddress(0x2DE0))(this, nId);
}

SAMPAPI_END
