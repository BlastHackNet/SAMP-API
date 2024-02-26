/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CActor.h"

SAMPAPI_BEGIN_V03DL_1

CActor::CActor(int nModel, CVector position, float fRotation) {
    ((void(__thiscall*)(CActor*, int, CVector, float))GetAddress(0x9BD30))(this, nModel, position, fRotation);
}

CActor::~CActor() {
}

void CActor::Destroy() {
    ((void(__thiscall*)(CActor*))GetAddress(0x9BE80))(this);
}

void CActor::PerformAnimation(const char* szAnim, const char* szIFP, float fFramedelta, int bLockA, int bLockX, int bLockY, int bLockF, int nTime) {
    ((void(__thiscall*)(CActor*, const char*, const char*, float, int, int, int, int, int))GetAddress(0x9BEE0))(this, szAnim, szIFP, fFramedelta, bLockA, bLockX, bLockY, bLockF, nTime);
}

void CActor::SetRotation(float fAngle) {
    ((void(__thiscall*)(CActor*, float))GetAddress(0x9BFF0))(this, fAngle);
}

float CActor::GetHealth() {
    return ((float(__thiscall*)(CActor*))GetAddress(0x9C030))(this);
}

void CActor::SetHealth(float fValue) {
    ((void(__thiscall*)(CActor*, float))GetAddress(0x9C050))(this, fValue);
}

void CActor::SetInvulnerable(bool bEnable) {
    ((void(__thiscall*)(CActor*, bool))GetAddress(0x9C180))(this, bEnable);
}

SAMPAPI_END
