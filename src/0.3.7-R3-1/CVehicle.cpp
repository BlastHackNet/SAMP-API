/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CVehicle.h"

SAMP::CVehicle::CVehicle(int nModel, CVector position, float fRotation, BOOL bKeepModelLoaded, BOOL bHasSiren) {
	((void(__thiscall *)(CVehicle *, int, CVector, float, BOOL, BOOL))SAMP_ADDROF(0xB7B30))(this, nModel, position, fRotation, bKeepModelLoaded, bHasSiren);
}

void SAMP::CVehicle::ChangeInterior(int nId) {
	((void(__thiscall *)(CVehicle *, int))SAMP_ADDROF(0xB6800))(this, nId);
}

void SAMP::CVehicle::ResetPointers() {
	((void(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB6830))(this);
}

BOOL SAMP::CVehicle::HasDriver() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB6850))(this);
}

BOOL SAMP::CVehicle::IsOccupied() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB68A0))(this);
}

void SAMP::CVehicle::SetInvulnerable(BOOL bInv) {
	((void(__thiscall *)(CVehicle *, BOOL))SAMP_ADDROF(0xB6900))(this, bInv);
}

void SAMP::CVehicle::SetLocked(BOOL bLock) {
	((void(__thiscall *)(CVehicle *, BOOL))SAMP_ADDROF(0xB69A0))(this, bLock);
}

float SAMP::CVehicle::GetHealth() {
	return ((float(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB6A10))(this);
}

void SAMP::CVehicle::SetHealth(float fValue) {
	((void(__thiscall *)(CVehicle *, float))SAMP_ADDROF(0xB6A30))(this, fValue);
}

void SAMP::CVehicle::SetColor(NUMBER nPrimary, NUMBER nSecondary) {
	((void(__thiscall *)(CVehicle *, NUMBER, NUMBER))SAMP_ADDROF(0xB6A50))(this, nPrimary, nSecondary);
}

void SAMP::CVehicle::UpdateColor() {
	((void(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB6AA0))(this);
}

int SAMP::CVehicle::GetSubtype() {
	return ((int(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB6B00))(this);
}

BOOL SAMP::CVehicle::IsSunk() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB6B20))(this);
}

BOOL SAMP::CVehicle::IsWrecked() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB6B40))(this);
}

BOOL SAMP::CVehicle::DriverIsPlayerPed() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB6B60))(this);
}

BOOL SAMP::CVehicle::HasPlayerPed() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB6B90))(this);
}

BOOL SAMP::CVehicle::IsTrainPart() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB6BD0))(this);
}

BOOL SAMP::CVehicle::HasTurret() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB6C10))(this);
}

void SAMP::CVehicle::EnableSiren(bool bEnable) {
	((void(__thiscall *)(CVehicle *, bool))SAMP_ADDROF(0xB6CB0))(this, bEnable);
}

BOOL SAMP::CVehicle::SirenEnabled() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB6CD0))(this);
}

void SAMP::CVehicle::SetLandingGearState(BOOL bHide) {
	((void(__thiscall *)(CVehicle *, BOOL))SAMP_ADDROF(0xB6D10))(this, bHide);
}

BOOL SAMP::CVehicle::GetLandingGearState() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB6DA0))(this);
}

void SAMP::CVehicle::SetHydraThrusters(int nDirection) {
	((void(__thiscall *)(CVehicle *, int))SAMP_ADDROF(0xB6E10))(this, nDirection);
}

int SAMP::CVehicle::GetHydraThrusters() {
	return ((int(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB6E30))(this);
}

void SAMP::CVehicle::ProcessMarkers() {
	((void(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB6E50))(this);
}

void SAMP::CVehicle::Lock(BOOL bLock) {
	((void(__thiscall *)(CVehicle *, BOOL))SAMP_ADDROF(0xB6FB0))(this, bLock);
}

BOOL SAMP::CVehicle::UpdateLastDrivenTime() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB6FE0))(this);
}

float SAMP::CVehicle::GetTrainSpeed() {
	return ((float(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB7050))(this);
}

void SAMP::CVehicle::SetTrainSpeed(float fValue) {
	((void(__thiscall *)(CVehicle *, float))SAMP_ADDROF(0xB7070))(this, fValue);
}

void SAMP::CVehicle::SetTires(char nState) {
	((void(__thiscall *)(CVehicle *, char))SAMP_ADDROF(0xB70B0))(this, nState);
}

char SAMP::CVehicle::GetTires() {
	return ((char(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB71A0))(this);
}

void SAMP::CVehicle::UpdateDamage(int nPanels, int nDoors, char nLights) {
	((void(__thiscall *)(CVehicle *, int, int, char))SAMP_ADDROF(0xB7230))(this, nPanels, nDoors, nLights);
}

int SAMP::CVehicle::GetPanelsDamage() {
	return ((int(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB72F0))(this);
}

int SAMP::CVehicle::GetDoorsDamage() {
	return ((int(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB7320))(this);
}

char SAMP::CVehicle::GetLightsDamage() {
	return ((char(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB7350))(this);
}

void SAMP::CVehicle::AttachTrailer() {
	((void(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB7380))(this);
}

void SAMP::CVehicle::DetachTrailer() {
	((void(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB73A0))(this);
}

void SAMP::CVehicle::SetTrailer(CVehicle *pVehicle) {
	((void(__thiscall *)(CVehicle *, CVehicle *))SAMP_ADDROF(0xB73F0))(this, pVehicle);
}

SAMP::CVehicle *SAMP::CVehicle::GetTrailer() {
	return ((CVehicle *(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB7400))(this);
}

SAMP::CVehicle *SAMP::CVehicle::GetTractor() {
	return ((CVehicle *(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB7460))(this);
}

BOOL SAMP::CVehicle::IsTrailer() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB74E0))(this);
}

BOOL SAMP::CVehicle::IsTowtruck() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB7540))(this);
}

BOOL SAMP::CVehicle::IsRC() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB7570))(this);
}

void SAMP::CVehicle::EnableLights(bool bEnable) {
	((void(__thiscall *)(CVehicle *, bool))SAMP_ADDROF(0xB75C0))(this, bEnable);
}

void SAMP::CVehicle::RemovePassengers() {
	((void(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB7650))(this);
}

BOOL SAMP::CVehicle::AddComponent(unsigned short nId) {
	return ((BOOL(__thiscall *)(CVehicle *, unsigned short))SAMP_ADDROF(0xB7730))(this, nId);
}

BOOL SAMP::CVehicle::RemoveComponent(unsigned short nId) {
	return ((BOOL(__thiscall *)(CVehicle *, unsigned short))SAMP_ADDROF(0xB7810))(this, nId);
}

void SAMP::CVehicle::SetPaintjob(NUMBER nId) {
	((void(__thiscall *)(CVehicle *, NUMBER))SAMP_ADDROF(0xB7850))(this, nId);
}

BOOL SAMP::CVehicle::DoesExist() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB78A0))(this);
}

void SAMP::CVehicle::SetLicensePlateText(const char *szText) {
	((void(__thiscall *)(CVehicle *, const char *))SAMP_ADDROF(0xB78B0))(this, szText);
}

void SAMP::CVehicle::SetRotation(float fValue) {
	((void(__thiscall *)(CVehicle *, float))SAMP_ADDROF(0xB78D0))(this, fValue);
}

void SAMP::CVehicle::ConstructLicensePlate() {
	((void(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB7900))(this);
}

void SAMP::CVehicle::ShutdownLicensePlate() {
	((void(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB7950))(this);
}

BOOL SAMP::CVehicle::HasSiren() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB7A90))(this);
}

char SAMP::CVehicle::GetMaxPassengers() {
	return ((char(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB7AA0))(this);
}

void SAMP::CVehicle::SetWindowOpenFlag(NUMBER nDoorId) {
	((void(__thiscall *)(CVehicle *, NUMBER))SAMP_ADDROF(0xB7AD0))(this, nDoorId);
}

void SAMP::CVehicle::ClearWindowOpenFlag(NUMBER nDoorId) {
	((void(__thiscall *)(CVehicle *, NUMBER))SAMP_ADDROF(0xB7B00))(this, nDoorId);
}

void SAMP::CVehicle::EnableEngine(BOOL bEnable) {
	((void(__thiscall *)(CVehicle *, BOOL))SAMP_ADDROF(0xB81D0))(this, bEnable);
}

