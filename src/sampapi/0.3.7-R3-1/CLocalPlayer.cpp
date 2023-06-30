/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CLocalPlayer.h"

SAMPAPI_BEGIN_V037R3_1

SAMPAPI_VAR int& CLocalPlayer::RefIncarSendrate() {
    return *(int*)GetAddress(0xFE0AC);
}

SAMPAPI_VAR int& CLocalPlayer::RefOnfootSendrate() {
    return *(int*)GetAddress(0xFE0A8);
}

SAMPAPI_VAR int& CLocalPlayer::RefFiringSendrate() {
    return *(int*)GetAddress(0xFE0B0);
}

SAMPAPI_VAR int& CLocalPlayer::RefSendMultiplier() {
    return *(int*)GetAddress(0xFE0B4);
}

CLocalPlayer::CLocalPlayer() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x4A80))(this);
}

CPed* CLocalPlayer::GetPed() {
    return ((CPed * (__thiscall*)(CLocalPlayer*)) GetAddress(0x2D50))(this);
}

void CLocalPlayer::ResetData() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x2E70))(this);
}

void CLocalPlayer::ProcessHead() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x2F80))(this);
}

void CLocalPlayer::SetSpecialAction(char nId) {
    ((void(__thiscall*)(CLocalPlayer*, char))GetAddress(0x30C0))(this, nId);
}

char CLocalPlayer::GetSpecialAction() {
    return ((char(__thiscall*)(CLocalPlayer*))GetAddress(0x3340))(this);
}

void CLocalPlayer::UpdateSurfing() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x3460))(this);
}

void CLocalPlayer::SetSurfing(CVehicle* pVehicle, BOOL bStuck) {
    ((void(__thiscall*)(CLocalPlayer*, CVehicle*, BOOL))GetAddress(0x35E0))(this, pVehicle, bStuck);
}

void CLocalPlayer::ProcessSurfing() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x3600))(this);
}

BOOL CLocalPlayer::NeedsToUpdate(const void* pOld, const void* pNew, unsigned int nLen) {
    return ((BOOL(__thiscall*)(CLocalPlayer*, const void*, const void*, unsigned int))GetAddress(0x3920))(this, pOld, pNew, nLen);
}

int CLocalPlayer::GetIncarSendRate() {
    return ((int(__thiscall*)(CLocalPlayer*))GetAddress(0x3970))(this);
}

int CLocalPlayer::GetOnfootSendRate() {
    return ((int(__thiscall*)(CLocalPlayer*))GetAddress(0x39B0))(this);
}

int CLocalPlayer::GetUnoccupiedSendRate() {
    return ((int(__thiscall*)(CLocalPlayer*))GetAddress(0x39F0))(this);
}

void CLocalPlayer::SetSpawnInfo(const SpawnInfo* pInfo) {
    ((void(__thiscall*)(CLocalPlayer*, const SpawnInfo*))GetAddress(0x3AA0))(this, pInfo);
}

BOOL CLocalPlayer::Spawn() {
    return ((BOOL(__thiscall*)(CLocalPlayer*))GetAddress(0x3AD0))(this);
}

void CLocalPlayer::SetColor(D3DCOLOR color) {
    ((void(__thiscall*)(CLocalPlayer*, D3DCOLOR))GetAddress(0x3D50))(this, color);
}

D3DCOLOR CLocalPlayer::GetColorAsRGBA() {
    return ((D3DCOLOR(__thiscall*)(CLocalPlayer*))GetAddress(0x3D80))(this);
}

D3DCOLOR CLocalPlayer::GetColorAsARGB() {
    return ((D3DCOLOR(__thiscall*)(CLocalPlayer*))GetAddress(0x3DA0))(this);
}

void CLocalPlayer::ProcessOnfootWorldBounds() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x3DD0))(this);
}

void CLocalPlayer::ProcessIncarWorldBounds() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x3E30))(this);
}

void CLocalPlayer::RequestSpawn() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x3ED0))(this);
}

void CLocalPlayer::PrepareForClassSelection() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x3EF0))(this);
}

void CLocalPlayer::PrepareForClassSelection_Outcome(BOOL bOutcome) {
    ((void(__thiscall*)(CLocalPlayer*, BOOL))GetAddress(0x3F40))(this, bOutcome);
}

void CLocalPlayer::EnableSpectating(BOOL bEnable) {
    ((void(__thiscall*)(CLocalPlayer*, BOOL))GetAddress(0x4010))(this, bEnable);
}

void CLocalPlayer::SpectateForVehicle(ID nId) {
    ((void(__thiscall*)(CLocalPlayer*, ID))GetAddress(0x4080))(this, nId);
}

void CLocalPlayer::SpectateForPlayer(ID nId) {
    ((void(__thiscall*)(CLocalPlayer*, ID))GetAddress(0x40D0))(this, nId);
}

BOOL CLocalPlayer::NeedsToSendOnfootData(short controllerState, short sLeftStickX, short sLeftStickY) {
    return ((BOOL(__thiscall*)(CLocalPlayer*, short, short, short))GetAddress(0x4150))(this, controllerState, sLeftStickX, sLeftStickY);
}

BOOL CLocalPlayer::NeedsToSendIncarData(short controllerState, short sLeftStickX, short sLeftStickY) {
    return ((BOOL(__thiscall*)(CLocalPlayer*, short, short, short))GetAddress(0x4190))(this, controllerState, sLeftStickX, sLeftStickY);
}

bool CLocalPlayer::DefineCameraTarget(CameraTarget* pInfo) {
    return ((bool(__thiscall*)(CLocalPlayer*, CameraTarget*))GetAddress(0x4290))(this, pInfo);
}

void CLocalPlayer::UpdateCameraTarget() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x4550))(this);
}

void CLocalPlayer::DrawCameraTargetLabel() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x46A0))(this);
}

void CLocalPlayer::SendUnoccupiedData(ID nVehicle, char arg4) {
    ((void(__thiscall*)(CLocalPlayer*, ID, char))GetAddress(0x4B60))(this, nVehicle, arg4);
}

void CLocalPlayer::SendOnfootData() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x4D40))(this);
}

void CLocalPlayer::SendAimData() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x5040))(this);
}

void CLocalPlayer::SendTrailerData(ID nTrailer) {
    ((void(__thiscall*)(CLocalPlayer*, ID))GetAddress(0x51F0))(this, nTrailer);
}

void CLocalPlayer::SendPassengerData() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x53B0))(this);
}

void CLocalPlayer::WastedNotification() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x5620))(this);
}

void CLocalPlayer::RequestClass(int nId) {
    ((void(__thiscall*)(CLocalPlayer*, int))GetAddress(0x56E0))(this, nId);
}

void CLocalPlayer::ChangeInterior(char nId) {
    ((void(__thiscall*)(CLocalPlayer*, char))GetAddress(0x5780))(this, nId);
}

void CLocalPlayer::Chat(const char* szText) {
    ((void(__thiscall*)(CLocalPlayer*, const char*))GetAddress(0x5820))(this, szText);
}

void CLocalPlayer::EnterVehicle(int nVehicle, BOOL bPassenger) {
    ((void(__thiscall*)(CLocalPlayer*, int, BOOL))GetAddress(0x58E0))(this, nVehicle, bPassenger);
}

void CLocalPlayer::ExitVehicle(int nVehicle) {
    ((void(__thiscall*)(CLocalPlayer*, int))GetAddress(0x5A00))(this, nVehicle);
}

void CLocalPlayer::SendStats() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x5B10))(this);
}

void CLocalPlayer::UpdateVehicleDamage(ID nVehicle) {
    ((void(__thiscall*)(CLocalPlayer*, ID))GetAddress(0x5BE0))(this, nVehicle);
}

void CLocalPlayer::NextClass() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x5DF0))(this);
}

void CLocalPlayer::PrevClass() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x5E80))(this);
}

void CLocalPlayer::ProcessClassSelection() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x5F00))(this);
}

void CLocalPlayer::UpdateWeapons() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x6090))(this);
}

void CLocalPlayer::ProcessSpectating() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x6320))(this);
}

void CLocalPlayer::SendTakeDamage(int nId, float fDamage, int nWeapon, int nBodyPart) {
    ((void(__thiscall*)(CLocalPlayer*, int, float, int, int))GetAddress(0x6670))(this, nId, fDamage, nWeapon, nBodyPart);
}

void CLocalPlayer::SendGiveDamage(int nId, float fDamage, int nWeapon, int nBodyPart) {
    ((void(__thiscall*)(CLocalPlayer*, int, float, int, int))GetAddress(0x6780))(this, nId, fDamage, nWeapon, nBodyPart);
}

bool CLocalPlayer::ProcessUnoccupiedSync(ID nVehicle, CVehicle* pVehicle) {
    return ((bool(__thiscall*)(CLocalPlayer*, ID, CVehicle*))GetAddress(0x6BD0))(this, nVehicle, pVehicle);
}

void CLocalPlayer::EnterVehicleAsPassenger() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x6DA0))(this);
}

void CLocalPlayer::SendIncarData() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x6E40))(this);
}

void CLocalPlayer::Process() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x7270))(this);
}

SAMPAPI_END
