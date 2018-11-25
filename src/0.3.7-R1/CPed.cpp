/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CPed.h"

SAMP::CPed::CPed() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xA6330))(this);
}

SAMP::CPed::CPed(unsigned char nPlayerNumber, int nModel, CVector vPosition, float fRotation) {
	((void(__thiscall *)(CPed *, unsigned char, int, CVector, float))SAMP_ADDROF(0xAB580))(this, nPlayerNumber, nModel, vPosition, fRotation);
}

void SAMP::CPed::ResetPointers() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xA6470))(this);
}

void SAMP::CPed::SetInitialState() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xA6490))(this);
}

SAMP::AimStuff::Aim *SAMP::CPed::GetCurrentAim() {
	return ((AimStuff::Aim *(__thiscall *)(CPed *))SAMP_ADDROF(0xA64E0))(this);
}

void SAMP::CPed::SetCurrentAim(AimStuff::Aim *pAim) {
	((void(__thiscall *)(CPed *, AimStuff::Aim *))SAMP_ADDROF(0xA64F0))(this, pAim);
}

unsigned char SAMP::CPed::GetCurrentWeapon() {
	return ((unsigned char(__thiscall *)(CPed *))SAMP_ADDROF(0xA6510))(this);
}

int SAMP::CPed::GetCurrentVehicleIdx() {
	return ((int(__thiscall *)(CPed *))SAMP_ADDROF(0xA6550))(this);
}

void SAMP::CPed::HideMarker() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xA6570))(this);
}

BOOL SAMP::CPed::IsOnScreen() {
	return ((BOOL(__thiscall *)(CPed *))SAMP_ADDROF(0xA65A0))(this);
}

void SAMP::CPed::SetImmunities(int BP, int FP, int EP, int CP, int MP) {
	((void(__thiscall *)(CPed *, int, int, int, int, int))SAMP_ADDROF(0xA65C0))(this, BP, FP, EP, CP, MP);
}

float SAMP::CPed::GetHealth() {
	return ((float(__thiscall *)(CPed *))SAMP_ADDROF(0xA6610))(this);
}

void SAMP::CPed::SetHealth(float fValue) {
	((void(__thiscall *)(CPed *, float))SAMP_ADDROF(0xA6630))(this, fValue);
}

float SAMP::CPed::GetArmour() {
	return ((float(__thiscall *)(CPed *))SAMP_ADDROF(0xA6650))(this);
}

void SAMP::CPed::SetArmour(float fValue) {
	((void(__thiscall *)(CPed *, float))SAMP_ADDROF(0xA6670))(this, fValue);
}

int SAMP::CPed::GetFlags() {
	return ((int(__thiscall *)(CPed *))SAMP_ADDROF(0xA6690))(this);
}

void SAMP::CPed::SetFlags(int nValue) {
	((void(__thiscall *)(CPed *, int))SAMP_ADDROF(0xA66B0))(this, nValue);
}

BOOL SAMP::CPed::IsDead() {
	return ((BOOL(__thiscall *)(CPed *))SAMP_ADDROF(0xA66D0))(this);
}

int SAMP::CPed::GetState() {
	return ((int(__thiscall *)(CPed *))SAMP_ADDROF(0xA6700))(this);
}

void SAMP::CPed::SetState(int nValue) {
	((void(__thiscall *)(CPed *, int))SAMP_ADDROF(0xA6710))(this, nValue);
}

void SAMP::CPed::SetTargetRotation(float fValue) {
	((void(__thiscall *)(CPed *, float))SAMP_ADDROF(0xA67D0))(this, fValue);
}

void SAMP::CPed::ForceTargetRotation(float fValue) {
	((void(__thiscall *)(CPed *, float))SAMP_ADDROF(0xA6820))(this, fValue);
}

BOOL SAMP::CPed::IsPassenger() {
	return ((BOOL(__thiscall *)(CPed *))SAMP_ADDROF(0xA6880))(this);
}

CVehicle *SAMP::CPed::GetVehicle() {
	return ((CVehicle *(__thiscall *)(CPed *))SAMP_ADDROF(0xA68C0))(this);
}

void SAMP::CPed::ClearAllWeapons() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xA68D0))(this);
}

void SAMP::CPed::SetArmedWeapon(int nWeapon, bool bGameFunc) {
	((void(__thiscall *)(CPed *, int, bool))SAMP_ADDROF(0xA6920))(this, nWeapon, bGameFunc);
}

float SAMP::CPed::GetDistanceToEntity(CEntity *pEntity) {
	return ((float(__thiscall *)(CPed *, CEntity *))SAMP_ADDROF(0xA6A60))(this, pEntity);
}

int SAMP::CPed::GetSeatIdx() {
	return ((int(__thiscall *)(CPed *))SAMP_ADDROF(0xA6AC0))(this);
}

void SAMP::CPed::PutInVehicle(unsigned long hVehicle, int nSeatId) {
	((void(__thiscall *)(CPed *, unsigned long, int))SAMP_ADDROF(0xA6B50))(this, hVehicle, nSeatId);
}

void SAMP::CPed::EnterVehicle(unsigned long hVehicle, bool bPassenger) {
	((void(__thiscall *)(CPed *, unsigned long, bool))SAMP_ADDROF(0xA6CD0))(this, hVehicle, bPassenger);
}

void SAMP::CPed::ExitFromVehicle() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xA6DA0))(this);
}

void SAMP::CPed::RemoveFromVehicleAndPutAt(CVector vPosition) {
	((void(__thiscall *)(CPed *, CVector))SAMP_ADDROF(0xA6E30))(this, vPosition);
}

void SAMP::CPed::SetSpawn(CVector *pPos, float fRotation) {
	((void(__thiscall *)(CPed *, CVector *, float))SAMP_ADDROF(0xA7010))(this, pPos, fRotation);
}

void SAMP::CPed::TogglePlayerControllable(bool bEnable) {
	((void(__thiscall *)(CPed *, bool))SAMP_ADDROF(0xA7050))(this, bEnable);
}

unsigned char SAMP::CPed::FindDeathReasonAndResponsiblePlayer(ID *nPlayer) {
	return ((unsigned char(__thiscall *)(CPed *, ID *))SAMP_ADDROF(0xA7110))(this, nPlayer);
}

void SAMP::CPed::HandsUp() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xA73D0))(this);
}

BOOL SAMP::CPed::DoesHandsUp() {
	return ((BOOL(__thiscall *)(CPed *))SAMP_ADDROF(0xA7420))(this);
}

void SAMP::CPed::HoldObject(int nModel) {
	((void(__thiscall *)(CPed *, int))SAMP_ADDROF(0xA7480))(this, nModel);
}

void SAMP::CPed::StartJetpack() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xA75D0))(this);
}

void SAMP::CPed::StopJetpack() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xA7620))(this);
}

BOOL SAMP::CPed::HasJetpack() {
	return ((BOOL(__thiscall *)(CPed *))SAMP_ADDROF(0xA7680))(this);
}

BOOL SAMP::CPed::StartPassengerDriveByMode() {
	return ((BOOL(__thiscall *)(CPed *))SAMP_ADDROF(0xA7850))(this);
}

void SAMP::CPed::ExtinguishFire() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xA79B0))(this);
}

void SAMP::CPed::SetWalkStyle(int nStyle) {
	((void(__thiscall *)(CPed *, int))SAMP_ADDROF(0xA7A90))(this, nStyle);
}

void SAMP::CPed::SetMoney(int nCount) {
	((void(__thiscall *)(CPed *, int))SAMP_ADDROF(0xA7AC0))(this, nCount);
}

void SAMP::CPed::ApplyAnim(const char *szAnim, const char *szIFP, float fFramedelta, int bLockA, int bLockX, int bLockY, int bLockF, int nTime) {
	((void(__thiscall *)(CPed *, const char*, const char *, float, int, int, int, int, int))SAMP_ADDROF(0xA7AF0))(this, szAnim, szIFP, fFramedelta, bLockA, bLockX, bLockY, bLockF, nTime);
}

BOOL SAMP::CPed::IsPerformingAnimation(const char *szAnim) {
	return ((BOOL(__thiscall *)(CPed *, const char *))SAMP_ADDROF(0xA7BC0))(this, szAnim);
}

void SAMP::CPed::SetInterior(unsigned char nId, bool bRefresh) {
	((void(__thiscall *)(CPed *, unsigned char, bool))SAMP_ADDROF(0xA7C00))(this, nId, bRefresh);
}

void SAMP::CPed::CheckVehicleParachute() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xA7CA0))(this);
}

BOOL SAMP::CPed::IsOnGround() {
	return ((BOOL(__thiscall *)(CPed *))SAMP_ADDROF(0xA8120))(this);
}

void SAMP::CPed::ResetDamageEntity() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xA8140))(this);
}

void SAMP::CPed::SetWeaponModelIndex(int nModel) {
	((void(__thiscall *)(CPed *, int))SAMP_ADDROF(0xA817C))(this, nModel);
}

float SAMP::CPed::GetAimZ() {
	return ((float(__thiscall *)(CPed *))SAMP_ADDROF(0xA81B0))(this);
}

void SAMP::CPed::SetAimZ(float fValue) {
	((void(__thiscall *)(CPed *, float))SAMP_ADDROF(0xA81F0))(this, fValue);
}

CEntity *SAMP::CPed::GetContactEntity() {
	return ((::CEntity *(__thiscall *)(CPed *))SAMP_ADDROF(0xA8240))(this);
}

CVehicle *SAMP::CPed::GetContactVehicle() {
	return ((::CVehicle *(__thiscall *)(CPed *))SAMP_ADDROF(0xA8250))(this);
}

int SAMP::CPed::GetStat() {
	return ((int(__thiscall *)(CPed *))SAMP_ADDROF(0xA8260))(this);
}

BOOL SAMP::CPed::IsPerformingCustomAnim() {
	return ((BOOL(__thiscall *)(CPed *))SAMP_ADDROF(0xA82A0))(this);
}

void SAMP::CPed::StartDancing(int nStyle) {
	((void(__thiscall *)(CPed *, int))SAMP_ADDROF(0xA8370))(this, nStyle);
}

void SAMP::CPed::StopDancing() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xA83C0))(this);
}

BOOL SAMP::CPed::DoesDancing() {
	return ((BOOL(__thiscall *)(CPed *))SAMP_ADDROF(0xA8400))(this);
}

const char *SAMP::CPed::GetDanceAnimForMove(int nMove) {
	return ((const char *(__thiscall *)(CPed *, int))SAMP_ADDROF(0xA8410))(this, nMove);
}

void SAMP::CPed::DropStuff() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xA84A0))(this);
}

void SAMP::CPed::ProcessDrunk() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xA8690))(this);
}

unsigned int SAMP::CPed::GetDrunkLevel() {
	return ((unsigned int(__thiscall *)(CPed *))SAMP_ADDROF(0xA8840))(this);
}

void SAMP::CPed::SetDrunkLevel(int nLevel) {
	((void(__thiscall *)(CPed *, int))SAMP_ADDROF(0xA8850))(this, nLevel);
}

void SAMP::CPed::ToggleCellphone(bool bEnable) {
	((void(__thiscall *)(CPed *, bool))SAMP_ADDROF(0xA8910))(this, bEnable);
}

BOOL SAMP::CPed::IsCellphoneEnabled() {
	return ((BOOL(__thiscall *)(CPed *))SAMP_ADDROF(0xA8940))(this);
}

char SAMP::CPed::GetFightingStyle() {
	return ((char(__thiscall *)(CPed *))SAMP_ADDROF(0xA8950))(this);
}

void SAMP::CPed::SetFightingStyle(char nStyle) {
	((void(__thiscall *)(CPed *, char))SAMP_ADDROF(0xA8970))(this, nStyle);
}

void SAMP::CPed::StartUrinating() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xA89A0))(this);
}

void SAMP::CPed::StopUrinating() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xA8A80))(this);
}

BOOL SAMP::CPed::DoesUrinating() {
	return ((BOOL(__thiscall *)(CPed *))SAMP_ADDROF(0xA8B00))(this);
}

void SAMP::CPed::GetBonePosition(int nBone, CVector *pPos) {
	((void(__thiscall *)(CPed *, int, CVector *))SAMP_ADDROF(0xA8D70))(this, nBone, pPos);
}

void SAMP::CPed::SetKeys(unsigned short nKeys, unsigned short lrAnalog, unsigned short udAnalog) {
	((void(__thiscall *)(CPed *, unsigned short, unsigned short, unsigned short))SAMP_ADDROF(0xA9BE0))(this, nKeys, lrAnalog, udAnalog);
}

void SAMP::CPed::CreateMarker(D3DCOLOR dwColor) {
	((void(__thiscall *)(CPed *, D3DCOLOR))SAMP_ADDROF(0xAA000))(this, dwColor);
}

void SAMP::CPed::GiveWeapon(int nWeapon, int nAmmo) {
	((void(__thiscall *)(CPed *, int, int))SAMP_ADDROF(0xAA060))(this, nWeapon, nAmmo);
}

void SAMP::CPed::Kill() {
	((void(__thiscall *)(CPed *))SAMP_ADDROF(0xAA8A0))(this);
}

void SAMP::CPed::GiveStuff(eStuffType nType) {
	((void(__thiscall *)(CPed *, eStuffType))SAMP_ADDROF(0xAABA0))(this, nType);
}

unsigned short SAMP::CPed::GetKeys(short *pLeftStickX, short *pLeftStickY) {
	return ((unsigned short(__thiscall *)(CPed *, short *, short *))SAMP_ADDROF(0xA9E70))(this, pLeftStickX, pLeftStickY);
}

BOOL SAMP::CPed::IsInVehicle() {
	return ((BOOL(__thiscall *)(CPed *))SAMP_ADDROF(0xA6730))(this);
}

BOOL SAMP::CPed::Destroy() {
	return ((BOOL(__thiscall *)(CPed *))SAMP_ADDROF(0x9B850))(this);
}

void SAMP::CPed::ApplyCommandTask(const char *szTaskName, int p1, int p2, int p3, CVector *p4, int p5, float p6, int p7, int p8, int p9) {
	((void(__thiscall *)(CPed *, const char *, int, int, int, CVector *, int, float, int, int, int))SAMP_ADDROF(0xA8870))(this, szTaskName, p1, p2, p3, p4, p5, p6, p7, p8, p9);
}