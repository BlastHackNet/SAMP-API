/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CObject.h"

SAMP::CObject::CObject(int nModel, CVector vPosition, CVector vRotation, float fDrawDistance, int arg5) {
	((void(__thiscall *)(CObject *, int, CVector, CVector, float, int))SAMP_ADDROF(0xA3AB0))(this, nModel, vPosition, vRotation, fDrawDistance, arg5);
}

float SAMP::CObject::DistanceRemaining(CMatrix *pFrom) {
	return ((float(__thiscall *)(CObject *, CMatrix *))SAMP_ADDROF(0xA2960))(this, pFrom);
}

void SAMP::CObject::Stop() {
	((void(__thiscall *)(CObject *))SAMP_ADDROF(0xA29D0))(this);
}

void SAMP::CObject::SetRotation(CVector *pRotation) {
	((void(__thiscall *)(CObject *, CVector *))SAMP_ADDROF(0xA2A40))(this, pRotation);
}

void SAMP::CObject::Attach(CVehicle *pVehicle) {
	((void(__thiscall *)(CObject *, CVehicle *pVehicle))SAMP_ADDROF(0xA2BE0))(this, pVehicle);
}

void SAMP::CObject::Attach(CObject *pObject) {
	((void(__thiscall *)(CObject *, CObject *))SAMP_ADDROF(0xA2C60))(this, pObject);
}

void SAMP::CObject::Attach(::CEntity *pEntity, CVector *pOffset, CVector *pRotation) {
	((void(__thiscall *)(CObject *, ::CEntity *, CVector *, CVector *))SAMP_ADDROF(0xA2CE0))(this, pEntity, pOffset, pRotation);
}

void SAMP::CObject::Rotate(CVector vRotation) {
	((void(__thiscall *)(CObject *, CVector))SAMP_ADDROF(0xA2D60))(this, vRotation);
}

void SAMP::CObject::Process(float fTimeElapsed) {
	((void(__thiscall *)(CObject *, float))SAMP_ADDROF(0xA3F70))(this, fTimeElapsed);
}