/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CVehicle.h"

SAMPAPI_BEGIN_V037R1

CVehicle::CVehicle(int nModel, CVector position, float fRotation, BOOL bKeepModelLoaded, BOOL bHasSiren) {
    ((void(__thiscall*)(CVehicle*, int, CVector, float, BOOL, BOOL))GetAddress(0xB1E70))(this, nModel, position, fRotation, bKeepModelLoaded, bHasSiren);
}

CVehicle::~CVehicle() {
}

void CVehicle::ResetPointers() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB0B70))(this);
}

void CVehicle::ChangeInterior(int nInterior) {
    ((void(__thiscall*)(CVehicle*, int))GetAddress(0xB0B40))(this, nInterior);
}

BOOL CVehicle::IsOccupied() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB0BE0))(this);
}

void CVehicle::SetInvulnerable(BOOL bInv) {
    ((void(__thiscall*)(CVehicle*, BOOL))GetAddress(0xB0C40))(this, bInv);
}

void CVehicle::SetLocked(BOOL bLocked) {
    ((void(__thiscall*)(CVehicle*, BOOL))GetAddress(0xB0CE0))(this, bLocked);
}

float CVehicle::GetHealth() {
    return ((float(__thiscall*)(CVehicle*))GetAddress(0xB0D50))(this);
}

void CVehicle::SetHealth(float fValue) {
    ((void(__thiscall*)(CVehicle*, float))GetAddress(0xB0D70))(this, fValue);
}

void CVehicle::SetColor(NUMBER nPrimary, NUMBER nSecondary) {
    ((void(__thiscall*)(CVehicle*, NUMBER, NUMBER))GetAddress(0xB0D90))(this, nPrimary, nSecondary);
}

int CVehicle::GetSubtype() {
    return ((int(__thiscall*)(CVehicle*))GetAddress(0xB0E40))(this);
}

BOOL CVehicle::IsSunk() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB0E60))(this);
}

BOOL CVehicle::IsWrecked() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB0E80))(this);
}

BOOL CVehicle::DriverIsPlayerPed() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB0EA0))(this);
}

BOOL CVehicle::IsTrainPart() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB0F10))(this);
}

void CVehicle::ProcessMarkers() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB1190))(this);
}

void CVehicle::Lock(BOOL bLock) {
    ((void(__thiscall*)(CVehicle*, BOOL))GetAddress(0xB12F0))(this, bLock);
}

BOOL CVehicle::UpdateLastDrivenTime() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB1320))(this);
}

char CVehicle::GetTires() {
    return ((char(__thiscall*)(CVehicle*))GetAddress(0xB14E0))(this);
}

void CVehicle::UpdateDamage(int nPanels, int nDoors, char nLights) {
    ((void(__thiscall*)(CVehicle*, int, int, char))GetAddress(0xB1570))(this, nPanels, nDoors, nLights);
}

int CVehicle::GetPanelsDamage() {
    return ((int(__thiscall*)(CVehicle*))GetAddress(0xB1630))(this);
}

int CVehicle::GetDoorsDamage() {
    return ((int(__thiscall*)(CVehicle*))GetAddress(0xB1660))(this);
}

char CVehicle::GetLightsDamage() {
    return ((char(__thiscall*)(CVehicle*))GetAddress(0xB1690))(this);
}

void CVehicle::AttachTrailer() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB16C0))(this);
}

void CVehicle::DetachTrailer() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB16E0))(this);
}

void CVehicle::SetTrailer(CVehicle* pTrailer) {
    ((void(__thiscall*)(CVehicle*, CVehicle*))GetAddress(0xB1730))(this, pTrailer);
}

CVehicle* CVehicle::GetTrailer() {
    return ((CVehicle * (__thiscall*)(CVehicle*)) GetAddress(0xB1740))(this);
}

void CVehicle::SetLicensePlateText(const char* szText) {
    ((void(__thiscall*)(CVehicle*, const char*))GetAddress(0xB1BF0))(this, szText);
}

void CVehicle::SetRotation(float fValue) {
    ((void(__thiscall*)(CVehicle*, float))GetAddress(0xB1C10))(this, fValue);
}

void CVehicle::ConstructLicensePlate() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB1C40))(this);
}

void CVehicle::ShutdownLicensePlate() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB1C90))(this);
}

BOOL CVehicle::HasDriver() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB0B90))(this);
}

void CVehicle::UpdateColor() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB0DE0))(this);
}

BOOL CVehicle::HasPlayerPed() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB0ED0))(this);
}

BOOL CVehicle::HasTurret() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB0F50))(this);
}

void CVehicle::EnableSiren(bool bEnable) {
    ((void(__thiscall*)(CVehicle*, bool))GetAddress(0xB0FF0))(this, bEnable);
}

BOOL CVehicle::SirenEnabled() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB1010))(this);
}

void CVehicle::SetLandingGearState(BOOL bHide) {
    ((void(__thiscall*)(CVehicle*, BOOL))GetAddress(0xB1050))(this, bHide);
}

BOOL CVehicle::GetLandingGearState() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB10E0))(this);
}

void CVehicle::SetHydraThrusters(int nDirection) {
    ((void(__thiscall*)(CVehicle*, int))GetAddress(0xB1150))(this, nDirection);
}

int CVehicle::GetHydraThrusters() {
    return ((int(__thiscall*)(CVehicle*))GetAddress(0xB1170))(this);
}

float CVehicle::GetTrainSpeed() {
    return ((float(__thiscall*)(CVehicle*))GetAddress(0xB1390))(this);
}

void CVehicle::SetTrainSpeed(float fValue) {
    ((void(__thiscall*)(CVehicle*, float))GetAddress(0xB13B0))(this, fValue);
}

void CVehicle::SetTires(char nState) {
    ((void(__thiscall*)(CVehicle*, char))GetAddress(0xB13F0))(this, nState);
}

CVehicle* CVehicle::GetTractor() {
    return ((CVehicle * (__thiscall*)(CVehicle*)) GetAddress(0xB17A0))(this);
}

BOOL CVehicle::IsTrailer() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB1820))(this);
}

BOOL CVehicle::IsTowtruck() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB1880))(this);
}

BOOL CVehicle::IsRC() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB18B0))(this);
}

void CVehicle::EnableLights(bool bEnable) {
    ((void(__thiscall*)(CVehicle*, bool))GetAddress(0xB1900))(this, bEnable);
}

void CVehicle::RemovePassengers() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB1990))(this);
}

BOOL CVehicle::AddComponent(unsigned short nId) {
    return ((BOOL(__thiscall*)(CVehicle*, unsigned short))GetAddress(0xB1A70))(this, nId);
}

BOOL CVehicle::RemoveComponent(unsigned short nId) {
    return ((BOOL(__thiscall*)(CVehicle*, unsigned short))GetAddress(0xB1B50))(this, nId);
}

void CVehicle::SetPaintjob(NUMBER nId) {
    ((void(__thiscall*)(CVehicle*, NUMBER))GetAddress(0xB1B90))(this, nId);
}

BOOL CVehicle::DoesExist() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB1BE0))(this);
}

BOOL CVehicle::HasSiren() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB1DD0))(this);
}

char CVehicle::GetMaxPassengers() {
    return ((char(__thiscall*)(CVehicle*))GetAddress(0xB1DE0))(this);
}

void CVehicle::SetWindowOpenFlag(NUMBER nDoorId) {
    ((void(__thiscall*)(CVehicle*, NUMBER))GetAddress(0xB1E10))(this, nDoorId);
}

void CVehicle::ClearWindowOpenFlag(NUMBER nDoorId) {
    ((void(__thiscall*)(CVehicle*, NUMBER))GetAddress(0xB1E40))(this, nDoorId);
}

void CVehicle::EnableEngine(BOOL bEnable) {
    ((void(__thiscall*)(CVehicle*, BOOL))GetAddress(0xB2510))(this, bEnable);
}

SAMPAPI_END
