/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CEntity.h"

SAMPAPI_BEGIN_V037R1

CEntity::CEntity() {
	((void(__thiscall*)(CEntity*))GetAddress(0x97C10))(this);
}

CEntity::~CEntity() {
}

void CEntity::GetMatrix(CMatrix* pMatrix) {
    ((void(__thiscall*)(CEntity*, CMatrix*))GetAddress(0x9A150))(this, pMatrix);
}

void CEntity::SetMatrix(CMatrix matrix) {
    ((void(__thiscall*)(CEntity*, CMatrix))GetAddress(0x9A200))(this, matrix);
}

void CEntity::UpdateRwFrame() {
    ((void(__thiscall*)(CEntity*))GetAddress(0x9A2C0))(this);
}

void CEntity::GetSpeed(CVector* pVec) {
    ((void(__thiscall*)(CEntity*, CVector*))GetAddress(0x9A320))(this, pVec);
}

void CEntity::SetSpeed(CVector vec) {
    ((void(__thiscall*)(CEntity*, CVector))GetAddress(0x9A350))(this, vec);
}

void CEntity::GetTurnSpeed(CVector* pSpeed) {
    ((void(__thiscall*)(CEntity*, CVector*))GetAddress(0x9A470))(this, pSpeed);
}

void CEntity::SetTurnSpeed(CVector speed) {
    ((void(__thiscall*)(CEntity*, CVector))GetAddress(0x9A4A0))(this, speed);
}

void CEntity::ApplyTurnSpeed() {
    ((void(__thiscall*)(CEntity*))GetAddress(0x9A4D0))(this);
}

float CEntity::GetDistanceFromCentreOfMassToBaseOfModel() {
    return ((float(__thiscall*)(CEntity*))GetAddress(0x9A4F0))(this);
}

void CEntity::GetBoundCentre(CVector* pCentre) {
    ((void(__thiscall*)(CEntity*, CVector*))GetAddress(0x9A530))(this, pCentre);
}

void CEntity::SetModelIndex(int nModel) {
    ((void(__thiscall*)(CEntity*, int))GetAddress(0x9A590))(this, nModel);
}

int CEntity::GetModelIndex() {
    return ((int(__thiscall*)(CEntity*))GetAddress(0x9A670))(this);
}

void CEntity::Teleport(CVector position) {
    ((void(__thiscall*)(CEntity*, CVector))GetAddress(0x9A680))(this, position);
}

float CEntity::GetDistanceToLocalPlayer() {
    return ((float(__thiscall*)(CEntity*))GetAddress(0x9A700))(this);
}

float CEntity::GetDistanceToCamera() {
    return ((float(__thiscall*)(CEntity*))GetAddress(0x9A7D0))(this);
}

float CEntity::GetDistanceToLocalPlayerNoHeight() {
    return ((float(__thiscall*)(CEntity*))GetAddress(0x9A830))(this);
}

float CEntity::GetDistanceToPoint(CVector position) {
    return ((float(__thiscall*)(CEntity*, CVector))GetAddress(0x9A8F0))(this, position);
}

BOOL CEntity::DoesExist() {
    return ((int(__thiscall*)(CEntity*))GetAddress(0x9AA10))(this);
}

int CEntity::EnforceWorldBoundries(float fPX, float fZX, float fPY, float fNY) {
    return ((int(__thiscall*)(CEntity*, float, float, float, float))GetAddress(0x9AA60))(this, fPX, fZX, fPY, fNY);
}

int CEntity::HasExceededWorldBoundries(float fPX, float fZX, float fPY, float fNY) {
    return ((int(__thiscall*)(CEntity*, float, float, float, float))GetAddress(0x9AC00))(this, fPX, fZX, fPY, fNY);
}

void CEntity::SetClumpAlpha(int nValue) {
    ((void(__thiscall*)(CEntity*, int))GetAddress(0x9ADD0))(this, nValue);
}

void CEntity::SetFromEuler(CVector angles) {
    ((void(__thiscall*)(CEntity*, CVector))GetAddress(0x9AE30))(this, angles);
}

void CEntity::GetEulerInverted(float* pX, float* pY, float* pZ) {
    ((void(__thiscall*)(CEntity*, float*, float*, float*))GetAddress(0x9AF30))(this, pX, pY, pZ);
}

void CEntity::ApplyTurnForce(CVector direction, CVector velocity) {
    ((void(__thiscall*)(CEntity*, CVector, CVector))GetAddress(0x9B010))(this, direction, velocity);
}

BOOL CEntity::IsStationary() {
    return ((BOOL(__thiscall*)(CEntity*))GetAddress(0x9B420))(this);
}

RwObject* CEntity::GetRwObject() {
    return ((RwObject * (__thiscall*)(CEntity*)) GetAddress(0x9B0A0))(this);
}

BOOL CEntity::IsIgnored() {
    return ((BOOL(__thiscall*)(CEntity*))GetAddress(0x9B320))(this);
}

BOOL CEntity::GetCollisionFlag() {
    return ((BOOL(__thiscall*)(CEntity*))GetAddress(0x9ACA0))(this);
}

void CEntity::SetCollisionFlag(BOOL bEnable) {
    ((void(__thiscall*)(CEntity*, BOOL))GetAddress(0x9AC70))(this, bEnable);
}

void CEntity::SetCollisionProcessed(BOOL bProcessed) {
    ((void(__thiscall*)(CEntity*, BOOL))GetAddress(0x9ACC0))(this, bProcessed);
}

void CEntity::DeleteRwObject() {
    ((void(__thiscall*)(CEntity*))GetAddress(0x9B1F0))(this);
}

SAMPAPI_END
