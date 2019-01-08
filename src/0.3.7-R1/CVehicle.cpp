/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CVehicle.h"

SAMP::CVehicle::CVehicle(int nModel, CVector position, float fRotation, BOOL bKeepModelLoaded, BOOL bHasSiren) {
	((void(__thiscall *)(CVehicle *, int, CVector, float, BOOL, BOOL))SAMP_ADDROF(0xB1E70))(this, nModel, position, fRotation, bKeepModelLoaded, bHasSiren);
}

void SAMP::CVehicle::ResetPointers() {
	((void(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB0B70))(this);
}

void SAMP::CVehicle::ChangeInterior(int nInterior) {
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

void SAMP::CVehicle::SetColor(NUMBER nPrimary, NUMBER nSecondary) {
	((void(__thiscall *)(CVehicle *, NUMBER, NUMBER))SAMP_ADDROF(0xB0D90))(this, nPrimary, nSecondary);
}

int SAMP::CVehicle::GetSubtype() {
	return ((int(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB0E40))(this);
}

BOOL SAMP::CVehicle::IsSunk() {
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

void SAMP::CVehicle::Lock(BOOL bLock) {
	((void(__thiscall *)(CVehicle *, BOOL))SAMP_ADDROF(0xB12F0))(this, bLock);
}

BOOL SAMP::CVehicle::UpdateLastDrivenTime() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB1320))(this);
}

char SAMP::CVehicle::GetTires() {
	return ((char(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB14E0))(this);
}

void SAMP::CVehicle::UpdateDamage(int nPanels, int nDoors, char nLights) {
	((void(__thiscall *)(CVehicle *, int, int, char))SAMP_ADDROF(0xB1570))(this, nPanels, nDoors, nLights);
}

int SAMP::CVehicle::GetPanelsDamage() {
	return ((int(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB1630))(this);
}

int SAMP::CVehicle::GetDoorsDamage() {
	return ((int(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB1660))(this);
}

char SAMP::CVehicle::GetLightsDamage() {
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

void SAMP::CVehicle::SetRotation(float fValue) {
	((void(__thiscall *)(CVehicle *, float))SAMP_ADDROF(0xB1C10))(this, fValue);
}

void SAMP::CVehicle::ConstructLicensePlate() {
	((void(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB1C40))(this);
}

void SAMP::CVehicle::ShutdownLicensePlate() {
	((void(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB1C90))(this);
}

BOOL SAMP::CVehicle::HasDriver() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB0B90))(this);
}

void SAMP::CVehicle::UpdateColor() {
	((void(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB0DE0))(this);
}

BOOL SAMP::CVehicle::HasPlayerPed() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB0ED0))(this);
}

BOOL SAMP::CVehicle::HasTurret() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB0F50))(this);
}

void SAMP::CVehicle::EnableSiren(bool bEnable) {
	((void(__thiscall *)(CVehicle *, bool))SAMP_ADDROF(0xB0FF0))(this, bEnable);
}

BOOL SAMP::CVehicle::SirenEnabled() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB1010))(this);
}

void SAMP::CVehicle::SetLandingGearState(BOOL bHide) {
	((void(__thiscall *)(CVehicle *, BOOL))SAMP_ADDROF(0xB1050))(this, bHide);
}

BOOL SAMP::CVehicle::GetLandingGearState() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB10E0))(this);
}

void SAMP::CVehicle::SetHydraThrusters(int nDirection) {
	((void(__thiscall *)(CVehicle *, int))SAMP_ADDROF(0xB1150))(this, nDirection);
}

int SAMP::CVehicle::GetHydraThrusters() {
	return ((int(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB1170))(this);
}

float SAMP::CVehicle::GetTrainSpeed() {
	return ((float(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB1390))(this);
}

void SAMP::CVehicle::SetTrainSpeed(float fValue) {
	((void(__thiscall *)(CVehicle *, float))SAMP_ADDROF(0xB13B0))(this, fValue);
}

void SAMP::CVehicle::SetTires(char nState) {
	((void(__thiscall *)(CVehicle *, char))SAMP_ADDROF(0xB13F0))(this, nState);
}

SAMP::CVehicle *SAMP::CVehicle::GetTractor() {
	return ((CVehicle *(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB17A0))(this);
}

BOOL SAMP::CVehicle::IsTrailer() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB1820))(this);
}

BOOL SAMP::CVehicle::IsTowtruck() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB1880))(this);
}

BOOL SAMP::CVehicle::IsRC() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB18B0))(this);
}

void SAMP::CVehicle::EnableLights(bool bEnable) {
	((void(__thiscall *)(CVehicle *, bool))SAMP_ADDROF(0xB1900))(this, bEnable);
}

void SAMP::CVehicle::RemovePassengers() {
	((void(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB1990))(this);
}

BOOL SAMP::CVehicle::AddComponent(unsigned short nId) {
	return ((BOOL(__thiscall *)(CVehicle *, unsigned short))SAMP_ADDROF(0xB1A70))(this, nId);
}

BOOL SAMP::CVehicle::RemoveComponent(unsigned short nId) {
	return ((BOOL(__thiscall *)(CVehicle *, unsigned short))SAMP_ADDROF(0xB1B50))(this, nId);
}

void SAMP::CVehicle::SetPaintjob(NUMBER nId) {
	((void(__thiscall *)(CVehicle *, NUMBER))SAMP_ADDROF(0xB1B90))(this, nId);
}

BOOL SAMP::CVehicle::DoesExist() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB1BE0))(this);
}

BOOL SAMP::CVehicle::HasSiren() {
	return ((BOOL(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB1DD0))(this);
}

char SAMP::CVehicle::GetMaxPassengers() {
	return ((char(__thiscall *)(CVehicle *))SAMP_ADDROF(0xB1DE0))(this);
}

void SAMP::CVehicle::SetWindowOpenFlag(NUMBER nDoorId) {
	((void(__thiscall *)(CVehicle *, NUMBER))SAMP_ADDROF(0xB1E10))(this, nDoorId);
}

void SAMP::CVehicle::ClearWindowOpenFlag(NUMBER nDoorId) {
	((void(__thiscall *)(CVehicle *, NUMBER))SAMP_ADDROF(0xB1E40))(this, nDoorId);
}

void SAMP::CVehicle::EnableEngine(BOOL bEnable) {
	((void(__thiscall *)(CVehicle *, BOOL))SAMP_ADDROF(0xB2510))(this, bEnable);
}