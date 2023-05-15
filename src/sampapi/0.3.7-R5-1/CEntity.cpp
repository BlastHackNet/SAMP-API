/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CEntity.h"

SAMPAPI_BEGIN_V037R5_1

CEntity::CEntity() {
    ((void(__thiscall*)(CEntity*))GetAddress(0x9C260))(this);
}

CEntity::~CEntity() {
}

void CEntity::GetMatrix(CMatrix* pMatrix) {
    ((void(__thiscall*)(CEntity*, CMatrix*))GetAddress(0x9EB10))(this, pMatrix);
}

void CEntity::SetMatrix(CMatrix matrix) {
    ((void(__thiscall*)(CEntity*, CMatrix))GetAddress(0x9EBC0))(this, matrix);
}

void CEntity::GetSpeed(CVector* pVec) {
    ((void(__thiscall*)(CEntity*, CVector*))GetAddress(0x9ECE0))(this, pVec);
}

void CEntity::SetSpeed(CVector vec) {
    ((void(__thiscall*)(CEntity*, CVector))GetAddress(0x9ED10))(this, vec);
}

void CEntity::GetTurnSpeed(CVector* pVec) {
    ((void(__thiscall*)(CEntity*, CVector*))GetAddress(0x9EE30))(this, pVec);
}

void CEntity::SetTurnSpeed(CVector vec) {
    ((void(__thiscall*)(CEntity*, CVector))GetAddress(0x9EE60))(this, vec);
}

void CEntity::ApplyTurnSpeed() {
    ((void(__thiscall*)(CEntity*))GetAddress(0x9EE90))(this);
}

float CEntity::GetDistanceFromCentreOfMassToBaseOfModel() {
    return ((float(__thiscall*)(CEntity*))GetAddress(0x9EEB0))(this);
}

void CEntity::GetBoundCentre(CVector* pVec) {
    ((void(__thiscall*)(CEntity*, CVector*))GetAddress(0x9EEF0))(this, pVec);
}

void CEntity::SetModelIndex(int nModel) {
    ((void(__thiscall*)(CEntity*, int))GetAddress(0x9EF50))(this, nModel);
}

int CEntity::GetModelIndex() {
    return ((int(__thiscall*)(CEntity*))GetAddress(0x9F030))(this);
}

void CEntity::Teleport(CVector position) {
    ((void(__thiscall*)(CEntity*, CVector))GetAddress(0x9F040))(this, position);
}

float CEntity::GetDistanceToLocalPlayer() {
    return ((float(__thiscall*)(CEntity*))GetAddress(0x9F0C0))(this);
}

float CEntity::GetDistanceToCamera() {
    return ((float(__thiscall*)(CEntity*))GetAddress(0x9F190))(this);
}

float CEntity::GetDistanceToPoint(CVector position) {
    return ((float(__thiscall*)(CEntity*, CVector))GetAddress(0x9F2B0))(this, position);
}

BOOL CEntity::DoesExist() {
    return ((BOOL(__thiscall*)(CEntity*))GetAddress(0x9F3D0))(this);
}

BOOL CEntity::EnforceWorldBoundries(float fPX, float fZX, float fPY, float fNY) {
    return ((BOOL(__thiscall*)(CEntity*, float, float, float, float))GetAddress(0x9F420))(this, fPX, fZX, fPY, fNY);
}

BOOL CEntity::HasExceededWorldBoundries(float fPX, float fZX, float fPY, float fNY) {
    return ((BOOL(__thiscall*)(CEntity*, float, float, float, float))GetAddress(0x9F5C0))(this, fPX, fZX, fPY, fNY);
}

void CEntity::GetEulerInverted(float* x, float* y, float* z) {
    ((void(__thiscall*)(CEntity*, float*, float*, float*))GetAddress(0x9F8F0))(this, x, y, z);
}

BOOL CEntity::IsIgnored() {
    return ((BOOL(__thiscall*)(CEntity*))GetAddress(0x9FCE0))(this);
}

BOOL CEntity::IsStationary() {
    return ((BOOL(__thiscall*)(CEntity*))GetAddress(0x9FDE0))(this);
}

BOOL CEntity::GetCollisionFlag() {
    return ((BOOL(__thiscall*)(CEntity*))GetAddress(0x9F660))(this);
}

void CEntity::SetCollisionFlag(BOOL bEnable) {
    ((void(__thiscall*)(CEntity*, BOOL))GetAddress(0x9F630))(this, bEnable);
}

RwObject* CEntity::GetRwObject() {
    return ((::RwObject * (__thiscall*)(CEntity*)) GetAddress(0x9FA60))(this);
}

void CEntity::DeleteRwObject() {
    ((void(__thiscall*)(CEntity*))GetAddress(0x9FBB0))(this);
}

void CEntity::UpdateRwFrame() {
    ((void(__thiscall*)(CEntity*))GetAddress(0x9EC80))(this);
}

float CEntity::GetDistanceToLocalPlayerNoHeight() {
    return ((float(__thiscall*)(CEntity*))GetAddress(0x9F1F0))(this);
}

void CEntity::SetCollisionProcessed(BOOL bProcessed) {
    ((void(__thiscall*)(CEntity*, BOOL))GetAddress(0x9F680))(this, bProcessed);
}

SAMPAPI_END
