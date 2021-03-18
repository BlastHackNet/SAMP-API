/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CObject.h"

SAMPAPI_BEGIN_V037R1

CObject::CObject(int nModel, CVector position, CVector rotation, float fDrawDistance, int arg5) {
    ((void(__thiscall*)(CObject*, int, CVector, CVector, float, int))GetAddress(0xA3AB0))(this, nModel, position, rotation, fDrawDistance, arg5);
}

CObject::~CObject() {
}

float CObject::GetDistance(const CMatrix* pMatrix) {
    return ((float(__thiscall*)(CObject*, const CMatrix*))GetAddress(0xA2960))(this, pMatrix);
}

void CObject::Stop() {
    ((void(__thiscall*)(CObject*))GetAddress(0xA29D0))(this);
}

void CObject::SetRotation(const CVector* pRotation) {
    ((void(__thiscall*)(CObject*, const CVector*))GetAddress(0xA2A40))(this, pRotation);
}

void CObject::AttachToVehicle(CVehicle* pVehicle) {
    ((void(__thiscall*)(CObject*, CVehicle * pVehicle)) GetAddress(0xA2BE0))(this, pVehicle);
}

void CObject::AttachToObject(CObject* pObject) {
    ((void(__thiscall*)(CObject*, CObject*))GetAddress(0xA2C60))(this, pObject);
}

void CObject::Rotate(CVector vRotation) {
    ((void(__thiscall*)(CObject*, CVector))GetAddress(0xA2D60))(this, vRotation);
}

void CObject::Process(float fTimeElapsed) {
    ((void(__thiscall*)(CObject*, float))GetAddress(0xA3F70))(this, fTimeElapsed);
}

void CObject::SetAttachedToVehicle(ID nId, const CVector* pOffset, const CVector* pRotation) {
    ((void(__thiscall*)(CObject*, ID, const CVector*, const CVector*))GetAddress(0xA2AB0))(this, nId, pOffset, pRotation);
}

void CObject::SetAttachedToObject(ID nId, const CVector* pOffset, const CVector* pRotation, char a5) {
    ((void(__thiscall*)(CObject*, ID, const CVector*, const CVector*, char))GetAddress(0xA2B40))(this, nId, pOffset, pRotation, a5);
}

BOOL CObject::AttachedToMovingEntity() {
    return ((BOOL(__thiscall*)(CObject*))GetAddress(0xA2E60))(this);
}

void CObject::SetMaterial(int nModel, int nIndex, const char* szTxd, const char* szTexture, D3DCOLOR color) {
    ((void(__thiscall*)(CObject*, int, int, const char*, const char*, D3DCOLOR))GetAddress(0xA2ED0))(this, nModel, nIndex, szTxd, szTexture, color);
}

void CObject::SetMaterialText(int nIndex, const char* szText, char nMaterialSize, const char* szFont, char nFontSize, bool bBold, D3DCOLOR fontColor, D3DCOLOR backgroundColor, char align) {
    ((void(__thiscall*)(CObject*, int, const char*, char, const char*, char, bool, D3DCOLOR, D3DCOLOR, char))GetAddress(0xA3050))(this, nIndex, szText, nMaterialSize, szFont, nFontSize, bBold, fontColor, backgroundColor, align);
}

bool CObject::GetMaterialSize(int nSize, int* x, int* y) {
    return ((bool(__thiscall*)(CObject*, int, int*, int*))GetAddress(0xA3620))(this, nSize, x, y);
}

void CObject::Render() {
    ((void(__thiscall*)(CObject*))GetAddress(0xA3900))(this);
}

void CObject::ConstructMaterialText() {
    ((void(__thiscall*)(CObject*))GetAddress(0xA47F0))(this);
}

void CObject::Draw() {
    ((void(__thiscall*)(CObject*))GetAddress(0xA48A0))(this);
}

void CObject::ShutdownMaterialText() {
    ((void(__thiscall*)(CObject*))GetAddress(0xA3870))(this);
}

SAMPAPI_END
