/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CEntity.h"

SAMP::CEntity::CEntity() {
	((void(__thiscall *)(CEntity *))SAMP_ADDROF(0x9BB50))(this);
}

void SAMP::CEntity::GetMatrix(CMatrix *pMatrix) {
	((void(__thiscall *)(CEntity *, CMatrix *))SAMP_ADDROF(0x9E400))(this, pMatrix);
}

void SAMP::CEntity::SetMatrix(CMatrix matrix) {
	((void(__thiscall *)(CEntity *, CMatrix))SAMP_ADDROF(0x9E4B0))(this, matrix);
}

void SAMP::CEntity::GetSpeed(CVector *pVec) {
	((void(__thiscall *)(CEntity *, CVector *))SAMP_ADDROF(0x9E5D0))(this, pVec);
}

void SAMP::CEntity::SetSpeed(CVector vec) {
	((void(__thiscall *)(CEntity *, CVector))SAMP_ADDROF(0x9E600))(this, vec);
}

void SAMP::CEntity::GetTurnSpeed(CVector *pVec) {
	((void(__thiscall *)(CEntity *, CVector *))SAMP_ADDROF(0x9E720))(this, pVec);
}

void SAMP::CEntity::SetTurnSpeed(CVector vec) {
	((void(__thiscall *)(CEntity *, CVector))SAMP_ADDROF(0x9E750))(this, vec);
}

void SAMP::CEntity::ApplyTurnSpeed() {
	((void(__thiscall *)(CEntity *))SAMP_ADDROF(0x9E780))(this);
}

float SAMP::CEntity::GetDistanceFromCentreOfMassToBaseOfModel() {
	return ((float(__thiscall *)(CEntity *))SAMP_ADDROF(0x9E7A0))(this);
}

void SAMP::CEntity::GetBoundCentre(CVector *pVec) {
	((void(__thiscall *)(CEntity *, CVector *))SAMP_ADDROF(0x9E7E0))(this, pVec);
}

void SAMP::CEntity::SetModelIndex(int nModel) {
	((void(__thiscall *)(CEntity *, int))SAMP_ADDROF(0x9E840))(this, nModel);
}

int SAMP::CEntity::GetModelIndex() {
	return ((int(__thiscall *)(CEntity *))SAMP_ADDROF(0x9E920))(this);
}

void SAMP::CEntity::Teleport(CVector position) {
	((void(__thiscall *)(CEntity *, CVector))SAMP_ADDROF(0x9E930))(this, position);
}

float SAMP::CEntity::GetDistanceToLocalPlayer() {
	return ((float(__thiscall *)(CEntity *))SAMP_ADDROF(0x9E9B0))(this);
}

float SAMP::CEntity::GetDistanceToCamera() {
	return ((float(__thiscall *)(CEntity *))SAMP_ADDROF(0x9EA80))(this);
}

float SAMP::CEntity::GetDistanceToPoint(CVector position) {
	return ((float(__thiscall *)(CEntity *, CVector))SAMP_ADDROF(0x9EBA0))(this, position);
}

BOOL SAMP::CEntity::DoesExist() {
	return ((BOOL(__thiscall *)(CEntity *))SAMP_ADDROF(0x9ECC0))(this);
}

BOOL SAMP::CEntity::EnforceWorldBoundries(float fPX, float fZX, float fPY, float fNY) {
	return ((BOOL(__thiscall *)(CEntity *, float, float, float, float))SAMP_ADDROF(0x9ED10))(this, fPX, fZX, fPY, fNY);
}

BOOL SAMP::CEntity::HasExceededWorldBoundries(float fPX, float fZX, float fPY, float fNY) {
	return ((BOOL(__thiscall *)(CEntity *, float, float, float, float))SAMP_ADDROF(0x9EEB0))(this, fPX, fZX, fPY, fNY);
}

void SAMP::CEntity::GetEulerInverted(float *x, float *y, float *z) {
	((void(__thiscall *)(CEntity *, float *, float *, float *))SAMP_ADDROF(0x9F1E0))(this, x, y, z);
}

BOOL SAMP::CEntity::IsIgnored() {
	return ((BOOL(__thiscall *)(CEntity *))SAMP_ADDROF(0x9F5D0))(this);
}

BOOL SAMP::CEntity::IsStationary() {
	return ((BOOL(__thiscall *)(CEntity *))SAMP_ADDROF(0x9F6D0))(this);
}

BOOL SAMP::CEntity::GetCollisionFlag() {
	((BOOL(__thiscall *)(CEntity *))SAMP_ADDROF(0x9EF50))(this);
}

void SAMP::CEntity::SetCollisionFlag(BOOL bEnable) {
	((void(__thiscall *)(CEntity *, BOOL))SAMP_ADDROF(0x9EF20))(this, bEnable);
}

RwObject *SAMP::CEntity::GetRwObject() {
	return ((::RwObject *(__thiscall *)(CEntity *))SAMP_ADDROF(0x9F350))(this);
}

void SAMP::CEntity::DeleteRwObject() {
	((void(__thiscall *)(CEntity *))SAMP_ADDROF(0x9F4A0))(this);
}

void SAMP::CEntity::UpdateRwFrame() {
	((void(__thiscall *)(CEntity *))SAMP_ADDROF(0x9E570))(this);
}

float SAMP::CEntity::GetDistanceToLocalPlayerNoHeight() {
	return ((float(__thiscall *)(CEntity *))SAMP_ADDROF(0x9EAE0))(this);
}

void SAMP::CEntity::SetCollisionProcessed(BOOL bProcessed) {
	((void(__thiscall *)(CEntity *, BOOL))SAMP_ADDROF(0x9EF70))(this, bProcessed);
}