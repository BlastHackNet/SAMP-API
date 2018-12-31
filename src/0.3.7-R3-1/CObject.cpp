/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CObject.h"

SAMP::CObject::CObject(int nModel, CVector position, CVector rotation, float fDrawDistance, int a10, char a11, char a12) {
	((void(__thiscall *)(CObject *, int, CVector, CVector, float, int, char, char))SAMP_ADDROF(0xA8880))(this, nModel, position, rotation, fDrawDistance, a10, a11, a12);
}

float SAMP::CObject::GetDistance(const CMatrix *pMatrix) {
	return ((float(__thiscall *)(CObject *, const CMatrix *))SAMP_ADDROF(0xA7730))(this, pMatrix);
}

void SAMP::CObject::Stop() {
	((void(__thiscall *)(CObject *))SAMP_ADDROF(0xA77A0))(this);
}

void SAMP::CObject::SetRotation(const CVector *pVector) {
	((void(__thiscall *)(CObject *, const CVector *))SAMP_ADDROF(0xA7810))(this, pVector);
}

void SAMP::CObject::SetAttachedToVehicle(ID nId, const CVector *pOffset, const CVector *pRotation) {
	((void(__thiscall *)(CObject *, ID, const CVector *, const CVector *))SAMP_ADDROF(0xA7880))(this, nId, pOffset, pRotation);
}

void SAMP::CObject::SetAttachedToObject(ID nId, const CVector *pOffset, const CVector *pRotation, char a5) {
	((void(__thiscall *)(CObject *, ID, const CVector *, const CVector *, char))SAMP_ADDROF(0xA7910))(this, nId, pOffset, pRotation, a5);
}

void SAMP::CObject::AttachToVehicle(CVehicle *pVehicle) {
	((void(__thiscall *)(CObject *, CVehicle *))SAMP_ADDROF(0xA79B0))(this, pVehicle);
}

void SAMP::CObject::AttachToObject(CObject *pObject) {
	((void(__thiscall *)(CObject *, CObject *))SAMP_ADDROF(0xA7A30))(this, pObject);
}

void SAMP::CObject::Rotate(CVector vector) {
	((void(__thiscall *)(CObject *, CVector))SAMP_ADDROF(0xA7B30))(this, vector);
}

BOOL SAMP::CObject::AttachedToMovingEntity() {
	return ((BOOL(__thiscall *)(CObject *))SAMP_ADDROF(0xA7C30))(this);
}

void SAMP::CObject::SetMaterial(int nModel, int nIndex, const char *szTxd, const char *szTexture, D3DCOLOR color) {
	((void(__thiscall *)(CObject *, int, int, const char *, const char *, D3DCOLOR))SAMP_ADDROF(0xA7CA0))(this, nModel, nIndex, szTxd, szTexture, color);
}

void SAMP::CObject::SetMaterialText(int nIndex, const char *szText, char nMaterialSize, const char *szFont, char nFontSize, bool bBold, D3DCOLOR fontColor, D3DCOLOR backgroundColor, char align) {
	((void(__thiscall *)(CObject *, int, const char *, char, const char *, char, bool, D3DCOLOR, D3DCOLOR, char))SAMP_ADDROF(0xA7E20))(this, nIndex, szText, nMaterialSize, szFont, nFontSize, bBold, fontColor, backgroundColor, align);
}

bool SAMP::CObject::GetMaterialSize(int nSize, int *x, int *y) {
	return ((bool(__thiscall *)(CObject *, int, int *, int *))SAMP_ADDROF(0xA83F0))(this, nSize, x, y);
}

void SAMP::CObject::Render() {
	((void(__thiscall *)(CObject *))SAMP_ADDROF(0xA86D0))(this);
}

void SAMP::CObject::Process(float fElapsedTime) {
	((void(__thiscall *)(CObject *, float))SAMP_ADDROF(0xA8DC0))(this, fElapsedTime);
}

void SAMP::CObject::ConstructMaterialText() {
	((void(__thiscall *)(CObject *))SAMP_ADDROF(0xA9650))(this);
}

void SAMP::CObject::Draw() {
	((void(__thiscall *)(CObject *))SAMP_ADDROF(0xA9700))(this);
}

void SAMP::CObject::ShutdownMaterialText() {
	((void(__thiscall *)(CObject *))SAMP_ADDROF(0xA8640))(this);
}

