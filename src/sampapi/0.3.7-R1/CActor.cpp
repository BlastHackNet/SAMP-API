/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CActor.h"

SAMPAPI_BEGIN_V037R1

CActor::CActor(int nSkin, CVector vPos, float fRotation) {
    ((void(__thiscall*)(CActor*, int, CVector, float))GetAddress(0x97C60))(this, nSkin, vPos, fRotation);
}

CActor::~CActor() {
}

void CActor::Destroy() {
    ((void(__thiscall*)(CActor*))GetAddress(0x97DA0))(this);
}

void CActor::PerformAnimation(const char* szAnim, const char* szIFP, float fFramedelta, int bLockA, int bLockX, int bLockY, int bLockF, int nTime) {
    ((void(__thiscall*)(CActor*, const char*, const char*, float, int, int, int, int, int))GetAddress(0x97E00))(this, szAnim, szIFP, fFramedelta, bLockA, bLockX, bLockY, bLockF, nTime);
}

void CActor::SetRotation(float fValue) {
    ((void(__thiscall*)(CActor*, float))GetAddress(0x97F10))(this, fValue);
}

void CActor::SetHealth(float fValue) {
    ((void(__thiscall*)(CActor*, float))GetAddress(0x97F70))(this, fValue);
}

float CActor::GetHealth() {
    return ((float(__thiscall*)(CActor*))GetAddress(0x97F50))(this);
}

void CActor::SetInvulnerable(bool bInv) {
    ((void(__thiscall*)(CActor*, bool))GetAddress(0x980A0))(this, bInv);
}

void CActor::SetArmour(float fValue) {
    ((void(__thiscall*)(CActor*, float))GetAddress(0x97FD0))(this, fValue);
}

float CActor::GetArmour() {
    return ((float(__thiscall*)(CActor*))GetAddress(0x97FB0))(this);
}

void CActor::SetState(int nValue) {
    ((void(__thiscall*)(CActor*, int))GetAddress(0x98000))(this, nValue);
}

int CActor::GetState() {
    return ((int(__thiscall*)(CActor*))GetAddress(0x97FF0))(this);
}

BOOL CActor::IsDead() {
    return ((BOOL(__thiscall*)(CActor*))GetAddress(0x98020))(this);
}

void CActor::SetStatus(int nValue) {
    ((void(__thiscall*)(CActor*, int))GetAddress(0x98060))(this, nValue);
}

int CActor::GetStatus() {
    return ((int(__thiscall*)(CActor*))GetAddress(0x98050))(this);
}

SAMPAPI_END
