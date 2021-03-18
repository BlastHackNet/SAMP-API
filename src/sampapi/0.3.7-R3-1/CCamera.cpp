/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CCamera.h"

SAMPAPI_BEGIN_V037R3_1

CCamera::CCamera() {
    ((void(__thiscall*)(CCamera*))GetAddress(0x9F850))(this);
}

CCamera::~CCamera() {
    ((void(__thiscall*)(CCamera*))GetAddress(0x9F860))(this);
}

void CCamera::Fade(BOOL bIn) {
    ((void(__thiscall*)(CCamera*, BOOL))GetAddress(0x9CD30))(this, bIn);
}

void CCamera::GetMatrix(CMatrix* pMatrix) {
    ((void(__thiscall*)(CCamera*, CMatrix*))GetAddress(0x9CD50))(this, pMatrix);
}

void CCamera::SetMatrix(CMatrix matrix) {
    ((void(__thiscall*)(CCamera*, CMatrix))GetAddress(0x9CDD0))(this, matrix);
}

void CCamera::TakeControl(::CEntity* pTarget, short nModeToGoTo, short nTypeOfSwitch) {
    ((void(__thiscall*)(CCamera*, ::CEntity*, short, short))GetAddress(0x9CE60))(this, pTarget, nModeToGoTo, nTypeOfSwitch);
}

void CCamera::SetMoveVector(CVector* pCamera, CVector* pPosition, int nTime, bool bSmoothTransmition) {
    ((void(__thiscall*)(CCamera*, CVector*, CVector*, int, bool))GetAddress(0x9CE80))(this, pCamera, pPosition, nTime, bSmoothTransmition);
}

void CCamera::SetTrackVector(CVector* pPointAt, CVector* pTransverseTo, int nTime, bool bSmooth) {
    ((void(__thiscall*)(CCamera*, CVector*, CVector*, int, bool))GetAddress(0x9CEF0))(this, pPointAt, pTransverseTo, nTime, bSmooth);
}

void CCamera::Attach(CEntity* pOwner) {
    ((void(__thiscall*)(CCamera*, CEntity*))GetAddress(0x9CF50))(this, pOwner);
}

void CCamera::SetToOwner() {
    ((void(__thiscall*)(CCamera*))GetAddress(0x9CFA0))(this);
}

float CCamera::GetDistanceToPoint(CVector* pPoint) {
    return ((float(__thiscall*)(CCamera*, CVector*))GetAddress(0x9CFF0))(this, pPoint);
}

void CCamera::Restore() {
    ((void(__thiscall*)(CCamera*))GetAddress(0x9D030))(this);
}

void CCamera::Set(CVector position, CVector rotation) {
    ((void(__thiscall*)(CCamera*, CVector, CVector))GetAddress(0x9D070))(this, position, rotation);
}

void CCamera::PointAt(CVector point, int nSwitchStyle) {
    ((void(__thiscall*)(CCamera*, CVector, int))GetAddress(0x9D0D0))(this, point, nSwitchStyle);
}

void CCamera::Detach() {
    ((void(__thiscall*)(CCamera*))GetAddress(0x9D120))(this);
}

SAMPAPI_END
