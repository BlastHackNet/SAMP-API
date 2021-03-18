/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CLocalPlayer.h"

SAMPAPI_BEGIN_V037R1

SAMPAPI_VAR unsigned long& CLocalPlayer::RefTimeElapsedFromFPressed() {
    return *(unsigned long*)GetAddress(0xEC0A4);
}

SAMPAPI_VAR int& CLocalPlayer::RefIncarSendrate() {
    return *(int*)GetAddress(0xEC0AC);
}

SAMPAPI_VAR int& CLocalPlayer::RefOnfootSendrate() {
    return *(int*)GetAddress(0xEC0A8);
}

SAMPAPI_VAR int& CLocalPlayer::RefFiringSendrate() {
    return *(int*)GetAddress(0xEC0B0);
}

SAMPAPI_VAR int& CLocalPlayer::RefSendMultiplier() {
    return *(int*)GetAddress(0xEC0B4);
}

SAMPAPI_VAR bool& CLocalPlayer::RefDrawCameraTargetLabel() {
    return *(bool*)GetAddress(0x104908);
}

CLocalPlayer::CLocalPlayer() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x4A50))(this);
}

void CLocalPlayer::ResetData() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x2E80))(this);
}

void CLocalPlayer::ProcessHead() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x2F80))(this);
}

void CLocalPlayer::SetSpecialAction(char nAction) {
    ((void(__thiscall*)(CLocalPlayer*, char))GetAddress(0x30C0))(this, nAction);
}

char CLocalPlayer::GetSpecialAction() {
    return ((char(__thiscall*)(CLocalPlayer*))GetAddress(0x3340))(this);
}

void CLocalPlayer::SetSpawnInfo(const SpawnInfo* pInfo) {
    ((void(__thiscall*)(CLocalPlayer*, const SpawnInfo*))GetAddress(0x3AA0))(this, pInfo);
}

BOOL CLocalPlayer::Spawn() {
    return ((BOOL(__thiscall*)(CLocalPlayer*))GetAddress(0x3AD0))(this);
}

void CLocalPlayer::SetColor(D3DCOLOR dwColor) {
    ((void(__thiscall*)(CLocalPlayer*, D3DCOLOR))GetAddress(0x3D40))(this, dwColor);
}

D3DCOLOR CLocalPlayer::GetColorAsARGB() {
    return ((D3DCOLOR(__thiscall*)(CLocalPlayer*))GetAddress(0x3D90))(this);
}

void CLocalPlayer::ProcessOnfootWorldBounds() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x3DC0))(this);
}

void CLocalPlayer::ProcessIncarWorldBounds() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x3E20))(this);
}

void CLocalPlayer::RequestSpawn() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x3EC0))(this);
}

void CLocalPlayer::PrepareForClassSelection() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x3EE0))(this);
}

void CLocalPlayer::PrepareForClassSelection_Outcome(BOOL bOutcome) {
    ((void(__thiscall*)(CLocalPlayer*, BOOL))GetAddress(0x3F30))(this, bOutcome);
}

void CLocalPlayer::EnableSpectating(BOOL bEnable) {
    ((void(__thiscall*)(CLocalPlayer*, BOOL))GetAddress(0x4000))(this, bEnable);
}

void CLocalPlayer::SpectateForVehicle(ID nVehicle) {
    ((void(__thiscall*)(CLocalPlayer*, ID))GetAddress(0x4060))(this, nVehicle);
}

void CLocalPlayer::SpectateForPlayer(ID nPlayer) {
    ((void(__thiscall*)(CLocalPlayer*, ID))GetAddress(0x40B0))(this, nPlayer);
}

void CLocalPlayer::SendUnoccupiedData(ID nVehicle, char arg4) {
    ((void(__thiscall*)(CLocalPlayer*, ID, int))GetAddress(0x4B30))(this, nVehicle, arg4);
}

void CLocalPlayer::SendAimData() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x4FF0))(this);
}

void CLocalPlayer::WastedNotification() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x55E0))(this);
}

void CLocalPlayer::RequestClass(int nClass) {
    ((void(__thiscall*)(CLocalPlayer*, int))GetAddress(0x56A0))(this, nClass);
}

void CLocalPlayer::ChangeInterior(char nId) {
    ((void(__thiscall*)(CLocalPlayer*, char))GetAddress(0x5740))(this, nId);
}

void CLocalPlayer::Chat(const char* szText) {
    ((void(__thiscall*)(CLocalPlayer*, const char*))GetAddress(0x57F0))(this, szText);
}

void CLocalPlayer::EnterVehicle(int nVehicle, BOOL bPassenger) {
    ((void(__thiscall*)(CLocalPlayer*, int, BOOL))GetAddress(0x58C0))(this, nVehicle, bPassenger);
}

void CLocalPlayer::ExitVehicle(int nVehicle) {
    ((void(__thiscall*)(CLocalPlayer*, int))GetAddress(0x59E0))(this, nVehicle);
}

void CLocalPlayer::SendStats() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x5AF0))(this);
}

void CLocalPlayer::UpdateVehicleDamage(ID nVehicle) {
    ((void(__thiscall*)(CLocalPlayer*, ID))GetAddress(0x5BD0))(this, nVehicle);
}

void CLocalPlayer::NextClass() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x5DE0))(this);
}

void CLocalPlayer::PrevClass() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x5E70))(this);
}

void CLocalPlayer::UpdateWeapons() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x6080))(this);
}

void CLocalPlayer::EnterVehicleAsPassenger() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x6D90))(this);
}

void CLocalPlayer::SendIncarData() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x6E30))(this);
}

void CLocalPlayer::Process() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x7280))(this);
}

void CLocalPlayer::EndSurfing() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0xB630))(this);
}

void CLocalPlayer::SendOnfootData() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x4D10))(this);
}

void CLocalPlayer::SendTrailerData(ID nTrailer) {
    ((void(__thiscall*)(CLocalPlayer*, ID))GetAddress(0x51B0))(this, nTrailer);
}

void CLocalPlayer::SendPassengerData() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x5380))(this);
}

void CLocalPlayer::SendSpawnRequest() {
    ((void(__cdecl*)())GetAddress(0x3A20))();
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

CPed* CLocalPlayer::GetPed() {
    return ((CPed * (__thiscall*)(CLocalPlayer*)) GetAddress(0x2D60))(this);
}

D3DCOLOR CLocalPlayer::GetColorAsRGBA() {
    return ((D3DCOLOR(__thiscall*)(CLocalPlayer*))GetAddress(0x3D70))(this);
}

void CLocalPlayer::DrawCameraTargetLabel() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x4670))(this);
}

void CLocalPlayer::ProcessSpectating() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x6310))(this);
}

void CLocalPlayer::SendGiveDamage(int nId, float fDamage, int nWeapon, int nBodyPart) {
    ((void(__thiscall*)(CLocalPlayer*, int, float, int, int))GetAddress(0x6770))(this, nId, fDamage, nWeapon, nBodyPart);
}

void CLocalPlayer::SendTakeDamage(int nId, float fDamage, int nWeapon, int nBodyPart) {
    ((void(__thiscall*)(CLocalPlayer*, int, float, int, int))GetAddress(0x6660))(this, nId, fDamage, nWeapon, nBodyPart);
}

void CLocalPlayer::UpdateSurfing() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x3460))(this);
}

BOOL CLocalPlayer::NeedsToUpdate(const void* pOld, const void* pNew, unsigned int nLen) {
    return ((BOOL(__thiscall*)(CLocalPlayer*, const void*, const void*, unsigned int))GetAddress(0x3920))(this, pOld, pNew, nLen);
}

void CLocalPlayer::SetSurfing(CVehicle* pVehicle, BOOL bStuck) {
    ((void(__thiscall*)(CLocalPlayer*, CVehicle*, BOOL))GetAddress(0x35E0))(this, pVehicle, bStuck);
}

void CLocalPlayer::ProcessSurfing() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x3600))(this);
}

void CLocalPlayer::ProcessClassSelection() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x5EF0))(this);
}

BOOL CLocalPlayer::NeedsToSendOnfootData(short controllerState, short sLeftStickX, short sLeftStickY) {
    return ((BOOL(__thiscall*)(CLocalPlayer*, short, short, short))GetAddress(0x4120))(this, controllerState, sLeftStickX, sLeftStickY);
}

BOOL CLocalPlayer::NeedsToSendIncarData(short controllerState, short sLeftStickX, short sLeftStickY) {
    return ((BOOL(__thiscall*)(CLocalPlayer*, short, short, short))GetAddress(0x4150))(this, controllerState, sLeftStickX, sLeftStickY);
}

bool CLocalPlayer::DefineCameraTarget(CameraTarget* pInfo) {
    return ((bool(__thiscall*)(CLocalPlayer*, CameraTarget*))GetAddress(0x4260))(this, pInfo);
}

bool CLocalPlayer::ProcessUnoccupiedSync(ID nVehicle, CVehicle* pVehicle) {
    return ((bool(__thiscall*)(CLocalPlayer*, ID, CVehicle*))GetAddress(0x6BC0))(this, nVehicle, pVehicle);
}

SAMPAPI_END
