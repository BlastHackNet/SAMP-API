/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CCamera.h"

SAMP::CCamera::CCamera() {
	((void(__thiscall *)(CCamera *))SAMP_ADDROF(0x9B5A0))(this);
}

void SAMP::CCamera::Detach() {
	((void(__thiscall *)(CCamera *))SAMP_ADDROF(0x990E0))(this);
}

void SAMP::CCamera::SetFixedPosition(CVector vPosition, CVector vRotation) {
	((void(__thiscall *)(CCamera *, CVector, CVector))SAMP_ADDROF(0x99120))(this, vPosition, vRotation);
}

void SAMP::CCamera::PointAt(CVector vPosition, unsigned char nSwitchType) {
	((void(__thiscall *)(CCamera *, CVector, unsigned char))SAMP_ADDROF(0x99180))(this, vPosition, nSwitchType);
}

void SAMP::CCamera::Restore() {
	((void(__thiscall *)(CCamera *))SAMP_ADDROF(0x991D0))(this);
}

void SAMP::CCamera::SetVectorTrack(CVector *vPoint, CVector *vTransverseTo, unsigned int nTime, bool bSmooth) {
	((void(__thiscall *)(CCamera *, CVector *, CVector *, unsigned int, bool))SAMP_ADDROF(0x98FA0))(this, vPoint, vTransverseTo, nTime, bSmooth);
}

void SAMP::CCamera::SetVectorMove(CVector *vCamera, CVector *vDestination, unsigned int nTime, bool bSmooth) {
	((void(__thiscall *)(CCamera *, CVector *, CVector *, unsigned int, bool))SAMP_ADDROF(0x98F30))(this, vCamera, vDestination, nTime, bSmooth);
}

void SAMP::CCamera::SetToOwner() {
	((void(__thiscall *)(CCamera *))SAMP_ADDROF(0x99050))(this);
}

void SAMP::CCamera::Attach(CEntity *pEntity) {
	((void(__thiscall *)(CCamera *, CEntity *))SAMP_ADDROF(0x99000))(this, pEntity);
}

void SAMP::CCamera::GetMatrix(CMatrix *pMatrix) {
	((void(__thiscall *)(CCamera *, CMatrix *))SAMP_ADDROF(0x98E00))(this, pMatrix);
}

float SAMP::CCamera::DistToCamera(CVector *vPosition) {
	return ((float(__thiscall *)(CCamera *, CVector *))SAMP_ADDROF(0x990A0))(this, vPosition);
}

void SAMP::CCamera::Fade(bool bIn) {
	((void(__thiscall *)(CCamera *, bool))SAMP_ADDROF(0x98DE0))(this, bIn);
}