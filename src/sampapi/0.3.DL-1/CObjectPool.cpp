/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CObjectPool.h"

SAMPAPI_BEGIN_V03DL_1

CObjectPool::CObjectPool() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0x12700))(this);
}

CObjectPool::~CObjectPool() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0x13060))(this);
}

void CObjectPool::UpdateLargestId() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0x126A0))(this);
}

int CObjectPool::GetCount() {
    return ((int(__thiscall*)(CObjectPool*))GetAddress(0x12730))(this);
}

BOOL CObjectPool::Delete(ID nId) {
    return ((BOOL(__thiscall*)(CObjectPool*, ID))GetAddress(0x12750))(this, nId);
}

BOOL CObjectPool::Create(ID nId, int nModel, CVector position, CVector rotation, float fDrawDistance) {
    return ((BOOL(__thiscall*)(CObjectPool*, ID, int, CVector, CVector, float))GetAddress(0x127D0))(this, nId, nModel, position, rotation, fDrawDistance);
}

CObject* CObjectPool::Find(::CObject* pGameObject) {
    return ((CObject * (__thiscall*)(CObjectPool*, ::CObject*)) GetAddress(0x128D0))(this, pGameObject);
}

int CObjectPool::GetId(::CObject* pGameObject) {
    return ((int(__thiscall*)(CObjectPool*, ::CObject*))GetAddress(0x12910))(this, pGameObject);
}

void CObjectPool::Process() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0x12950))(this);
}

void CObjectPool::ConstructMaterials() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0x12A10))(this);
}

void CObjectPool::ShutdownMaterials() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0x12A50))(this);
}

void CObjectPool::Draw() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0x12A90))(this);
}

void CObjectPool::DrawLast() {
    ((void(__thiscall*)(CObjectPool*))GetAddress(0x12AD0))(this);
}

CObject* CObjectPool::Get(ID nId) {
    return ((CObject * (__thiscall*)(CObjectPool*, ID)) GetAddress(0x2E10))(this, nId);
}

SAMPAPI_END
