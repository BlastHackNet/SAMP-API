/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CVehicle.h"

SAMPAPI_BEGIN_V03DL_1

CVehicle::CVehicle(int nModel, CVector position, float fRotation, BOOL bKeepModelLoaded, BOOL bHasSiren) {
    ((void(__thiscall*)(CVehicle*, int, CVector, float, BOOL, BOOL))GetAddress(0xB7F00))(this, nModel, position, fRotation, bKeepModelLoaded, bHasSiren);
}

CVehicle::~CVehicle() {
}

void CVehicle::ChangeInterior(int nId) {
    ((void(__thiscall*)(CVehicle*, int))GetAddress(0xB6BD0))(this, nId);
}

void CVehicle::ResetPointers() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB6C00))(this);
}

BOOL CVehicle::HasDriver() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB6C20))(this);
}

BOOL CVehicle::IsOccupied() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB6C70))(this);
}

void CVehicle::SetInvulnerable(BOOL bInv) {
    ((void(__thiscall*)(CVehicle*, BOOL))GetAddress(0xB6CD0))(this, bInv);
}

void CVehicle::SetLocked(BOOL bLock) {
    ((void(__thiscall*)(CVehicle*, BOOL))GetAddress(0xB6D70))(this, bLock);
}

float CVehicle::GetHealth() {
    return ((float(__thiscall*)(CVehicle*))GetAddress(0xB6DE0))(this);
}

void CVehicle::SetHealth(float fValue) {
    ((void(__thiscall*)(CVehicle*, float))GetAddress(0xB6E00))(this, fValue);
}

void CVehicle::SetColor(NUMBER nPrimary, NUMBER nSecondary) {
    ((void(__thiscall*)(CVehicle*, NUMBER, NUMBER))GetAddress(0xB6E20))(this, nPrimary, nSecondary);
}

void CVehicle::UpdateColor() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB6E70))(this);
}

int CVehicle::GetSubtype() {
    return ((int(__thiscall*)(CVehicle*))GetAddress(0xB6ED0))(this);
}

BOOL CVehicle::IsSunk() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB6EF0))(this);
}

BOOL CVehicle::IsWrecked() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB6F10))(this);
}

BOOL CVehicle::DriverIsPlayerPed() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB6F30))(this);
}

BOOL CVehicle::HasPlayerPed() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB6F60))(this);
}

BOOL CVehicle::IsTrainPart() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB6FA0))(this);
}

BOOL CVehicle::HasTurret() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB6FE0))(this);
}

void CVehicle::EnableSiren(bool bEnable) {
    ((void(__thiscall*)(CVehicle*, bool))GetAddress(0xB7080))(this, bEnable);
}

BOOL CVehicle::SirenEnabled() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB70A0))(this);
}

void CVehicle::SetLandingGearState(BOOL bHide) {
    ((void(__thiscall*)(CVehicle*, BOOL))GetAddress(0xB70E0))(this, bHide);
}

BOOL CVehicle::GetLandingGearState() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB7170))(this);
}

void CVehicle::SetHydraThrusters(int nDirection) {
    ((void(__thiscall*)(CVehicle*, int))GetAddress(0xB71E0))(this, nDirection);
}

int CVehicle::GetHydraThrusters() {
    return ((int(__thiscall*)(CVehicle*))GetAddress(0xB7200))(this);
}

void CVehicle::ProcessMarkers() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB7220))(this);
}

void CVehicle::Lock(BOOL bLock) {
    ((void(__thiscall*)(CVehicle*, BOOL))GetAddress(0xB7380))(this, bLock);
}

BOOL CVehicle::UpdateLastDrivenTime() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB73B0))(this);
}

float CVehicle::GetTrainSpeed() {
    return ((float(__thiscall*)(CVehicle*))GetAddress(0xB7420))(this);
}

void CVehicle::SetTrainSpeed(float fValue) {
    ((void(__thiscall*)(CVehicle*, float))GetAddress(0xB7440))(this, fValue);
}

void CVehicle::SetTires(char nState) {
    ((void(__thiscall*)(CVehicle*, char))GetAddress(0xB7480))(this, nState);
}

char CVehicle::GetTires() {
    return ((char(__thiscall*)(CVehicle*))GetAddress(0xB7570))(this);
}

void CVehicle::UpdateDamage(int nPanels, int nDoors, char nLights) {
    ((void(__thiscall*)(CVehicle*, int, int, char))GetAddress(0xB7600))(this, nPanels, nDoors, nLights);
}

int CVehicle::GetPanelsDamage() {
    return ((int(__thiscall*)(CVehicle*))GetAddress(0xB76C0))(this);
}

int CVehicle::GetDoorsDamage() {
    return ((int(__thiscall*)(CVehicle*))GetAddress(0xB76F0))(this);
}

char CVehicle::GetLightsDamage() {
    return ((char(__thiscall*)(CVehicle*))GetAddress(0xB7720))(this);
}

void CVehicle::AttachTrailer() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB7750))(this);
}

void CVehicle::DetachTrailer() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB7770))(this);
}

void CVehicle::SetTrailer(CVehicle* pVehicle) {
    ((void(__thiscall*)(CVehicle*, CVehicle*))GetAddress(0xB77C0))(this, pVehicle);
}

CVehicle* CVehicle::GetTrailer() {
    return ((CVehicle * (__thiscall*)(CVehicle*)) GetAddress(0xB77D0))(this);
}

CVehicle* CVehicle::GetTractor() {
    return ((CVehicle * (__thiscall*)(CVehicle*)) GetAddress(0xB7830))(this);
}

BOOL CVehicle::IsTrailer() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB78B0))(this);
}

BOOL CVehicle::IsTowtruck() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB7910))(this);
}

BOOL CVehicle::IsRC() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB7940))(this);
}

void CVehicle::EnableLights(bool bEnable) {
    ((void(__thiscall*)(CVehicle*, bool))GetAddress(0xB7990))(this, bEnable);
}

void CVehicle::RemovePassengers() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB7A20))(this);
}

BOOL CVehicle::AddComponent(unsigned short nId) {
    return ((BOOL(__thiscall*)(CVehicle*, unsigned short))GetAddress(0xB7B00))(this, nId);
}

BOOL CVehicle::RemoveComponent(unsigned short nId) {
    return ((BOOL(__thiscall*)(CVehicle*, unsigned short))GetAddress(0xB7BE0))(this, nId);
}

void CVehicle::SetPaintjob(NUMBER nId) {
    ((void(__thiscall*)(CVehicle*, NUMBER))GetAddress(0xB7C20))(this, nId);
}

BOOL CVehicle::DoesExist() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB7C70))(this);
}

void CVehicle::SetLicensePlateText(const char* szText) {
    ((void(__thiscall*)(CVehicle*, const char*))GetAddress(0xB7C80))(this, szText);
}

void CVehicle::SetRotation(float fValue) {
    ((void(__thiscall*)(CVehicle*, float))GetAddress(0xB7CA0))(this, fValue);
}

void CVehicle::ConstructLicensePlate() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB7CD0))(this);
}

void CVehicle::ShutdownLicensePlate() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB7D20))(this);
}

BOOL CVehicle::HasSiren() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB7E60))(this);
}

char CVehicle::GetMaxPassengers() {
    return ((char(__thiscall*)(CVehicle*))GetAddress(0xB7E70))(this);
}

void CVehicle::SetWindowOpenFlag(NUMBER nDoorId) {
    ((void(__thiscall*)(CVehicle*, NUMBER))GetAddress(0xB7EA0))(this, nDoorId);
}

void CVehicle::ClearWindowOpenFlag(NUMBER nDoorId) {
    ((void(__thiscall*)(CVehicle*, NUMBER))GetAddress(0xB7ED0))(this, nDoorId);
}

void CVehicle::EnableEngine(BOOL bEnable) {
    ((void(__thiscall*)(CVehicle*, BOOL))GetAddress(0xB85A0))(this, bEnable);
}

SAMPAPI_END
