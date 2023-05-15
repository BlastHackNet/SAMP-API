/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CVehicle.h"

SAMPAPI_BEGIN_V037R5_1

CVehicle::CVehicle(int nModel, CVector position, float fRotation, BOOL bKeepModelLoaded, BOOL bHasSiren) {
    ((void(__thiscall*)(CVehicle*, int, CVector, float, BOOL, BOOL))GetAddress(0xB83D0))(this, nModel, position, fRotation, bKeepModelLoaded, bHasSiren);
}

CVehicle::~CVehicle() {
}

void CVehicle::ChangeInterior(int nId) {
    ((void(__thiscall*)(CVehicle*, int))GetAddress(0xB7090))(this, nId);
}

void CVehicle::ResetPointers() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB70C0))(this);
}

BOOL CVehicle::HasDriver() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB70E0))(this);
}

BOOL CVehicle::IsOccupied() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB7130))(this);
}

void CVehicle::SetInvulnerable(BOOL bInv) {
    ((void(__thiscall*)(CVehicle*, BOOL))GetAddress(0xB7190))(this, bInv);
}

void CVehicle::SetLocked(BOOL bLock) {
    ((void(__thiscall*)(CVehicle*, BOOL))GetAddress(0xB7230))(this, bLock);
}

float CVehicle::GetHealth() {
    return ((float(__thiscall*)(CVehicle*))GetAddress(0xB72A0))(this);
}

void CVehicle::SetHealth(float fValue) {
    ((void(__thiscall*)(CVehicle*, float))GetAddress(0xB72C0))(this, fValue);
}

void CVehicle::SetColor(NUMBER nPrimary, NUMBER nSecondary) {
    ((void(__thiscall*)(CVehicle*, NUMBER, NUMBER))GetAddress(0xB72E0))(this, nPrimary, nSecondary);
}

void CVehicle::UpdateColor() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB7330))(this);
}

int CVehicle::GetSubtype() {
    return ((int(__thiscall*)(CVehicle*))GetAddress(0xB7390))(this);
}

BOOL CVehicle::IsSunk() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB73B0))(this);
}

BOOL CVehicle::IsWrecked() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB73D0))(this);
}

BOOL CVehicle::DriverIsPlayerPed() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB73F0))(this);
}

BOOL CVehicle::HasPlayerPed() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB7420))(this);
}

BOOL CVehicle::IsTrainPart() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB7460))(this);
}

BOOL CVehicle::HasTurret() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB74A0))(this);
}

void CVehicle::EnableSiren(bool bEnable) {
    ((void(__thiscall*)(CVehicle*, bool))GetAddress(0xB7540))(this, bEnable);
}

BOOL CVehicle::SirenEnabled() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB7560))(this);
}

void CVehicle::SetLandingGearState(BOOL bHide) {
    ((void(__thiscall*)(CVehicle*, BOOL))GetAddress(0xB75A0))(this, bHide);
}

BOOL CVehicle::GetLandingGearState() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB7630))(this);
}

void CVehicle::SetHydraThrusters(int nDirection) {
    ((void(__thiscall*)(CVehicle*, int))GetAddress(0xB76A0))(this, nDirection);
}

int CVehicle::GetHydraThrusters() {
    return ((int(__thiscall*)(CVehicle*))GetAddress(0xB76C0))(this);
}

void CVehicle::ProcessMarkers() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB76E0))(this);
}

void CVehicle::Lock(BOOL bLock) {
    ((void(__thiscall*)(CVehicle*, BOOL))GetAddress(0xB7840))(this, bLock);
}

BOOL CVehicle::UpdateLastDrivenTime() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB7870))(this);
}

float CVehicle::GetTrainSpeed() {
    return ((float(__thiscall*)(CVehicle*))GetAddress(0xB78E0))(this);
}

void CVehicle::SetTrainSpeed(float fValue) {
    ((void(__thiscall*)(CVehicle*, float))GetAddress(0xB7900))(this, fValue);
}

void CVehicle::SetTires(char nState) {
    ((void(__thiscall*)(CVehicle*, char))GetAddress(0xB7940))(this, nState);
}

char CVehicle::GetTires() {
    return ((char(__thiscall*)(CVehicle*))GetAddress(0xB7A30))(this);
}

void CVehicle::UpdateDamage(int nPanels, int nDoors, char nLights) {
    ((void(__thiscall*)(CVehicle*, int, int, char))GetAddress(0xB7AC0))(this, nPanels, nDoors, nLights);
}

int CVehicle::GetPanelsDamage() {
    return ((int(__thiscall*)(CVehicle*))GetAddress(0xB7B80))(this);
}

int CVehicle::GetDoorsDamage() {
    return ((int(__thiscall*)(CVehicle*))GetAddress(0xB7BB0))(this);
}

char CVehicle::GetLightsDamage() {
    return ((char(__thiscall*)(CVehicle*))GetAddress(0xB7BE0))(this);
}

void CVehicle::AttachTrailer() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB7C10))(this);
}

void CVehicle::DetachTrailer() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB7C30))(this);
}

void CVehicle::SetTrailer(CVehicle* pVehicle) {
    ((void(__thiscall*)(CVehicle*, CVehicle*))GetAddress(0xB7C80))(this, pVehicle);
}

CVehicle* CVehicle::GetTrailer() {
    return ((CVehicle * (__thiscall*)(CVehicle*)) GetAddress(0xB7C90))(this);
}

CVehicle* CVehicle::GetTractor() {
    return ((CVehicle * (__thiscall*)(CVehicle*)) GetAddress(0xB7CF0))(this);
}

BOOL CVehicle::IsTrailer() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB7D70))(this);
}

BOOL CVehicle::IsTowtruck() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB7DD0))(this);
}

BOOL CVehicle::IsRC() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB7E00))(this);
}

void CVehicle::EnableLights(bool bEnable) {
    ((void(__thiscall*)(CVehicle*, bool))GetAddress(0xB7E50))(this, bEnable);
}

void CVehicle::RemovePassengers() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB7EE0))(this);
}

BOOL CVehicle::AddComponent(unsigned short nId) {
    return ((BOOL(__thiscall*)(CVehicle*, unsigned short))GetAddress(0xB7FC0))(this, nId);
}

BOOL CVehicle::RemoveComponent(unsigned short nId) {
    return ((BOOL(__thiscall*)(CVehicle*, unsigned short))GetAddress(0xB80B0))(this, nId);
}

void CVehicle::SetPaintjob(NUMBER nId) {
    ((void(__thiscall*)(CVehicle*, NUMBER))GetAddress(0xB80F0))(this, nId);
}

BOOL CVehicle::DoesExist() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB8140))(this);
}

void CVehicle::SetLicensePlateText(const char* szText) {
    ((void(__thiscall*)(CVehicle*, const char*))GetAddress(0xB8150))(this, szText);
}

void CVehicle::SetRotation(float fValue) {
    ((void(__thiscall*)(CVehicle*, float))GetAddress(0xB8170))(this, fValue);
}

void CVehicle::ConstructLicensePlate() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB81A0))(this);
}

void CVehicle::ShutdownLicensePlate() {
    ((void(__thiscall*)(CVehicle*))GetAddress(0xB81F0))(this);
}

BOOL CVehicle::HasSiren() {
    return ((BOOL(__thiscall*)(CVehicle*))GetAddress(0xB8330))(this);
}

char CVehicle::GetMaxPassengers() {
    return ((char(__thiscall*)(CVehicle*))GetAddress(0xB8340))(this);
}

void CVehicle::SetWindowOpenFlag(NUMBER nDoorId) {
    ((void(__thiscall*)(CVehicle*, NUMBER))GetAddress(0xB8370))(this, nDoorId);
}

void CVehicle::ClearWindowOpenFlag(NUMBER nDoorId) {
    ((void(__thiscall*)(CVehicle*, NUMBER))GetAddress(0xB83A0))(this, nDoorId);
}

void CVehicle::EnableEngine(BOOL bEnable) {
    ((void(__thiscall*)(CVehicle*, BOOL))GetAddress(0xB8A70))(this, bEnable);
}

SAMPAPI_END
