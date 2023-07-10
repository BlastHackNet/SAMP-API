/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CLocalPlayer.h"

SAMPAPI_BEGIN_V037R5_1

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
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x4C50))(this);
}

CPed* CLocalPlayer::GetPed() {
    return ((CPed * (__thiscall*)(CLocalPlayer*)) GetAddress(0x2D70))(this);
}

void CLocalPlayer::ResetData() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x2E90))(this);
}

void CLocalPlayer::ProcessHead() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x2FA0))(this);
}

void CLocalPlayer::SetSpecialAction(char nId) {
    ((void(__thiscall*)(CLocalPlayer*, char))GetAddress(0x30F0))(this, nId);
}

char CLocalPlayer::GetSpecialAction() {
    return ((char(__thiscall*)(CLocalPlayer*))GetAddress(0x3410))(this);
}

void CLocalPlayer::UpdateSurfing() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x3570))(this);
}

void CLocalPlayer::SetSurfing(CVehicle* pVehicle, BOOL bStuck) {
    ((void(__thiscall*)(CLocalPlayer*, CVehicle*, BOOL))GetAddress(0x3710))(this, pVehicle, bStuck);
}

void CLocalPlayer::ProcessSurfing() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x3730))(this);
}

BOOL CLocalPlayer::NeedsToUpdate(const void* pOld, const void* pNew, unsigned int nLen) {
    return ((BOOL(__thiscall*)(CLocalPlayer*, const void*, const void*, unsigned int))GetAddress(0x3A60))(this, pOld, pNew, nLen);
}

int CLocalPlayer::GetIncarSendRate() {
    return ((int(__thiscall*)(CLocalPlayer*))GetAddress(0x3AB0))(this);
}

int CLocalPlayer::GetOnfootSendRate() {
    return ((int(__thiscall*)(CLocalPlayer*))GetAddress(0x3AF0))(this);
}

int CLocalPlayer::GetUnoccupiedSendRate() {
    return ((int(__thiscall*)(CLocalPlayer*))GetAddress(0x3B30))(this);
}

void CLocalPlayer::SetSpawnInfo(const SpawnInfo* pInfo) {
    ((void(__thiscall*)(CLocalPlayer*, const SpawnInfo*))GetAddress(0x3BE0))(this, pInfo);
}

BOOL CLocalPlayer::Spawn() {
    return ((BOOL(__thiscall*)(CLocalPlayer*))GetAddress(0x3C20))(this);
}

void CLocalPlayer::SetColor(D3DCOLOR color) {
    ((void(__thiscall*)(CLocalPlayer*, D3DCOLOR))GetAddress(0x3ED0))(this, color);
}

D3DCOLOR CLocalPlayer::GetColorAsRGBA() {
    return ((D3DCOLOR(__thiscall*)(CLocalPlayer*))GetAddress(0x3F00))(this);
}

D3DCOLOR CLocalPlayer::GetColorAsARGB() {
    return ((D3DCOLOR(__thiscall*)(CLocalPlayer*))GetAddress(0x3F20))(this);
}

void CLocalPlayer::ProcessOnfootWorldBounds() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x3F50))(this);
}

void CLocalPlayer::ProcessIncarWorldBounds() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x3FC0))(this);
}

void CLocalPlayer::RequestSpawn() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x4060))(this);
}

void CLocalPlayer::PrepareForClassSelection() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x4080))(this);
}

void CLocalPlayer::PrepareForClassSelection_Outcome(BOOL bOutcome) {
    ((void(__thiscall*)(CLocalPlayer*, BOOL))GetAddress(0x40E0))(this, bOutcome);
}

void CLocalPlayer::EnableSpectating(BOOL bEnable) {
    ((void(__thiscall*)(CLocalPlayer*, BOOL))GetAddress(0x41C0))(this, bEnable);
}

void CLocalPlayer::SpectateForVehicle(ID nId) {
    ((void(__thiscall*)(CLocalPlayer*, ID))GetAddress(0x4230))(this, nId);
}

void CLocalPlayer::SpectateForPlayer(ID nId) {
    ((void(__thiscall*)(CLocalPlayer*, ID))GetAddress(0x4280))(this, nId);
}

BOOL CLocalPlayer::NeedsToSendOnfootData(short controllerState, short sLeftStickX, short sLeftStickY) {
    return ((BOOL(__thiscall*)(CLocalPlayer*, short, short, short))GetAddress(0x4300))(this, controllerState, sLeftStickX, sLeftStickY);
}

BOOL CLocalPlayer::NeedsToSendIncarData(short controllerState, short sLeftStickX, short sLeftStickY) {
    return ((BOOL(__thiscall*)(CLocalPlayer*, short, short, short))GetAddress(0x4340))(this, controllerState, sLeftStickX, sLeftStickY);
}

bool CLocalPlayer::DefineCameraTarget(CameraTarget* pInfo) {
    return ((bool(__thiscall*)(CLocalPlayer*, CameraTarget*))GetAddress(0x4440))(this, pInfo);
}

void CLocalPlayer::UpdateCameraTarget() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x4700))(this);
}

void CLocalPlayer::DrawCameraTargetLabel() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x4850))(this);
}

void CLocalPlayer::SendUnoccupiedData(ID nVehicle, char arg4) {
    ((void(__thiscall*)(CLocalPlayer*, ID, char))GetAddress(0x4D30))(this, nVehicle, arg4);
}

void CLocalPlayer::SendOnfootData() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x4F00))(this);
}

void CLocalPlayer::SendAimData() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x5210))(this);
}

void CLocalPlayer::SendTrailerData(ID nTrailer) {
    ((void(__thiscall*)(CLocalPlayer*, ID))GetAddress(0x53D0))(this, nTrailer);
}

void CLocalPlayer::SendPassengerData() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x5590))(this);
}

void CLocalPlayer::WastedNotification() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x5810))(this);
}

void CLocalPlayer::RequestClass(int nId) {
    ((void(__thiscall*)(CLocalPlayer*, int))GetAddress(0x58D0))(this, nId);
}

void CLocalPlayer::ChangeInterior(char nId) {
    ((void(__thiscall*)(CLocalPlayer*, char))GetAddress(0x5970))(this, nId);
}

void CLocalPlayer::Chat(const char* szText) {
    ((void(__thiscall*)(CLocalPlayer*, const char*))GetAddress(0x5A10))(this, szText);
}

void CLocalPlayer::EnterVehicle(int nVehicle, BOOL bPassenger) {
    ((void(__thiscall*)(CLocalPlayer*, int, BOOL))GetAddress(0x5AD0))(this, nVehicle, bPassenger);
}

void CLocalPlayer::ExitVehicle(int nVehicle) {
    ((void(__thiscall*)(CLocalPlayer*, int))GetAddress(0x5BF0))(this, nVehicle);
}

void CLocalPlayer::SendStats() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x5D00))(this);
}

void CLocalPlayer::UpdateVehicleDamage(ID nVehicle) {
    ((void(__thiscall*)(CLocalPlayer*, ID))GetAddress(0x5DE0))(this, nVehicle);
}

void CLocalPlayer::NextClass() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x5FF0))(this);
}

void CLocalPlayer::PrevClass() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x6080))(this);
}

void CLocalPlayer::ProcessClassSelection() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x6100))(this);
}

void CLocalPlayer::UpdateWeapons() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x6290))(this);
}

void CLocalPlayer::ProcessSpectating() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x6540))(this);
}

void CLocalPlayer::SendTakeDamage(int nId, float fDamage, int nWeapon, int nBodyPart) {
    ((void(__thiscall*)(CLocalPlayer*, int, float, int, int))GetAddress(0x68A0))(this, nId, fDamage, nWeapon, nBodyPart);
}

void CLocalPlayer::SendGiveDamage(int nId, float fDamage, int nWeapon, int nBodyPart) {
    ((void(__thiscall*)(CLocalPlayer*, int, float, int, int))GetAddress(0x69B0))(this, nId, fDamage, nWeapon, nBodyPart);
}

bool CLocalPlayer::ProcessUnoccupiedSync(ID nVehicle, CVehicle* pVehicle) {
    return ((bool(__thiscall*)(CLocalPlayer*, ID, CVehicle*))GetAddress(0x6E00))(this, nVehicle, pVehicle);
}

void CLocalPlayer::EnterVehicleAsPassenger() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x6FE0))(this);
}

void CLocalPlayer::SendIncarData() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x7080))(this);
}

void CLocalPlayer::Process() {
    ((void(__thiscall*)(CLocalPlayer*))GetAddress(0x74C0))(this);
}

SAMPAPI_END
