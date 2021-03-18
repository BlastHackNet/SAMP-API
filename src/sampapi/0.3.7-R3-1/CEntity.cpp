/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CEntity.h"

SAMPAPI_BEGIN_V037R3_1

CEntity::CEntity() {
    ((void(__thiscall*)(CEntity*))GetAddress(0x9BB50))(this);
}

CEntity::~CEntity() {
}

void CEntity::GetMatrix(CMatrix* pMatrix) {
    ((void(__thiscall*)(CEntity*, CMatrix*))GetAddress(0x9E400))(this, pMatrix);
}

void CEntity::SetMatrix(CMatrix matrix) {
    ((void(__thiscall*)(CEntity*, CMatrix))GetAddress(0x9E4B0))(this, matrix);
}

void CEntity::GetSpeed(CVector* pVec) {
    ((void(__thiscall*)(CEntity*, CVector*))GetAddress(0x9E5D0))(this, pVec);
}

void CEntity::SetSpeed(CVector vec) {
    ((void(__thiscall*)(CEntity*, CVector))GetAddress(0x9E600))(this, vec);
}

void CEntity::GetTurnSpeed(CVector* pVec) {
    ((void(__thiscall*)(CEntity*, CVector*))GetAddress(0x9E720))(this, pVec);
}

void CEntity::SetTurnSpeed(CVector vec) {
    ((void(__thiscall*)(CEntity*, CVector))GetAddress(0x9E750))(this, vec);
}

void CEntity::ApplyTurnSpeed() {
    ((void(__thiscall*)(CEntity*))GetAddress(0x9E780))(this);
}

float CEntity::GetDistanceFromCentreOfMassToBaseOfModel() {
    return ((float(__thiscall*)(CEntity*))GetAddress(0x9E7A0))(this);
}

void CEntity::GetBoundCentre(CVector* pVec) {
    ((void(__thiscall*)(CEntity*, CVector*))GetAddress(0x9E7E0))(this, pVec);
}

void CEntity::SetModelIndex(int nModel) {
    ((void(__thiscall*)(CEntity*, int))GetAddress(0x9E840))(this, nModel);
}

int CEntity::GetModelIndex() {
    return ((int(__thiscall*)(CEntity*))GetAddress(0x9E920))(this);
}

void CEntity::Teleport(CVector position) {
    ((void(__thiscall*)(CEntity*, CVector))GetAddress(0x9E930))(this, position);
}

float CEntity::GetDistanceToLocalPlayer() {
    return ((float(__thiscall*)(CEntity*))GetAddress(0x9E9B0))(this);
}

float CEntity::GetDistanceToCamera() {
    return ((float(__thiscall*)(CEntity*))GetAddress(0x9EA80))(this);
}

float CEntity::GetDistanceToPoint(CVector position) {
    return ((float(__thiscall*)(CEntity*, CVector))GetAddress(0x9EBA0))(this, position);
}

BOOL CEntity::DoesExist() {
    return ((BOOL(__thiscall*)(CEntity*))GetAddress(0x9ECC0))(this);
}

BOOL CEntity::EnforceWorldBoundries(float fPX, float fZX, float fPY, float fNY) {
    return ((BOOL(__thiscall*)(CEntity*, float, float, float, float))GetAddress(0x9ED10))(this, fPX, fZX, fPY, fNY);
}

BOOL CEntity::HasExceededWorldBoundries(float fPX, float fZX, float fPY, float fNY) {
    return ((BOOL(__thiscall*)(CEntity*, float, float, float, float))GetAddress(0x9EEB0))(this, fPX, fZX, fPY, fNY);
}

void CEntity::GetEulerInverted(float* x, float* y, float* z) {
    ((void(__thiscall*)(CEntity*, float*, float*, float*))GetAddress(0x9F1E0))(this, x, y, z);
}

BOOL CEntity::IsIgnored() {
    return ((BOOL(__thiscall*)(CEntity*))GetAddress(0x9F5D0))(this);
}

BOOL CEntity::IsStationary() {
    return ((BOOL(__thiscall*)(CEntity*))GetAddress(0x9F6D0))(this);
}

BOOL CEntity::GetCollisionFlag() {
    return ((BOOL(__thiscall*)(CEntity*))GetAddress(0x9EF50))(this);
}

void CEntity::SetCollisionFlag(BOOL bEnable) {
    ((void(__thiscall*)(CEntity*, BOOL))GetAddress(0x9EF20))(this, bEnable);
}

RwObject* CEntity::GetRwObject() {
    return ((::RwObject * (__thiscall*)(CEntity*)) GetAddress(0x9F350))(this);
}

void CEntity::DeleteRwObject() {
    ((void(__thiscall*)(CEntity*))GetAddress(0x9F4A0))(this);
}

void CEntity::UpdateRwFrame() {
    ((void(__thiscall*)(CEntity*))GetAddress(0x9E570))(this);
}

float CEntity::GetDistanceToLocalPlayerNoHeight() {
    return ((float(__thiscall*)(CEntity*))GetAddress(0x9EAE0))(this);
}

void CEntity::SetCollisionProcessed(BOOL bProcessed) {
    ((void(__thiscall*)(CEntity*, BOOL))GetAddress(0x9EF70))(this, bProcessed);
}

SAMPAPI_END
