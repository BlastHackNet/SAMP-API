/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CVehicle.h"

SAMPAPI_BEGIN_V037R3_1

CVehicle::CVehicle(int nModel, CVector position, float fRotation, BOOL bKeepModelLoaded, BOOL bHasSiren) {
    ((void(__thiscall*)(CVehicle*, int, CVector, float, BOOL, BOOL))GetAddress(0xB7B30))(this, nModel, position, fRotation, bKeepModelLoaded, bHasSiren);
}

CVehicle::~CVehicle() {
}

void CVehicle::ChangeInterior(int nId) {
    ((void(__thiscall*)(CVehicle*, int))GetAddress(0xB6800))(this, nId);
}

void CVehicle::ResetPointers() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB6830))(this);
}

BOOL CVehicle::HasDriver() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB6850))(this);
}

BOOL CVehicle::IsOccupied() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB68A0))(this);
}

void CVehicle::SetInvulnerable(BOOL bInv) {
    ((void(__thiscall*)(CVehicle*, BOOL))GetAddress(0xB6900))(this, bInv);
}

void CVehicle::SetLocked(BOOL bLock) {
    ((void(__thiscall*)(CVehicle*, BOOL))GetAddress(0xB69A0))(this, bLock);
}

float CVehicle::GetHealth() {
    return ((float(__thiscall*)(CVehicle*))GetAddress(0xB6A10))(this);
}

void CVehicle::SetHealth(float fValue) {
    ((void(__thiscall*)(CVehicle*, float))GetAddress(0xB6A30))(this, fValue);
}

void CVehicle::SetColor(NUMBER nPrimary, NUMBER nSecondary) {
    ((void(__thiscall*)(CVehicle*, NUMBER, NUMBER))GetAddress(0xB6A50))(this, nPrimary, nSecondary);
}

void CVehicle::UpdateColor() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB6AA0))(this);
}

int CVehicle::GetSubtype() {
    return ((int(__thiscall*)(CVehicle*))GetAddress(0xB6B00))(this);
}

BOOL CVehicle::IsSunk() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB6B20))(this);
}

BOOL CVehicle::IsWrecked() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB6B40))(this);
}

BOOL CVehicle::DriverIsPlayerPed() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB6B60))(this);
}

BOOL CVehicle::HasPlayerPed() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB6B90))(this);
}

BOOL CVehicle::IsTrainPart() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB6BD0))(this);
}

BOOL CVehicle::HasTurret() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB6C10))(this);
}

void CVehicle::EnableSiren(bool bEnable) {
    ((void(__thiscall*)(CVehicle*, bool))GetAddress(0xB6CB0))(this, bEnable);
}

BOOL CVehicle::SirenEnabled() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB6CD0))(this);
}

void CVehicle::SetLandingGearState(BOOL bHide) {
    ((void(__thiscall*)(CVehicle*, BOOL))GetAddress(0xB6D10))(this, bHide);
}

BOOL CVehicle::GetLandingGearState() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB6DA0))(this);
}

void CVehicle::SetHydraThrusters(int nDirection) {
    ((void(__thiscall*)(CVehicle*, int))GetAddress(0xB6E10))(this, nDirection);
}

int CVehicle::GetHydraThrusters() {
    return ((int(__thiscall*)(CVehicle*))GetAddress(0xB6E30))(this);
}

void CVehicle::ProcessMarkers() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB6E50))(this);
}

void CVehicle::Lock(BOOL bLock) {
    ((void(__thiscall*)(CVehicle*, BOOL))GetAddress(0xB6FB0))(this, bLock);
}

BOOL CVehicle::UpdateLastDrivenTime() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB6FE0))(this);
}

float CVehicle::GetTrainSpeed() {
    return ((float(__thiscall*)(CVehicle*))GetAddress(0xB7050))(this);
}

void CVehicle::SetTrainSpeed(float fValue) {
    ((void(__thiscall*)(CVehicle*, float))GetAddress(0xB7070))(this, fValue);
}

void CVehicle::SetTires(char nState) {
    ((void(__thiscall*)(CVehicle*, char))GetAddress(0xB70B0))(this, nState);
}

char CVehicle::GetTires() {
    return ((char(__thiscall*)(CVehicle*))GetAddress(0xB71A0))(this);
}

void CVehicle::UpdateDamage(int nPanels, int nDoors, char nLights) {
    ((void(__thiscall*)(CVehicle*, int, int, char))GetAddress(0xB7230))(this, nPanels, nDoors, nLights);
}

int CVehicle::GetPanelsDamage() {
    return ((int(__thiscall*)(CVehicle*))GetAddress(0xB72F0))(this);
}

int CVehicle::GetDoorsDamage() {
    return ((int(__thiscall*)(CVehicle*))GetAddress(0xB7320))(this);
}

char CVehicle::GetLightsDamage() {
    return ((char(__thiscall*)(CVehicle*))GetAddress(0xB7350))(this);
}

void CVehicle::AttachTrailer() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB7380))(this);
}

void CVehicle::DetachTrailer() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB73A0))(this);
}

void CVehicle::SetTrailer(CVehicle* pVehicle) {
    ((void(__thiscall*)(CVehicle*, CVehicle*))GetAddress(0xB73F0))(this, pVehicle);
}

CVehicle* CVehicle::GetTrailer() {
    return ((CVehicle * (__thiscall*)(CVehicle*)) GetAddress(0xB7400))(this);
}

CVehicle* CVehicle::GetTractor() {
    return ((CVehicle * (__thiscall*)(CVehicle*)) GetAddress(0xB7460))(this);
}

BOOL CVehicle::IsTrailer() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB74E0))(this);
}

BOOL CVehicle::IsTowtruck() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB7540))(this);
}

BOOL CVehicle::IsRC() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB7570))(this);
}

void CVehicle::EnableLights(bool bEnable) {
    ((void(__thiscall*)(CVehicle*, bool))GetAddress(0xB75C0))(this, bEnable);
}

void CVehicle::RemovePassengers() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB7650))(this);
}

BOOL CVehicle::AddComponent(unsigned short nId) {
    return ((BOOL(__thiscall*)(CVehicle*, unsigned short))GetAddress(0xB7730))(this, nId);
}

BOOL CVehicle::RemoveComponent(unsigned short nId) {
    return ((BOOL(__thiscall*)(CVehicle*, unsigned short))GetAddress(0xB7810))(this, nId);
}

void CVehicle::SetPaintjob(NUMBER nId) {
    ((void(__thiscall*)(CVehicle*, NUMBER))GetAddress(0xB7850))(this, nId);
}

BOOL CVehicle::DoesExist() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB78A0))(this);
}

void CVehicle::SetLicensePlateText(const char* szText) {
    ((void(__thiscall*)(CVehicle*, const char*))GetAddress(0xB78B0))(this, szText);
}

void CVehicle::SetRotation(float fValue) {
    ((void(__thiscall*)(CVehicle*, float))GetAddress(0xB78D0))(this, fValue);
}

void CVehicle::ConstructLicensePlate() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB7900))(this);
}

void CVehicle::ShutdownLicensePlate() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB7950))(this);
}

BOOL CVehicle::HasSiren() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB7A90))(this);
}

char CVehicle::GetMaxPassengers() {
    return ((char(__thiscall*)(CVehicle*))GetAddress(0xB7AA0))(this);
}

void CVehicle::SetWindowOpenFlag(NUMBER nDoorId) {
    ((void(__thiscall*)(CVehicle*, NUMBER))GetAddress(0xB7AD0))(this, nDoorId);
}

void CVehicle::ClearWindowOpenFlag(NUMBER nDoorId) {
    ((void(__thiscall*)(CVehicle*, NUMBER))GetAddress(0xB7B00))(this, nDoorId);
}

void CVehicle::EnableEngine(BOOL bEnable) {
    ((void(__thiscall*)(CVehicle*, BOOL))GetAddress(0xB81D0))(this, bEnable);
}

SAMPAPI_END
