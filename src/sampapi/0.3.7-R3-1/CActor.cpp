/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CActor.h"

SAMPAPI_BEGIN_V037R3_1

CActor::CActor(int nModel, CVector position, float fRotation) {
    ((void(__thiscall*)(CActor*, int, CVector, float))GetAddress(0x9BBA0))(this, nModel, position, fRotation);
}

CActor::~CActor() {
}

void CActor::Destroy() {
    ((void(__thiscall*)(CActor*))GetAddress(0x9BCF0))(this);
}

void CActor::PerformAnimation(const char* szAnim, const char* szIFP, float fFramedelta, int bLockA, int bLockX, int bLockY, int bLockF, int nTime) {
    ((void(__thiscall*)(CActor*, const char*, const char*, float, int, int, int, int, int))GetAddress(0x9BD50))(this, szAnim, szIFP, fFramedelta, bLockA, bLockX, bLockY, bLockF, nTime);
}

void CActor::SetRotation(float fAngle) {
    ((void(__thiscall*)(CActor*, float))GetAddress(0x9BE60))(this, fAngle);
}

float CActor::GetHealth() {
    return ((float(__thiscall*)(CActor*))GetAddress(0x9BEA0))(this);
}

void CActor::SetHealth(float fValue) {
    ((void(__thiscall*)(CActor*, float))GetAddress(0x9BEC0))(this, fValue);
}

void CActor::SetInvulnerable(bool bEnable) {
    ((void(__thiscall*)(CActor*, bool))GetAddress(0x9BFF0))(this, bEnable);
}

SAMPAPI_END
