/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CVehicle.h"

SAMP::CVehicle::CVehicle(int nModel, CVector vPos, float fRotation, BOOL bKeepModelLoaded, BOOL bHasSiren) {
	((void(__thiscall *)(CVehicle *, int, CVector, float, BOOL, BOOL))SAMP_ADDROF(0xB1E70))(this, nModel, vPos, fRotation, bKeepModelLoaded, bHasSiren);
}

void SAMP::CVehicle::ResetPointers() {
	((void(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB0B70))(this);
}

void SAMP::CVehicle::LinkToInterior(int nInterior) {
	((void(__thiscall *)(CVehicle *, int))SAMP_ADDROF(0xB0B40))(this, nInterior);
}

BOOL SAMP::CVehicle::IsOccupied() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB0BE0))(this);
}

void SAMP::CVehicle::SetInvulnerable(BOOL bInv) {
	((void(__thiscall *)(CVehicle *, BOOL))SAMP_ADDROF(0xB0C40))(this, bInv);
}

void SAMP::CVehicle::SetLocked(BOOL bLocked) {
	((void(__thiscall *)(CVehicle *, BOOL))SAMP_ADDROF(0xB0CE0))(this, bLocked);
}

float SAMP::CVehicle::GetHealth() {
	return ((float(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB0D50))(this);
}

void SAMP::CVehicle::SetHealth(float fValue) {
	((void(__thiscall *)(CVehicle *, float))SAMP_ADDROF(0xB0D70))(this, fValue);
}

void SAMP::CVehicle::SetColors(unsigned char nPrimary, unsigned char nSecondary) {
	((void(__thiscall *)(CVehicle *, unsigned char, unsigned char))SAMP_ADDROF(0xB0D90))(this, nPrimary, nSecondary);
}

int SAMP::CVehicle::GetSubtype() {
	return ((int(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB0E40))(this);
}

BOOL SAMP::CVehicle::HasSunk() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB0E60))(this);
}

BOOL SAMP::CVehicle::IsWrecked() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB0E80))(this);
}

BOOL SAMP::CVehicle::DriverIsPlayerPed() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB0EA0))(this);
}

BOOL SAMP::CVehicle::IsTrainPart() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB0F10))(this);
}

void SAMP::CVehicle::ProcessMarkers() {
	((void(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB1190))(this);
}

void SAMP::CVehicle::SetDoorState(BOOL bLocked) {
	((void(__thiscall *)(CVehicle *, BOOL))SAMP_ADDROF(0xB12F0))(this, bLocked);
}

BOOL SAMP::CVehicle::UpdateLastDrivenTime() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB1320))(this);
}

char SAMP::CVehicle::GetWheelDamageStatus() {
	return ((char(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB14E0))(this);
}

void SAMP::CVehicle::UpdateDamageStatus(int nPanelDamage, int nDoorDamage, char nLightDamage) {
	((void(__thiscall *)(CVehicle *, int, int, char))SAMP_ADDROF(0xB1570))(this, nPanelDamage, nDoorDamage, nLightDamage);
}

int SAMP::CVehicle::GetBumperDamageStatus() {
	return ((int(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB1630))(this);
}

int SAMP::CVehicle::GetDoorDamageStatus() {
	return ((int(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB1660))(this);
}

char SAMP::CVehicle::GetLightDamageStatus() {
	return ((char(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB1690))(this);
}

void SAMP::CVehicle::AttachTrailer() {
	((void(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB16C0))(this);
}

void SAMP::CVehicle::DetachTrailer() {
	((void(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB16E0))(this);
}

void SAMP::CVehicle::SetTrailer(CVehicle *pTrailer) {
	((void(__thiscall *)(CVehicle *, CVehicle *))SAMP_ADDROF(0xB1730))(this, pTrailer);
}

SAMP::CVehicle *SAMP::CVehicle::GetTrailer() {
	return ((CVehicle *(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB1740))(this);
}

void SAMP::CVehicle::SetLicensePlateText(const char *szText) {
	((void(__thiscall *)(CVehicle *, const char *))SAMP_ADDROF(0xB1BF0))(this, szText);
}

void SAMP::CVehicle::SetZAngle(float fValue) {
	((void(__thiscall *)(CVehicle *, float))SAMP_ADDROF(0xB1C10))(this, fValue);
}

void SAMP::CVehicle::ConstructLicensePlate() {
	((void(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB1C40))(this);
}

void SAMP::CVehicle::DestructLicensePlate() {
	((void(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB1C90))(this);
}