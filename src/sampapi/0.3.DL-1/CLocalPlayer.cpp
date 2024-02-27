
/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CLocalPlayer.h"

SAMPAPI_BEGIN_V03DL_1

SAMPAPI_VAR int& CLocalPlayer::RefIncarSendrate() {
    return *(int*)GetAddress(0x13C0AC);
}

SAMPAPI_VAR int& CLocalPlayer::RefOnfootSendrate() {
    return *(int*)GetAddress(0x13C0A8);
}

SAMPAPI_VAR int& CLocalPlayer::RefFiringSendrate() {
    return *(int*)GetAddress(0x13C0B0);
}

SAMPAPI_VAR int& CLocalPlayer::RefSendMultiplier() {
    return *(int*)GetAddress(0x13C0B4);
}

CLocalPlayer::CLocalPlayer() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x4AF0))(this);
}

CPed* CLocalPlayer::GetPed() {
    return ((CPed * (__thiscall*)(CLocalPlayer*)) GetAddress(0x2DA0))(this);
}

void CLocalPlayer::ResetData() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x2EC0))(this);
}

void CLocalPlayer::ProcessHead() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x2FD0))(this);
}

void CLocalPlayer::SetSpecialAction(char nId) {
    ((void(__thiscall*)(CLocalPlayer*, char))GetAddress(0x3110))(this, nId);
}

char CLocalPlayer::GetSpecialAction() {
    return ((char(__thiscall*)(CLocalPlayer*))GetAddress(0x3390))(this);
}

void CLocalPlayer::UpdateSurfing() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x34B0))(this);
}

void CLocalPlayer::SetSurfing(CVehicle* pVehicle, BOOL bStuck) {
    ((void(__thiscall*)(CLocalPlayer*, CVehicle*, BOOL))GetAddress(0x3630))(this, pVehicle, bStuck);
}

void CLocalPlayer::ProcessSurfing() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x3650))(this);
}

BOOL CLocalPlayer::NeedsToUpdate(const void* pOld, const void* pNew, unsigned int nLen) {
    return ((BOOL(__thiscall*)(CLocalPlayer*, const void*, const void*, unsigned int))GetAddress(0x3970))(this, pOld, pNew, nLen);
}

int CLocalPlayer::GetIncarSendRate() {
    return ((int(__thiscall*)(CLocalPlayer*))GetAddress(0x39C0))(this);
}

int CLocalPlayer::GetOnfootSendRate() {
    return ((int(__thiscall*)(CLocalPlayer*))GetAddress(0x3A00))(this);
}

int CLocalPlayer::GetUnoccupiedSendRate() {
    return ((int(__thiscall*)(CLocalPlayer*))GetAddress(0x3A40))(this);
}

void CLocalPlayer::SetSpawnInfo(const SpawnInfo* pInfo) {
    ((void(__thiscall*)(CLocalPlayer*, const SpawnInfo*))GetAddress(0x3AF0))(this, pInfo);
}

BOOL CLocalPlayer::Spawn() {
    return ((BOOL(__thiscall*)(CLocalPlayer*))GetAddress(0x3B20))(this);
}

void CLocalPlayer::SetColor(D3DCOLOR color) {
    ((void(__thiscall*)(CLocalPlayer*, D3DCOLOR))GetAddress(0x3DE0))(this, color);
}

D3DCOLOR CLocalPlayer::GetColorAsRGBA() {
    return ((D3DCOLOR(__thiscall*)(CLocalPlayer*))GetAddress(0x3E00))(this);
}

D3DCOLOR CLocalPlayer::GetColorAsARGB() {
    return ((D3DCOLOR(__thiscall*)(CLocalPlayer*))GetAddress(0x3E20))(this);
}

void CLocalPlayer::ProcessOnfootWorldBounds() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x3E40))(this);
}

void CLocalPlayer::ProcessIncarWorldBounds() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x3EA0))(this);
}

void CLocalPlayer::RequestSpawn() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x3F40))(this);
}

void CLocalPlayer::PrepareForClassSelection() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x3F60))(this);
}

void CLocalPlayer::PrepareForClassSelection_Outcome(BOOL bOutcome) {
    ((void(__thiscall*)(CLocalPlayer*, BOOL))GetAddress(0x3FB0))(this, bOutcome);
}

void CLocalPlayer::EnableSpectating(BOOL bEnable) {
    ((void(__thiscall*)(CLocalPlayer*, BOOL))GetAddress(0x4080))(this, bEnable);
}

void CLocalPlayer::SpectateForVehicle(ID nId) {
    ((void(__thiscall*)(CLocalPlayer*, ID))GetAddress(0x40F0))(this, nId);
}

void CLocalPlayer::SpectateForPlayer(ID nId) {
    ((void(__thiscall*)(CLocalPlayer*, ID))GetAddress(0x4140))(this, nId);
}

BOOL CLocalPlayer::NeedsToSendOnfootData(short controllerState, short sLeftStickX, short sLeftStickY) {
    return ((BOOL(__thiscall*)(CLocalPlayer*, short, short, short))GetAddress(0x41C0))(this, controllerState, sLeftStickX, sLeftStickY);
}

BOOL CLocalPlayer::NeedsToSendIncarData(short controllerState, short sLeftStickX, short sLeftStickY) {
    return ((BOOL(__thiscall*)(CLocalPlayer*, short, short, short))GetAddress(0x41F0))(this, controllerState, sLeftStickX, sLeftStickY);
}

bool CLocalPlayer::DefineCameraTarget(CameraTarget* pInfo) {
    return ((bool(__thiscall*)(CLocalPlayer*, CameraTarget*))GetAddress(0x4300))(this, pInfo);
}

void CLocalPlayer::UpdateCameraTarget() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x45C0))(this);
}

void CLocalPlayer::DrawCameraTargetLabel() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x4710))(this);
}

void CLocalPlayer::SendUnoccupiedData(ID nVehicle, char arg4) {
    ((void(__thiscall*)(CLocalPlayer*, ID, char))GetAddress(0x4BD0))(this, nVehicle, arg4);
}

void CLocalPlayer::SendOnfootData() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x4DB0))(this);
}

void CLocalPlayer::SendAimData() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x5090))(this);
}

void CLocalPlayer::SendTrailerData(ID nTrailer) {
    ((void(__thiscall*)(CLocalPlayer*, ID))GetAddress(0x5240))(this, nTrailer);
}

void CLocalPlayer::SendPassengerData() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x5400))(this);
}

void CLocalPlayer::WastedNotification() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x5660))(this);
}

void CLocalPlayer::RequestClass(int nId) {
    ((void(__thiscall*)(CLocalPlayer*, int))GetAddress(0x5720))(this, nId);
}

void CLocalPlayer::ChangeInterior(char nId) {
    ((void(__thiscall*)(CLocalPlayer*, char))GetAddress(0x57C0))(this, nId);
}

void CLocalPlayer::Chat(const char* szText) {
    ((void(__thiscall*)(CLocalPlayer*, const char*))GetAddress(0x5860))(this, szText);
}

void CLocalPlayer::EnterVehicle(int nVehicle, BOOL bPassenger) {
    ((void(__thiscall*)(CLocalPlayer*, int, BOOL))GetAddress(0x5920))(this, nVehicle, bPassenger);
}

void CLocalPlayer::ExitVehicle(int nVehicle) {
    ((void(__thiscall*)(CLocalPlayer*, int))GetAddress(0x5A40))(this, nVehicle);
}

void CLocalPlayer::SendStats() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x5B50))(this);
}

void CLocalPlayer::UpdateVehicleDamage(ID nVehicle) {
    ((void(__thiscall*)(CLocalPlayer*, ID))GetAddress(0x5C20))(this, nVehicle);
}

void CLocalPlayer::NextClass() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x5E30))(this);
}

void CLocalPlayer::PrevClass() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x5EC0))(this);
}

void CLocalPlayer::ProcessClassSelection() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x5F40))(this);
}

void CLocalPlayer::UpdateWeapons() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x5F40))(this);
}

void CLocalPlayer::ProcessSpectating() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x6360))(this);
}

void CLocalPlayer::SendTakeDamage(int nId, float fDamage, int nWeapon, int nBodyPart) {
    ((void(__thiscall*)(CLocalPlayer*, int, float, int, int))GetAddress(0x66B0))(this, nId, fDamage, nWeapon, nBodyPart);
}

void CLocalPlayer::SendGiveDamage(int nId, float fDamage, int nWeapon, int nBodyPart) {
    ((void(__thiscall*)(CLocalPlayer*, int, float, int, int))GetAddress(0x67C0))(this, nId, fDamage, nWeapon, nBodyPart);
}

bool CLocalPlayer::ProcessUnoccupiedSync(ID nVehicle, CVehicle* pVehicle) {
    return ((bool(__thiscall*)(CLocalPlayer*, ID, CVehicle*))GetAddress(0x6C10))(this, nVehicle, pVehicle);
}

void CLocalPlayer::EnterVehicleAsPassenger() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x6DE0))(this);
}

void CLocalPlayer::SendIncarData() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x6E80))(this);
}

void CLocalPlayer::Process() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x72D0))(this);
}

SAMPAPI_END
