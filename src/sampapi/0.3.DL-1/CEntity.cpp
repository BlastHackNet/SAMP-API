/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CEntity.h"

SAMPAPI_BEGIN_V03DL_1

CEntity::CEntity() {
    ((void(__thiscall*)(CEntity*))GetAddress(0x9BCE0))(this);
}

CEntity::~CEntity() {
}

void CEntity::GetMatrix(CMatrix* pMatrix) {
    ((void(__thiscall*)(CEntity*, CMatrix*))GetAddress(0x9E950))(this, pMatrix);
}

void CEntity::SetMatrix(CMatrix matrix) {
    ((void(__thiscall*)(CEntity*, CMatrix))GetAddress(0x9EA00))(this, matrix);
}

void CEntity::GetSpeed(CVector* pVec) {
    ((void(__thiscall*)(CEntity*, CVector*))GetAddress(0x9EB20))(this, pVec);
}

void CEntity::SetSpeed(CVector vec) {
    ((void(__thiscall*)(CEntity*, CVector))GetAddress(0x9EB50))(this, vec);
}

void CEntity::GetTurnSpeed(CVector* pVec) {
    ((void(__thiscall*)(CEntity*, CVector*))GetAddress(0x9EC70))(this, pVec);
}

void CEntity::SetTurnSpeed(CVector vec) {
    ((void(__thiscall*)(CEntity*, CVector))GetAddress(0x9ECA0))(this, vec);
}

void CEntity::ApplyTurnSpeed() {
    ((void(__thiscall*)(CEntity*))GetAddress(0x9ECD0))(this);
}

float CEntity::GetDistanceFromCentreOfMassToBaseOfModel() {
    return ((float(__thiscall*)(CEntity*))GetAddress(0x9ECF0))(this);
}

void CEntity::GetBoundCentre(CVector* pVec) {
    ((void(__thiscall*)(CEntity*, CVector*))GetAddress(0x9ED30))(this, pVec);
}

void CEntity::SetModelIndex(int nModel) {
    ((void(__thiscall*)(CEntity*, int))GetAddress(0x9ED90))(this, nModel);
}

int CEntity::GetModelIndex() {
    return ((int(__thiscall*)(CEntity*))GetAddress(0x9EE70))(this);
}

void CEntity::Teleport(CVector position) {
    ((void(__thiscall*)(CEntity*, CVector))GetAddress(0x9EE80))(this, position);
}

float CEntity::GetDistanceToLocalPlayer() {
    return ((float(__thiscall*)(CEntity*))GetAddress(0x9EF00))(this);
}

float CEntity::GetDistanceToCamera() {
    return ((float(__thiscall*)(CEntity*))GetAddress(0x9EFD0))(this);
}

float CEntity::GetDistanceToPoint(CVector position) {
    return ((float(__thiscall*)(CEntity*, CVector))GetAddress(0x9F0F0))(this, position);
}

BOOL CEntity::DoesExist() {
    return ((BOOL(__thiscall*)(CEntity*))GetAddress(0x9F210))(this);
}

BOOL CEntity::EnforceWorldBoundries(float fPX, float fZX, float fPY, float fNY) {
    return ((BOOL(__thiscall*)(CEntity*, float, float, float, float))GetAddress(0x9F260))(this, fPX, fZX, fPY, fNY);
}

BOOL CEntity::HasExceededWorldBoundries(float fPX, float fZX, float fPY, float fNY) {
    return ((BOOL(__thiscall*)(CEntity*, float, float, float, float))GetAddress(0x9F400))(this, fPX, fZX, fPY, fNY);
}

void CEntity::GetEulerInverted(float* x, float* y, float* z) {
    ((void(__thiscall*)(CEntity*, float*, float*, float*))GetAddress(0x9F730))(this, x, y, z);
}

BOOL CEntity::IsIgnored() {
    return ((BOOL(__thiscall*)(CEntity*))GetAddress(0x9FB20))(this);
}

BOOL CEntity::IsStationary() {
    return ((BOOL(__thiscall*)(CEntity*))GetAddress(0x9FC20))(this);
}

BOOL CEntity::GetCollisionFlag() {
    return ((BOOL(__thiscall*)(CEntity*))GetAddress(0x9F4A0))(this);
}

void CEntity::SetCollisionFlag(BOOL bEnable) {
    ((void(__thiscall*)(CEntity*, BOOL))GetAddress(0x9F470))(this, bEnable);
}

RwObject* CEntity::GetRwObject() {
    return ((::RwObject * (__thiscall*)(CEntity*)) GetAddress(0x9F8A0))(this);
}

void CEntity::DeleteRwObject() {
    ((void(__thiscall*)(CEntity*))GetAddress(0x9F9F0))(this);
}

void CEntity::UpdateRwFrame() {
    ((void(__thiscall*)(CEntity*))GetAddress(0x9EAC0))(this);
}

float CEntity::GetDistanceToLocalPlayerNoHeight() {
    return ((float(__thiscall*)(CEntity*))GetAddress(0x9F030))(this);
}

void CEntity::SetCollisionProcessed(BOOL bProcessed) {
    ((void(__thiscall*)(CEntity*, BOOL))GetAddress(0x9F4C0))(this, bProcessed);
}

SAMPAPI_END
