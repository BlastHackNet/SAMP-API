/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CLocalPlayer.h"

unsigned long &SAMP::CLocalPlayer::dwTimeElapsedFromFPressed = *(unsigned long *)SAMP_ADDROF(0xEC0A4);
int &SAMP::CLocalPlayer::nIncarSendrate = *(int *)SAMP_ADDROF(0xEC0AC);
int &SAMP::CLocalPlayer::nOnfootSendrate = *(int *)SAMP_ADDROF(0xEC0A8);
int &SAMP::CLocalPlayer::nFiringSendrate = *(int *)SAMP_ADDROF(0xEC0B0);
int &SAMP::CLocalPlayer::nSendMultiplier = *(int *)SAMP_ADDROF(0xEC0B4);
bool &SAMP::CLocalPlayer::bDrawCameraTargetLabel = *(bool *)SAMP_ADDROF(0x104908);

SAMP::CLocalPlayer::CLocalPlayer() {
	((void(__thiscall *)(CLocalPlayer *))SAMP_ADDROF(0x4A50))(this);
}

void SAMP::CLocalPlayer::ResetData() {
	((void(__thiscall *)(CLocalPlayer *))SAMP_ADDROF(0x2E80))(this);
}

void SAMP::CLocalPlayer::ProcessHead() {
	((void(__thiscall *)(CLocalPlayer *))SAMP_ADDROF(0x2F80))(this);
}

void SAMP::CLocalPlayer::SetSpecialAction(char nAction) {
	((void(__thiscall *)(CLocalPlayer *, char))SAMP_ADDROF(0x30C0))(this, nAction);
}

char SAMP::CLocalPlayer::GetSpecialAction() {
	return ((char(__thiscall *)(CLocalPlayer *))SAMP_ADDROF(0x3340))(this);
}

void SAMP::CLocalPlayer::SetSpawnInfo(const SpawnInfo *pInfo) {
	((void(__thiscall *)(CLocalPlayer *, const SpawnInfo *))SAMP_ADDROF(0x3AA0))(this, pInfo);
}

BOOL SAMP::CLocalPlayer::Spawn() {
	return ((BOOL(__thiscall *)(CLocalPlayer *))SAMP_ADDROF(0x3AD0))(this);
}

void SAMP::CLocalPlayer::SetColor(D3DCOLOR dwColor) {
	((void(__thiscall *)(CLocalPlayer *, D3DCOLOR))SAMP_ADDROF(0x3D40))(this, dwColor);
}

D3DCOLOR SAMP::CLocalPlayer::GetColorAsARGB() {
	return ((D3DCOLOR(__thiscall *)(CLocalPlayer *))SAMP_ADDROF(0x3D90))(this);
}

void SAMP::CLocalPlayer::ProcessOnfootWorldBounds() {
	((void(__thiscall *)(CLocalPlayer *))SAMP_ADDROF(0x3DC0))(this);
}

void SAMP::CLocalPlayer::ProcessIncarWorldBounds() {
	((void(__thiscall *)(CLocalPlayer *))SAMP_ADDROF(0x3E20))(this);
}

void SAMP::CLocalPlayer::RequestSpawn() {
	((void(__thiscall *)(CLocalPlayer *))SAMP_ADDROF(0x3EC0))(this);
}

void SAMP::CLocalPlayer::PrepareForClassSelection() {
	((void(__thiscall *)(CLocalPlayer *))SAMP_ADDROF(0x3EE0))(this);
}

void SAMP::CLocalPlayer::PrepareForClassSelection_Outcome(BOOL bOutcome) {
	((void(__thiscall *)(CLocalPlayer *, BOOL))SAMP_ADDROF(0x3F30))(this, bOutcome);
}

void SAMP::CLocalPlayer::EnableSpectating(BOOL bEnable) {
	((void(__thiscall *)(CLocalPlayer *, BOOL))SAMP_ADDROF(0x4000))(this, bEnable);
}

void SAMP::CLocalPlayer::SpectateForVehicle(ID nVehicle) {
	((void(__thiscall *)(CLocalPlayer *, ID))SAMP_ADDROF(0x4060))(this, nVehicle);
}

void SAMP::CLocalPlayer::SpectateForPlayer(ID nPlayer) {
	((void(__thiscall *)(CLocalPlayer *, ID))SAMP_ADDROF(0x40B0))(this, nPlayer);
}

void SAMP::CLocalPlayer::SendUnoccupiedData(ID nVehicle, char arg4) {
	((void(__thiscall *)(CLocalPlayer *, ID, int))SAMP_ADDROF(0x4B30))(this, nVehicle, arg4);
}

void SAMP::CLocalPlayer::SendAimData() {
	((void(__thiscall *)(CLocalPlayer *))SAMP_ADDROF(0x4FF0))(this);
}

void SAMP::CLocalPlayer::WastedNotification() {
	((void(__thiscall *)(CLocalPlayer *))SAMP_ADDROF(0x55E0))(this);
}

void SAMP::CLocalPlayer::RequestClass(int nClass) {
	((void(__thiscall *)(CLocalPlayer *, int))SAMP_ADDROF(0x56A0))(this, nClass);
}

void SAMP::CLocalPlayer::ChangeInterior(char nId) {
	((void(__thiscall *)(CLocalPlayer *, char))SAMP_ADDROF(0x5740))(this, nId);
}

void SAMP::CLocalPlayer::Chat(const char *szText) {
	((void(__thiscall *)(CLocalPlayer *, const char *))SAMP_ADDROF(0x57F0))(this, szText);
}

void SAMP::CLocalPlayer::EnterVehicle(int nVehicle, BOOL bPassenger) {
	((void(__thiscall *)(CLocalPlayer *, int, BOOL))SAMP_ADDROF(0x58C0))(this, nVehicle, bPassenger);
}

void SAMP::CLocalPlayer::ExitVehicle(int nVehicle) {
	((void(__thiscall *)(CLocalPlayer *, int))SAMP_ADDROF(0x59E0))(this, nVehicle);
}

void SAMP::CLocalPlayer::SendStats() {
	((void(__thiscall *)(CLocalPlayer *))SAMP_ADDROF(0x5AF0))(this);
}

void SAMP::CLocalPlayer::UpdateVehicleDamage(ID nVehicle) {
	((void(__thiscall *)(CLocalPlayer *, ID))SAMP_ADDROF(0x5BD0))(this, nVehicle);
}

void SAMP::CLocalPlayer::NextClass() {
	((void(__thiscall *)(CLocalPlayer *))SAMP_ADDROF(0x5DE0))(this);
}

void SAMP::CLocalPlayer::PrevClass() {
	((void(__thiscall *)(CLocalPlayer *))SAMP_ADDROF(0x5E70))(this);
}

void SAMP::CLocalPlayer::UpdateWeapons() {
	((void(__thiscall *)(CLocalPlayer *))SAMP_ADDROF(0x6080))(this);
}

void SAMP::CLocalPlayer::EnterVehicleAsPassenger() {
	((void(__thiscall *)(CLocalPlayer *))SAMP_ADDROF(0x6D90))(this);
}

void SAMP::CLocalPlayer::SendIncarData() {
	((void(__thiscall *)(CLocalPlayer *))SAMP_ADDROF(0x6E30))(this);
}

void SAMP::CLocalPlayer::Process() {
	((void(__thiscall *)(CLocalPlayer *))SAMP_ADDROF(0x7280))(this);
}

void SAMP::CLocalPlayer::EndSurfing() {
	((void(__thiscall *)(CLocalPlayer *))SAMP_ADDROF(0xB630))(this);
}

void SAMP::CLocalPlayer::SendOnfootData() {
	((void(__thiscall *)(CLocalPlayer *))SAMP_ADDROF(0x4D10))(this);
}

void SAMP::CLocalPlayer::SendTrailerData(ID nTrailer) {
	((void(__thiscall *)(CLocalPlayer *, ID))SAMP_ADDROF(0x51B0))(this, nTrailer);
}

void SAMP::CLocalPlayer::SendPassengerData() {
	((void(__thiscall *)(CLocalPlayer *))SAMP_ADDROF(0x5380))(this);
}

void SAMP::CLocalPlayer::SendSpawnRequest() {
	((void(__cdecl *)())SAMP_ADDROF(0x3A20))();
}

int SAMP::CLocalPlayer::GetIncarSendRate() {
	return ((int(__thiscall *)(CLocalPlayer *))SAMP_ADDROF(0x3970))(this);
}

int SAMP::CLocalPlayer::GetOnfootSendRate() {
	return ((int(__thiscall *)(CLocalPlayer *))SAMP_ADDROF(0x39B0))(this);
}

int SAMP::CLocalPlayer::GetUnoccupiedSendRate() {
	return ((int(__thiscall *)(CLocalPlayer *))SAMP_ADDROF(0x39F0))(this);
}

SAMP::CPed *SAMP::CLocalPlayer::GetPed() {
	return ((CPed *(__thiscall *)(CLocalPlayer *))SAMP_ADDROF(0x2D60))(this);
}

D3DCOLOR SAMP::CLocalPlayer::GetColorAsRGBA() {
	return ((D3DCOLOR(__thiscall *)(CLocalPlayer *))SAMP_ADDROF(0x3D70))(this);
}

void SAMP::CLocalPlayer::DrawCameraTargetLabel() {
	((void(__thiscall *)(CLocalPlayer *))SAMP_ADDROF(0x4670))(this);
}

void SAMP::CLocalPlayer::ProcessSpectating() {
	((void(__thiscall *)(CLocalPlayer *))SAMP_ADDROF(0x6310))(this);
}

void SAMP::CLocalPlayer::SendGiveDamage(int nId, float fDamage, int nWeapon, int nBodyPart) {
	((void(__thiscall *)(CLocalPlayer *, int, float, int, int))SAMP_ADDROF(0x6770))(this, nId, fDamage, nWeapon, nBodyPart);
}

void SAMP::CLocalPlayer::SendTakeDamage(int nId, float fDamage, int nWeapon, int nBodyPart) {
	((void(__thiscall *)(CLocalPlayer *, int, float, int, int))SAMP_ADDROF(0x6660))(this, nId, fDamage, nWeapon, nBodyPart);
}

void SAMP::CLocalPlayer::UpdateSurfing() {
	((void(__thiscall *)(CLocalPlayer *))SAMP_ADDROF(0x3460))(this);
}

BOOL SAMP::CLocalPlayer::NeedsToUpdate(const void *pOld, const void *pNew, unsigned int nLen) {
	return ((BOOL(__thiscall *)(CLocalPlayer *, const void *, const void *, unsigned int))SAMP_ADDROF(0x3920))(this, pOld, pNew, nLen);
}

void SAMP::CLocalPlayer::SetSurfing(CVehicle *pVehicle, BOOL bStuck) {
	((void(__thiscall *)(CLocalPlayer *, CVehicle *, BOOL))SAMP_ADDROF(0x35E0))(this, pVehicle, bStuck);
}

void SAMP::CLocalPlayer::ProcessSurfing() {
	((void(__thiscall *)(CLocalPlayer *))SAMP_ADDROF(0x3600))(this);
}

void SAMP::CLocalPlayer::ProcessClassSelection() {
	((void(__thiscall *)(CLocalPlayer *))SAMP_ADDROF(0x5EF0))(this);
}

BOOL SAMP::CLocalPlayer::NeedsToSendOnfootData(short controllerState, short sLeftStickX, short sLeftStickY) {
	return ((BOOL(__thiscall *)(CLocalPlayer *, short, short, short))SAMP_ADDROF(0x4120))(this, controllerState, sLeftStickX, sLeftStickY);
}

BOOL SAMP::CLocalPlayer::NeedsToSendIncarData(short controllerState, short sLeftStickX, short sLeftStickY) {
	return ((BOOL(__thiscall *)(CLocalPlayer *, short, short, short))SAMP_ADDROF(0x4150))(this, controllerState, sLeftStickX, sLeftStickY);
}

bool SAMP::CLocalPlayer::DefineCameraTarget(CameraTarget *pInfo) {
	return ((bool(__thiscall *)(CLocalPlayer *, CameraTarget *))SAMP_ADDROF(0x4260))(this, pInfo);
}

bool SAMP::CLocalPlayer::ProcessUnoccupiedSync(ID nVehicle, CVehicle *pVehicle) {
	return ((bool(__thiscall *)(CLocalPlayer *, ID, CVehicle *))SAMP_ADDROF(0x6BC0))(this, nVehicle, pVehicle);
}