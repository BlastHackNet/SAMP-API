/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CObject.h"

SAMPAPI_BEGIN_V037R3_1

CObject::CObject(int nModel, CVector position, CVector rotation, float fDrawDistance, int a10, char a11, char a12) {
    ((void(__thiscall*)(CObject*, int, CVector, CVector, float, int, char, char))GetAddress(0xA8880))(this, nModel, position, rotation, fDrawDistance, a10, a11, a12);
}

CObject::~CObject() {
}

float CObject::GetDistance(const CMatrix* pMatrix) {
    return ((float(__thiscall*)(CObject*, const CMatrix*))GetAddress(0xA7730))(this, pMatrix);
}

void CObject::Stop() {
    ((void(__thiscall*)(CObject*))GetAddress(0xA77A0))(this);
}

void CObject::SetRotation(const CVector* pVector) {
    ((void(__thiscall*)(CObject*, const CVector*))GetAddress(0xA7810))(this, pVector);
}

void CObject::SetAttachedToVehicle(ID nId, const CVector* pOffset, const CVector* pRotation) {
    ((void(__thiscall*)(CObject*, ID, const CVector*, const CVector*))GetAddress(0xA7880))(this, nId, pOffset, pRotation);
}

void CObject::SetAttachedToObject(ID nId, const CVector* pOffset, const CVector* pRotation, char a5) {
    ((void(__thiscall*)(CObject*, ID, const CVector*, const CVector*, char))GetAddress(0xA7910))(this, nId, pOffset, pRotation, a5);
}

void CObject::AttachToVehicle(CVehicle* pVehicle) {
    ((void(__thiscall*)(CObject*, CVehicle*))GetAddress(0xA79B0))(this, pVehicle);
}

void CObject::AttachToObject(CObject* pObject) {
    ((void(__thiscall*)(CObject*, CObject*))GetAddress(0xA7A30))(this, pObject);
}

void CObject::Rotate(CVector vector) {
    ((void(__thiscall*)(CObject*, CVector))GetAddress(0xA7B30))(this, vector);
}

BOOL CObject::AttachedToMovingEntity() {
    return ((BOOL(__thiscall*)(CObject*))GetAddress(0xA7C30))(this);
}

void CObject::SetMaterial(int nModel, int nIndex, const char* szTxd, const char* szTexture, D3DCOLOR color) {
    ((void(__thiscall*)(CObject*, int, int, const char*, const char*, D3DCOLOR))GetAddress(0xA7CA0))(this, nModel, nIndex, szTxd, szTexture, color);
}

void CObject::SetMaterialText(int nIndex, const char* szText, char nMaterialSize, const char* szFont, char nFontSize, bool bBold, D3DCOLOR fontColor, D3DCOLOR backgroundColor, char align) {
    ((void(__thiscall*)(CObject*, int, const char*, char, const char*, char, bool, D3DCOLOR, D3DCOLOR, char))GetAddress(0xA7E20))(this, nIndex, szText, nMaterialSize, szFont, nFontSize, bBold, fontColor, backgroundColor, align);
}

bool CObject::GetMaterialSize(int nSize, int* x, int* y) {
    return ((bool(__thiscall*)(CObject*, int, int*, int*))GetAddress(0xA83F0))(this, nSize, x, y);
}

void CObject::Render() {
    ((void(__thiscall*)(CObject*))GetAddress(0xA86D0))(this);
}

void CObject::Process(float fElapsedTime) {
    ((void(__thiscall*)(CObject*, float))GetAddress(0xA8DC0))(this, fElapsedTime);
}

void CObject::ConstructMaterialText() {
    ((void(__thiscall*)(CObject*))GetAddress(0xA9650))(this);
}

void CObject::Draw() {
    ((void(__thiscall*)(CObject*))GetAddress(0xA9700))(this);
}

void CObject::ShutdownMaterialText() {
    ((void(__thiscall*)(CObject*))GetAddress(0xA8640))(this);
}

SAMPAPI_END
