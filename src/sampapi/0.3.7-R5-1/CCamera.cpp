/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CCamera.h"

SAMPAPI_BEGIN_V037R5_1

CCamera::CCamera() {
    ((void(__thiscall*)(CCamera*))GetAddress(0x9FF60))(this);
}

CCamera::~CCamera() {
    ((void(__thiscall*)(CCamera*))GetAddress(0x9FF70))(this);
}

void CCamera::Fade(BOOL bIn) {
    ((void(__thiscall*)(CCamera*, BOOL))GetAddress(0x9D440))(this, bIn);
}

void CCamera::GetMatrix(CMatrix* pMatrix) {
    ((void(__thiscall*)(CCamera*, CMatrix*))GetAddress(0x9D460))(this, pMatrix);
}

void CCamera::SetMatrix(CMatrix matrix) {
    ((void(__thiscall*)(CCamera*, CMatrix))GetAddress(0x9D4E0))(this, matrix);
}

void CCamera::TakeControl(::CEntity* pTarget, short nModeToGoTo, short nTypeOfSwitch) {
    ((void(__thiscall*)(CCamera*, ::CEntity*, short, short))GetAddress(0x9D570))(this, pTarget, nModeToGoTo, nTypeOfSwitch);
}

void CCamera::SetMoveVector(CVector* pCamera, CVector* pPosition, int nTime, bool bSmoothTransmition) {
    ((void(__thiscall*)(CCamera*, CVector*, CVector*, int, bool))GetAddress(0x9D590))(this, pCamera, pPosition, nTime, bSmoothTransmition);
}

void CCamera::SetTrackVector(CVector* pPointAt, CVector* pTransverseTo, int nTime, bool bSmooth) {
    ((void(__thiscall*)(CCamera*, CVector*, CVector*, int, bool))GetAddress(0x9D600))(this, pPointAt, pTransverseTo, nTime, bSmooth);
}

void CCamera::Attach(CEntity* pOwner) {
    ((void(__thiscall*)(CCamera*, CEntity*))GetAddress(0x9D660))(this, pOwner);
}

void CCamera::SetToOwner() {
    ((void(__thiscall*)(CCamera*))GetAddress(0x9D6B0))(this);
}

float CCamera::GetDistanceToPoint(CVector* pPoint) {
    return ((float(__thiscall*)(CCamera*, CVector*))GetAddress(0x9D700))(this, pPoint);
}

void CCamera::Restore() {
    ((void(__thiscall*)(CCamera*))GetAddress(0x9D740))(this);
}

void CCamera::Set(CVector position, CVector rotation) {
    ((void(__thiscall*)(CCamera*, CVector, CVector))GetAddress(0x9D780))(this, position, rotation);
}

void CCamera::PointAt(CVector point, int nSwitchStyle) {
    ((void(__thiscall*)(CCamera*, CVector, int))GetAddress(0x9D7E0))(this, point, nSwitchStyle);
}

void CCamera::Detach() {
    ((void(__thiscall*)(CCamera*))GetAddress(0x9D830))(this);
}

SAMPAPI_END
