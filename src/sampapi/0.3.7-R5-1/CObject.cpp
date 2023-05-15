/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CObject.h"

SAMPAPI_BEGIN_V037R5_1

CObject::CObject(int nModel, CVector position, CVector rotation, float fDrawDistance, int a10, char a11, char a12) {
    ((void(__thiscall*)(CObject*, int, CVector, CVector, float, int, char, char))GetAddress(0xA9110))(this, nModel, position, rotation, fDrawDistance, a10, a11, a12);
}

CObject::~CObject() {
}

float CObject::GetDistance(const CMatrix* pMatrix) {
    return ((float(__thiscall*)(CObject*, const CMatrix*))GetAddress(0xA7FC0))(this, pMatrix);
}

void CObject::Stop() {
    ((void(__thiscall*)(CObject*))GetAddress(0xA8030))(this);
}

void CObject::SetRotation(const CVector* pVector) {
    ((void(__thiscall*)(CObject*, const CVector*))GetAddress(0xA80A0))(this, pVector);
}

void CObject::SetAttachedToVehicle(ID nId, const CVector* pOffset, const CVector* pRotation) {
    ((void(__thiscall*)(CObject*, ID, const CVector*, const CVector*))GetAddress(0xA8110))(this, nId, pOffset, pRotation);
}

void CObject::SetAttachedToObject(ID nId, const CVector* pOffset, const CVector* pRotation, char a5) {
    ((void(__thiscall*)(CObject*, ID, const CVector*, const CVector*, char))GetAddress(0xA81A0))(this, nId, pOffset, pRotation, a5);
}

void CObject::AttachToVehicle(CVehicle* pVehicle) {
    ((void(__thiscall*)(CObject*, CVehicle*))GetAddress(0xA8240))(this, pVehicle);
}

void CObject::AttachToObject(CObject* pObject) {
    ((void(__thiscall*)(CObject*, CObject*))GetAddress(0xA82C0))(this, pObject);
}

void CObject::Rotate(CVector vector) {
    ((void(__thiscall*)(CObject*, CVector))GetAddress(0xA83C0))(this, vector);
}

BOOL CObject::AttachedToMovingEntity() {
    return ((BOOL(__thiscall*)(CObject*))GetAddress(0xA84C0))(this);
}

void CObject::SetMaterial(int nModel, int nIndex, const char* szTxd, const char* szTexture, D3DCOLOR color) {
    ((void(__thiscall*)(CObject*, int, int, const char*, const char*, D3DCOLOR))GetAddress(0xA8530))(this, nModel, nIndex, szTxd, szTexture, color);
}

void CObject::SetMaterialText(int nIndex, const char* szText, char nMaterialSize, const char* szFont, char nFontSize, bool bBold, D3DCOLOR fontColor, D3DCOLOR backgroundColor, char align) {
    ((void(__thiscall*)(CObject*, int, const char*, char, const char*, char, bool, D3DCOLOR, D3DCOLOR, char))GetAddress(0xA86B0))(this, nIndex, szText, nMaterialSize, szFont, nFontSize, bBold, fontColor, backgroundColor, align);
}

bool CObject::GetMaterialSize(int nSize, int* x, int* y) {
    return ((bool(__thiscall*)(CObject*, int, int*, int*))GetAddress(0xA8C80))(this, nSize, x, y);
}

void CObject::Render() {
    ((void(__thiscall*)(CObject*))GetAddress(0xA8F60))(this);
}

void CObject::Process(float fElapsedTime) {
    ((void(__thiscall*)(CObject*, float))GetAddress(0xA9650))(this, fElapsedTime);
}

void CObject::ConstructMaterialText() {
    ((void(__thiscall*)(CObject*))GetAddress(0xA9EE0))(this);
}

void CObject::Draw() {
    ((void(__thiscall*)(CObject*))GetAddress(0xA9F90))(this);
}

void CObject::ShutdownMaterialText() {
    ((void(__thiscall*)(CObject*))GetAddress(0xA8ED0))(this);
}

SAMPAPI_END
