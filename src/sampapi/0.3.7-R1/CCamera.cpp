/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CCamera.h"

SAMPAPI_BEGIN_V037R1

CCamera::CCamera() {
    ((void(__thiscall*)(CCamera*))GetAddress(0x9B5A0))(this);
}

void CCamera::Detach() {
    ((void(__thiscall*)(CCamera*))GetAddress(0x990E0))(this);
}

void CCamera::Set(CVector position, CVector rotation) {
    ((void(__thiscall*)(CCamera*, CVector, CVector))GetAddress(0x99120))(this, position, rotation);
}

void CCamera::PointAt(CVector position, int nSwitchStyle) {
    ((void(__thiscall*)(CCamera*, CVector, int))GetAddress(0x99180))(this, position, nSwitchStyle);
}

void CCamera::Restore() {
    ((void(__thiscall*)(CCamera*))GetAddress(0x991D0))(this);
}

void CCamera::SetTrackVector(CVector* pPointAt, CVector* pTransverseTo, int nTime, bool bSmooth) {
    ((void(__thiscall*)(CCamera*, CVector*, CVector*, unsigned int, bool))GetAddress(0x98FA0))(this, pPointAt, pTransverseTo, nTime, bSmooth);
}

void CCamera::SetMoveVector(CVector* pCamera, CVector* pPosition, int nTime, bool bSmoothTransmition) {
    ((void(__thiscall*)(CCamera*, CVector*, CVector*, unsigned int, bool))GetAddress(0x98F30))(this, pCamera, pPosition, nTime, bSmoothTransmition);
}

void CCamera::SetToOwner() {
    ((void(__thiscall*)(CCamera*))GetAddress(0x99050))(this);
}

void CCamera::Attach(CEntity* pEntity) {
    ((void(__thiscall*)(CCamera*, CEntity*))GetAddress(0x99000))(this, pEntity);
}

void CCamera::GetMatrix(CMatrix* pMatrix) {
    ((void(__thiscall*)(CCamera*, CMatrix*))GetAddress(0x98E00))(this, pMatrix);
}

float CCamera::GetDistanceToPoint(CVector* pPosition) {
    return ((float(__thiscall*)(CCamera*, CVector*))GetAddress(0x990A0))(this, pPosition);
}

void CCamera::Fade(BOOL bIn) {
    ((void(__thiscall*)(CCamera*, bool))GetAddress(0x98DE0))(this, bIn);
}

void CCamera::SetMatrix(CMatrix matrix) {
    ((void(__thiscall*)(CCamera*, CMatrix))GetAddress(0x98E80))(this, matrix);
}

void CCamera::TakeControl(::CEntity* pTarget, short nModeToGoTo, short nTypeOfSwitch) {
    ((void(__thiscall*)(CCamera*, ::CEntity*, short, short))GetAddress(0x98F10))(this, pTarget, nModeToGoTo, nTypeOfSwitch);
}

SAMPAPI_END
