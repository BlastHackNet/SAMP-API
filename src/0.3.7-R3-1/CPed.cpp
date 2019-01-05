/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CPed.h"

SAMP::CPed::CPed() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xAB1E0))(this);
}

SAMP::CPed::CPed(int nPlayerNumber, int nModel, CVector position, float fRotation) {
	((void(__thiscall *)(CPed *, int, int, CVector, float))SAMP_ADDROF(0xAB1E0))(this, nPlayerNumber, nModel, position, fRotation);
}

void SAMP::CPed::ResetPointers() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xAB320))(this);
}

void SAMP::CPed::SetInitialState() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xAB340))(this);
}

SAMP::AimStuff::Aim *SAMP::CPed::GetAim() {
	return ((AimStuff::Aim *(__thiscall *)(CPed *))SAMP_ADDROF(0xAB390))(this);
}

void SAMP::CPed::SetAim(const AimStuff::Aim *pAim) {
	((void(__thiscall *)(CPed *, const AimStuff::Aim *))SAMP_ADDROF(0xAB3A0))(this, pAim);
}

char SAMP::CPed::GetCurrentWeapon() {
	return ((char(__thiscall *)(CPed *))SAMP_ADDROF(0xAB3C0))(this);
}

SAMP::GTAREF SAMP::CPed::GetVehicleRef() {
	return ((GTAREF(__thiscall *)(CPed *))SAMP_ADDROF(0xAB400))(this);
}

void SAMP::CPed::DeleteArrow() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xAB420))(this);
}

BOOL SAMP::CPed::IsOnScreen() {
	return ((BOOL(__thiscall *)(CPed *))SAMP_ADDROF(0xAB450))(this);
}

void SAMP::CPed::SetImmunities(BOOL BP, BOOL FP, BOOL EP, BOOL CP, BOOL MP) {
	((void(__thiscall *)(CPed *, BOOL, BOOL, BOOL, BOOL, BOOL))SAMP_ADDROF(0xAB470))(this, BP, FP, EP, CP, MP);
}

float SAMP::CPed::GetHealth() {
	return ((float(__thiscall *)(CPed *))SAMP_ADDROF(0xAB4C0))(this);
}

void SAMP::CPed::SetHealth(float fValue) {
	((void(__thiscall *)(CPed *, float))SAMP_ADDROF(0xAB4E0))(this, fValue);
}

float SAMP::CPed::GetArmour() {
	return ((float(__thiscall *)(CPed *))SAMP_ADDROF(0xAB500))(this);
}

void SAMP::CPed::SetArmour(float fValue) {
	((void(__thiscall *)(CPed *, float))SAMP_ADDROF(0xAB520))(this, fValue);
}

int SAMP::CPed::GetFlags() {
	return ((int(__thiscall *)(CPed *))SAMP_ADDROF(0xAB540))(this);
}

void SAMP::CPed::SetFlags(int nValue) {
	((void(__thiscall *)(CPed *, int))SAMP_ADDROF(0xAB560))(this, nValue);
}

BOOL SAMP::CPed::IsDead() {
	return ((BOOL(__thiscall *)(CPed *))SAMP_ADDROF(0xAB580))(this);
}

char SAMP::CPed::GetState() {
	return ((char(__thiscall *)(CPed *))SAMP_ADDROF(0xAB5B0))(this);
}

void SAMP::CPed::SetState(char nValue) {
	((void(__thiscall *)(CPed *, char))SAMP_ADDROF(0xAB5C0))(this, nValue);
}

float SAMP::CPed::GetRotation() {
	return ((float(__thiscall *)(CPed *))SAMP_ADDROF(0xAB600))(this);
}

void SAMP::CPed::ForceRotation(float fValue) {
	((void(__thiscall *)(CPed *, float))SAMP_ADDROF(0xAB680))(this, fValue);
}

void SAMP::CPed::SetRotation(float fValue) {
	((void(__thiscall *)(CPed *, float))SAMP_ADDROF(0xAB6D0))(this, fValue);
}

BOOL SAMP::CPed::IsPassenger() {
	return ((BOOL(__thiscall *)(CPed *))SAMP_ADDROF(0xAB730))(this);
}

CVehicle *SAMP::CPed::GetVehicle() {
	return ((::CVehicle *(__thiscall *)(CPed *))SAMP_ADDROF(0xAB770))(this);
}

void SAMP::CPed::ClearWeapons() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xAB780))(this);
}

void SAMP::CPed::SetArmedWeapon(int nWeapon, bool bGameFunc) {
	((void(__thiscall *)(CPed *, int, bool))SAMP_ADDROF(0xAB7D0))(this, nWeapon, bGameFunc);
}

void SAMP::CPed::RemoveWeaponWhenEnteringVehicle() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xAB880))(this);
}

CWeapon *SAMP::CPed::GetCurrentWeaponSlot() {
	return ((::CWeapon *(__thiscall *)(CPed *))SAMP_ADDROF(0xAB8B0))(this);
}

BOOL SAMP::CPed::CurrentWeaponHasNoAmmo() {
	return ((BOOL(__thiscall *)(CPed *))SAMP_ADDROF(0xAB8D0))(this);
}

float SAMP::CPed::GetDistanceToEntity(const CEntity *pEntity) {
	return ((float(__thiscall *)(CPed *, const CEntity *))SAMP_ADDROF(0xAB910))(this, pEntity);
}

int SAMP::CPed::GetVehicleSeatIndex() {
	return ((int(__thiscall *)(CPed *))SAMP_ADDROF(0xAB970))(this);
}

void SAMP::CPed::PutIntoVehicle(GTAREF vehicle, int nSeat) {
	((void(__thiscall *)(CPed *, GTAREF, int))SAMP_ADDROF(0xABA00))(this, vehicle, nSeat);
}

void SAMP::CPed::EnterVehicle(GTAREF vehicle, BOOL bAsPassenger) {
	((void(__thiscall *)(CPed *, GTAREF, BOOL))SAMP_ADDROF(0xABB80))(this, vehicle, bAsPassenger);
}

void SAMP::CPed::ExitVehicle() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xABC50))(this);
}

void SAMP::CPed::WarpFromVehicle(CVector putAt) {
	((void(__thiscall *)(CPed *, CVector))SAMP_ADDROF(0xABCE0))(this, putAt);
}

void SAMP::CPed::SetSpawnInfo(const CVector *pPosition, float fRotation) {
	((void(__thiscall *)(CPed *, const CVector *, float))SAMP_ADDROF(0xABEC0))(this, pPosition, fRotation);
}

void SAMP::CPed::SetControllable(BOOL bEnable) {
	((void(__thiscall *)(CPed *, BOOL))SAMP_ADDROF(0xABF00))(this, bEnable);
}

char SAMP::CPed::GetDeathInfo(ID *pKiller) {
	return ((char(__thiscall *)(CPed *, ID *))SAMP_ADDROF(0xABFC0))(this, pKiller);
}

CEntity *SAMP::CPed::GetFloor() {
	return ((::CEntity *(__thiscall *)(CPed *))SAMP_ADDROF(0xAC180))(this);
}

CWeaponInfo *SAMP::CPed::GetCurrentWeaponInfo() {
	return ((::CWeaponInfo *(__thiscall *)(CPed *))SAMP_ADDROF(0xAC230))(this);
}

void SAMP::CPed::HandsUp() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xAC280))(this);
}

BOOL SAMP::CPed::DoesHandsUp() {
	return ((BOOL(__thiscall *)(CPed *))SAMP_ADDROF(0xAC2D0))(this);
}

void SAMP::CPed::HoldObject(int nModel) {
	((void(__thiscall *)(CPed *, int))SAMP_ADDROF(0xAC330))(this, nModel);
}

BOOL SAMP::CPed::EnablePassengerDrivebyMode() {
	return ((BOOL(__thiscall *)(CPed *))SAMP_ADDROF(0xAC700))(this);
}

void SAMP::CPed::Extinguish() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xAC860))(this);
}

unsigned short SAMP::CPed::GetCurrentWeaponAmmo() {
	return ((unsigned short(__thiscall *)(CPed *))SAMP_ADDROF(0xAC8C0))(this);
}

void SAMP::CPed::EnableJetpack() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xAC480))(this);
}

void SAMP::CPed::DisableJetpack() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xAC4D0))(this);
}

BOOL SAMP::CPed::HasJetpack() {
	return ((BOOL(__thiscall *)(CPed *))SAMP_ADDROF(0xAC530))(this);
}

CWeapon *SAMP::CPed::GetWeaponSlot(int nWeapon) {
	return ((::CWeapon *(__thiscall *)(CPed *, int))SAMP_ADDROF(0xAC900))(this, nWeapon);
}

void SAMP::CPed::SetWalkStyle(const char *szName) {
	((void(__thiscall *)(CPed *, const char *))SAMP_ADDROF(0xAC940))(this, szName);
}

void SAMP::CPed::PerformAnimation(const char *szName, const char *szFile, float fFramedelta, int nLoopA, int nLockX, int nLockY, int nLockF, int nTime) {
	((void(__thiscall *)(CPed *, const char *, const char *, float, int, int, int, int, int))SAMP_ADDROF(0xAC9A0))(this, szName, szFile, fFramedelta, nLoopA, nLockX, nLockY, nLockF, nTime);
}

void SAMP::CPed::LinkToInterior(char nId, BOOL bRefresh) {
	((void(__thiscall *)(CPed *, char, BOOL))SAMP_ADDROF(0xACAB0))(this, nId, bRefresh);
}

void SAMP::CPed::DestroyParachute() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xACB50))(this);
}

BOOL SAMP::CPed::OpenParachute() {
	return ((BOOL(__thiscall *)(CPed *))SAMP_ADDROF(0xACC40))(this);
}

void SAMP::CPed::ProcessParachuteEvent(const char *szName) {
	((void(__thiscall *)(CPed *, const char *))SAMP_ADDROF(0xACD90))(this, szName);
}

BOOL SAMP::CPed::IsOnGround() {
	return ((BOOL(__thiscall *)(CPed *))SAMP_ADDROF(0xACFD0))(this);
}

void SAMP::CPed::ResetDamageEntity() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xACFF0))(this);
}

void SAMP::CPed::RemoveWeaponModel(int nWeapon) {
	((void(__thiscall *)(CPed *, int))SAMP_ADDROF(0xAD020))(this, nWeapon);
}

float SAMP::CPed::GetAimZ() {
	return ((float(__thiscall *)(CPed *))SAMP_ADDROF(0xAD060))(this);
}

void SAMP::CPed::SetAimZ(float fValue) {
	((void(__thiscall *)(CPed *, float))SAMP_ADDROF(0xAD0A0))(this, fValue);
}

CEntity *SAMP::CPed::GetContactEntity() {
	return ((::CEntity *(__thiscall *)(CPed *))SAMP_ADDROF(0xAD110))(this);
}

CVehicle *SAMP::CPed::GetContactVehicle() {
	return ((::CVehicle *(__thiscall *)(CPed *))SAMP_ADDROF(0xAD120))(this);
}

int SAMP::CPed::GetStat() {
	return ((int(__thiscall *)(CPed *))SAMP_ADDROF(0xAD150))(this);
}

BOOL SAMP::CPed::PerformingCustomAnimation() {
	return ((BOOL(__thiscall *)(CPed *))SAMP_ADDROF(0xAD170))(this);
}

void SAMP::CPed::StartDancing(int nStyle) {
	((void(__thiscall *)(CPed *, int))SAMP_ADDROF(0xAD240))(this, nStyle);
}

void SAMP::CPed::StopDancing() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xAD290))(this);
}

BOOL SAMP::CPed::DoesDancing() {
	return ((BOOL(__thiscall *)(CPed *))SAMP_ADDROF(0xAD2D0))(this);
}

const char *SAMP::CPed::GetAnimationForDance(int nMove) {
	return ((const char *(__thiscall *)(CPed *, int))SAMP_ADDROF(0xAD2E0))(this, nMove);
}

void SAMP::CPed::DropStuff() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xAD370))(this);
}

int SAMP::CPed::GetStuff() {
	return ((int(__thiscall *)(CPed *))SAMP_ADDROF(0xAD400))(this);
}

BOOL SAMP::CPed::ApplyStuff() {
	return ((BOOL(__thiscall *)(CPed *))SAMP_ADDROF(0xAD410))(this);
}

void SAMP::CPed::ProcessDrunk() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xAD560))(this);
}

int SAMP::CPed::GetDrunkLevel() {
	return ((int(__thiscall *)(CPed *))SAMP_ADDROF(0xAD710))(this);
}

void SAMP::CPed::SetDrunkLevel(int nValue) {
	((void(__thiscall *)(CPed *, int))SAMP_ADDROF(0xAD720))(this, nValue);
}

void SAMP::CPed::ApplyCommandTask(const char *szName, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11) {
	((void(__thiscall *)(CPed *, const char *, int, int, int, int, int, int, int, int, int))SAMP_ADDROF(0xAD740))(this, szName, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}

void SAMP::CPed::DestroyCommandTask() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xAD790))(this);
}

void SAMP::CPed::EnableCellphone(BOOL bEnable) {
	((void(__thiscall *)(CPed *, BOOL))SAMP_ADDROF(0xAD7E0))(this, bEnable);
}

BOOL SAMP::CPed::UsingCellphone() {
	return ((BOOL(__thiscall *)(CPed *))SAMP_ADDROF(0xAD810))(this);
}

void SAMP::CPed::SetFightingStyle(int nStyle) {
	((void(__thiscall *)(CPed *, int))SAMP_ADDROF(0xAD840))(this, nStyle);
}

void SAMP::CPed::StartUrinating() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xAD870))(this);
}

void SAMP::CPed::StopUrinating() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xAD950))(this);
}

BOOL SAMP::CPed::DoesUrinating() {
	return ((BOOL(__thiscall *)(CPed *))SAMP_ADDROF(0xAD9D0))(this);
}

const char *SAMP::CPed::GetLoadedShoppingDataSubsection() {
	return ((const char *(__thiscall *)(CPed *))SAMP_ADDROF(0xADA50))(this);
}

void SAMP::CPed::LoadShoppingDataSubsection(const char *szName) {
	((void(__thiscall *)(CPed *, const char *))SAMP_ADDROF(0xADA70))(this, szName);
}

CPed *SAMP::CPed::GetAimedPed() {
	return ((::CPed *(__thiscall *)(CPed *))SAMP_ADDROF(0xAE6D0))(this);
}

void SAMP::CPed::SetKeys(short controllerState, short sLeftStickX, short sLeftStickY) {
	((void(__thiscall *)(CPed *, short, short, short))SAMP_ADDROF(0xAEAB0))(this, controllerState, sLeftStickX, sLeftStickY);
}

short SAMP::CPed::GetKeys(short *pLeftStickX, short *pLeftStickY) {
	return ((short(__thiscall *)(CPed *, short *, short *))SAMP_ADDROF(0xAED40))(this, pLeftStickX, pLeftStickY);
}

void SAMP::CPed::CreateArrow(int nColor) {
	((void(__thiscall *)(CPed *, int))SAMP_ADDROF(0xAEEA0))(this, nColor);
}

void SAMP::CPed::SetModelIndex(int nModel) {
	((void(__thiscall *)(CPed *, int))SAMP_ADDROF(0xAF6C0))(this, nModel);
}

void SAMP::CPed::Kill() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xAF740))(this);
}

void SAMP::CPed::SetWeaponAmmo(unsigned char nWeapon, unsigned short nAmmo) {
	((void(__thiscall *)(CPed *, unsigned char, unsigned short))SAMP_ADDROF(0xAF7F0))(this, nWeapon, nAmmo);
}

void SAMP::CPed::ProcessDancing() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xAF820))(this);
}

void SAMP::CPed::GiveStuff(int nType) {
	((void(__thiscall *)(CPed *, int))SAMP_ADDROF(0xAFA40))(this, nType);
}

void SAMP::CPed::Destroy() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xB0710))(this);
}

void SAMP::CPed::SetCameraMode(char nMode) {
	((void(__thiscall *)(CPed *, char))SAMP_ADDROF(0x13F70))(this, nMode);
}

void SAMP::CPed::SetCameraExtZoomAndAspectRatio(float fExtZoom, float fAspectRatio) {
	((void(__thiscall *)(CPed *, float, float))SAMP_ADDROF(0x13F90))(this, fExtZoom, fAspectRatio);
}

BOOL SAMP::CPed::HasAccessory() {
	return ((BOOL(__thiscall *)(CPed *))SAMP_ADDROF(0xAE5A0))(this);
}

void SAMP::CPed::DeleteAccessory(int nSlot) {
	((void(__thiscall *)(CPed *, int))SAMP_ADDROF(0xAE5C0))(this, nSlot);
}

BOOL SAMP::CPed::GetAccessoryState(int nSlot) {
	return ((BOOL(__thiscall *)(CPed *, int))SAMP_ADDROF(0xAE620))(this, nSlot);
}

void SAMP::CPed::DeleteAllAccessories() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xB0220))(this);
}

void SAMP::CPed::AddAccessory(int nSlot, const Accessory *pInfo) {
	((void(__thiscall *)(CPed *, int, const Accessory *))SAMP_ADDROF(0xB0280))(this, nSlot, pInfo);
}

SAMP::CObject *SAMP::CPed::GetAccessory(int nSlot) {
	return ((CObject *(__thiscall *)(CPed *, int))SAMP_ADDROF(0x13330))(this, nSlot);
}