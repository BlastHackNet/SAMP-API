/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CActor.h"

SAMP::CActor::CActor(int nModel, CVector position, float fRotation) {
	((void(__thiscall *)(CActor *, int, CVector, float))SAMP_ADDROF(0x9BBA0))(this, nModel, position, fRotation);
}

void SAMP::CActor::Destroy() {
	((void(__thiscall *)(CActor *))SAMP_ADDROF(0x9BCF0))(this);
}

void SAMP::CActor::PerformAnimation(const char *szAnim, const char *szIFP, float fFramedelta, int bLockA, int bLockX, int bLockY, int bLockF, int nTime) {
	((void(__thiscall *)(CActor *, const char *, const char *, float, int, int, int, int, int))SAMP_ADDROF(0x9BD50))(this, szAnim, szIFP, fFramedelta, bLockA, bLockX, bLockY, bLockF, nTime);
}

void SAMP::CActor::SetRotation(float fAngle) {
	((void(__thiscall *)(CActor *, float))SAMP_ADDROF(0x9BE60))(this, fAngle);
}

float SAMP::CActor::GetHealth() {
	return ((float(__thiscall *)(CActor *))SAMP_ADDROF(0x9BEA0))(this);
}

void SAMP::CActor::SetHealth(float fValue) {
	((void(__thiscall *)(CActor *, float))SAMP_ADDROF(0x9BEC0))(this, fValue);
}

void SAMP::CActor::SetInvulnerable(bool bEnable) {
	((void(__thiscall *)(CActor *, bool))SAMP_ADDROF(0x9BFF0))(this, bEnable);
}