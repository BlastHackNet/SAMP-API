/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CEntity.h"

void SAMP::CEntity::GetMatrix(CMatrix *pMatrix) {
	((void(__thiscall *)(CEntity *, CMatrix *))SAMP_ADDROF(0x9A150))(this, pMatrix);
}

void SAMP::CEntity::SetMatrix(CMatrix matrix) {
	((void(__thiscall *)(CEntity *, CMatrix))SAMP_ADDROF(0x9A200))(this, matrix);
}

void SAMP::CEntity::UpdateRwFrame() {
	((void(__thiscall *)(CEntity *))SAMP_ADDROF(0x9A2C0))(this);
}

void SAMP::CEntity::GetSpeed(CVector *pVec) {
	((void(__thiscall *)(CEntity *, CVector *))SAMP_ADDROF(0x9A320))(this, pVec);
}

void SAMP::CEntity::SetSpeed(CVector vec) {
	((void(__thiscall *)(CEntity *, CVector))SAMP_ADDROF(0x9A350))(this, vec);
}

void SAMP::CEntity::GetTurnSpeed(CVector *pSpeed) {
	((void(__thiscall *)(CEntity *, CVector *))SAMP_ADDROF(0x9A470))(this, pSpeed);
}

void SAMP::CEntity::SetTurnSpeed(CVector speed) {
	((void(__thiscall *)(CEntity *, CVector))SAMP_ADDROF(0x9A4A0))(this, speed);
}

void SAMP::CEntity::ApplyTurnSpeed() {
	((void(__thiscall *)(CEntity *))SAMP_ADDROF(0x9A4D0))(this);
}

float SAMP::CEntity::GetDistanceFromCentreOfMassToBaseOfModel() {
	return ((float(__thiscall *)(CEntity *))SAMP_ADDROF(0x9A4F0))(this);
}

void SAMP::CEntity::GetBoundCentre(CVector *pCentre) {
	((void(__thiscall *)(CEntity *, CVector *))SAMP_ADDROF(0x9A530))(this, pCentre);
}

void SAMP::CEntity::SetModelIndex(int nModel) {
	((void(__thiscall *)(CEntity *, int))SAMP_ADDROF(0x9A590))(this, nModel);
}

int SAMP::CEntity::GetModelIndex() {
	return ((int(__thiscall *)(CEntity *))SAMP_ADDROF(0x9A670))(this);
}

void SAMP::CEntity::Teleport(CVector position) {
	((void(__thiscall *)(CEntity *, CVector))SAMP_ADDROF(0x9A680))(this, position);
}

float SAMP::CEntity::GetDistanceToLocalPlayer() {
	return ((float(__thiscall *)(CEntity *))SAMP_ADDROF(0x9A700))(this);
}

float SAMP::CEntity::GetDistanceToCamera() {
	return ((float(__thiscall *)(CEntity *))SAMP_ADDROF(0x9A7D0))(this);
}

float SAMP::CEntity::GetDistanceToLocalPlayerNoHeight() {
	return ((float(__thiscall *)(CEntity *))SAMP_ADDROF(0x9A830))(this);
}

float SAMP::CEntity::GetDistanceToPoint(CVector position) {
	return ((float(__thiscall *)(CEntity *, CVector))SAMP_ADDROF(0x9A8F0))(this, position);
}

BOOL SAMP::CEntity::DoesExist() {
	return ((int(__thiscall *)(CEntity *))SAMP_ADDROF(0x9AA10))(this);
}

int SAMP::CEntity::EnforceWorldBoundries(float fPX, float fZX, float fPY, float fNY) {
	return ((int(__thiscall *)(CEntity *, float, float, float, float))SAMP_ADDROF(0x9AA60))(this, fPX, fZX, fPY, fNY);
}

int SAMP::CEntity::HasExceededWorldBoundries(float fPX, float fZX, float fPY, float fNY) {
	return ((int(__thiscall *)(CEntity *, float, float, float, float))SAMP_ADDROF(0x9AC00))(this, fPX, fZX, fPY, fNY);
}

void SAMP::CEntity::SetClumpAlpha(int nValue) {
	((void(__thiscall *)(CEntity *, int))SAMP_ADDROF(0x9ADD0))(this, nValue);
}

void SAMP::CEntity::SetFromEuler(CVector angles) {
	((void(__thiscall *)(CEntity *, CVector))SAMP_ADDROF(0x9AE30))(this, angles);
}

void SAMP::CEntity::GetEulerInverted(float *pX, float *pY, float *pZ) {
	((void(__thiscall *)(CEntity *, float *, float *, float *))SAMP_ADDROF(0x9AF30))(this, pX, pY, pZ);
}

void SAMP::CEntity::ApplyTurnForce(CVector direction, CVector velocity) {
	((void(__thiscall *)(CEntity *, CVector, CVector))SAMP_ADDROF(0x9B010))(this, direction, velocity);
}

SAMP::CEntity::CEntity() {
	((void(__thiscall *)(CEntity *))SAMP_ADDROF(0x97C10))(this);
}

BOOL SAMP::CEntity::IsStationary() {
	return ((BOOL(__thiscall *)(CEntity *))SAMP_ADDROF(0x9B420))(this);
}

RwObject *SAMP::CEntity::GetRwObject() {
	return ((RwObject *(__thiscall *)(CEntity *))SAMP_ADDROF(0x9B0A0))(this);
}

BOOL SAMP::CEntity::IsIgnored() {
	return ((BOOL(__thiscall *)(CEntity *))SAMP_ADDROF(0x9B320))(this);
}

BOOL SAMP::CEntity::GetCollisionFlag() {
	return ((BOOL(__thiscall *)(CEntity *))SAMP_ADDROF(0x9ACA0))(this);
}

void SAMP::CEntity::SetCollisionFlag(BOOL bEnable) {
	((void(__thiscall *)(CEntity *, BOOL))SAMP_ADDROF(0x9AC70))(this, bEnable);
}

void SAMP::CEntity::SetCollisionProcessed(BOOL bProcessed) {
	((void(__thiscall *)(CEntity *, BOOL))SAMP_ADDROF(0x9ACC0))(this, bProcessed);
}

void SAMP::CEntity::DeleteRwObject() {
	((void(__thiscall *)(CEntity *))SAMP_ADDROF(0x9B1F0))(this);
}