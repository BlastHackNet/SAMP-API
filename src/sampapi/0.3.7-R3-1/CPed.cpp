/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CPed.h"

SAMPAPI_BEGIN_V037R3_1

CPed::CPed() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAB1E0))(this);
}

CPed::CPed(int nPlayerNumber, int nModel, CVector position, float fRotation) {
    ((void(__thiscall*)(CPed*, int, int, CVector, float))GetAddress(0xB0450))(this, nPlayerNumber, nModel, position, fRotation);
}

CPed::~CPed() {
}

void CPed::ResetPointers() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAB320))(this);
}

void CPed::SetInitialState() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAB340))(this);
}

AimStuff::Aim* CPed::GetAim() {
    return ((AimStuff::Aim * (__thiscall*)(CPed*)) GetAddress(0xAB390))(this);
}

void CPed::SetAim(const AimStuff::Aim* pAim) {
    ((void(__thiscall*)(CPed*, const AimStuff::Aim*))GetAddress(0xAB3A0))(this, pAim);
}

char CPed::GetCurrentWeapon() {
    return ((char(__thiscall*)(CPed*))GetAddress(0xAB3C0))(this);
}

GTAREF CPed::GetVehicleRef() {
    return ((GTAREF(__thiscall*)(CPed*))GetAddress(0xAB400))(this);
}

void CPed::DeleteArrow() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAB420))(this);
}

BOOL CPed::IsOnScreen() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xAB450))(this);
}

void CPed::SetImmunities(BOOL BP, BOOL FP, BOOL EP, BOOL CP, BOOL MP) {
    ((void(__thiscall*)(CPed*, BOOL, BOOL, BOOL, BOOL, BOOL))GetAddress(0xAB470))(this, BP, FP, EP, CP, MP);
}

float CPed::GetHealth() {
    return ((float(__thiscall*)(CPed*))GetAddress(0xAB4C0))(this);
}

void CPed::SetHealth(float fValue) {
    ((void(__thiscall*)(CPed*, float))GetAddress(0xAB4E0))(this, fValue);
}

float CPed::GetArmour() {
    return ((float(__thiscall*)(CPed*))GetAddress(0xAB500))(this);
}

void CPed::SetArmour(float fValue) {
    ((void(__thiscall*)(CPed*, float))GetAddress(0xAB520))(this, fValue);
}

int CPed::GetFlags() {
    return ((int(__thiscall*)(CPed*))GetAddress(0xAB540))(this);
}

void CPed::SetFlags(int nValue) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xAB560))(this, nValue);
}

BOOL CPed::IsDead() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xAB580))(this);
}

char CPed::GetState() {
    return ((char(__thiscall*)(CPed*))GetAddress(0xAB5B0))(this);
}

void CPed::SetState(char nValue) {
    ((void(__thiscall*)(CPed*, char))GetAddress(0xAB5C0))(this, nValue);
}

float CPed::GetRotation() {
    return ((float(__thiscall*)(CPed*))GetAddress(0xAB600))(this);
}

void CPed::ForceRotation(float fValue) {
    ((void(__thiscall*)(CPed*, float))GetAddress(0xAB680))(this, fValue);
}

void CPed::SetRotation(float fValue) {
    ((void(__thiscall*)(CPed*, float))GetAddress(0xAB6D0))(this, fValue);
}

BOOL CPed::IsPassenger() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xAB730))(this);
}

::CVehicle* CPed::GetVehicle() {
    return ((::CVehicle * (__thiscall*)(CPed*)) GetAddress(0xAB770))(this);
}

void CPed::ClearWeapons() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAB780))(this);
}

void CPed::SetArmedWeapon(int nWeapon, bool bGameFunc) {
    ((void(__thiscall*)(CPed*, int, bool))GetAddress(0xAB7D0))(this, nWeapon, bGameFunc);
}

void CPed::RemoveWeaponWhenEnteringVehicle() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAB880))(this);
}

::CWeapon* CPed::GetCurrentWeaponSlot() {
    return ((::CWeapon * (__thiscall*)(CPed*)) GetAddress(0xAB8B0))(this);
}

BOOL CPed::CurrentWeaponHasAmmo() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xAB8D0))(this);
}

float CPed::GetDistanceToEntity(const CEntity* pEntity) {
    return ((float(__thiscall*)(CPed*, const CEntity*))GetAddress(0xAB910))(this, pEntity);
}

int CPed::GetVehicleSeatIndex() {
    return ((int(__thiscall*)(CPed*))GetAddress(0xAB970))(this);
}

void CPed::PutIntoVehicle(GTAREF vehicle, int nSeat) {
    ((void(__thiscall*)(CPed*, GTAREF, int))GetAddress(0xABA00))(this, vehicle, nSeat);
}

void CPed::EnterVehicle(GTAREF vehicle, BOOL bAsPassenger) {
    ((void(__thiscall*)(CPed*, GTAREF, BOOL))GetAddress(0xABB80))(this, vehicle, bAsPassenger);
}

void CPed::ExitVehicle() {
    ((void(__thiscall*)(CPed*))GetAddress(0xABC50))(this);
}

void CPed::WarpFromVehicle(CVector putAt) {
    ((void(__thiscall*)(CPed*, CVector))GetAddress(0xABCE0))(this, putAt);
}

void CPed::SetSpawnInfo(const CVector* pPosition, float fRotation) {
    ((void(__thiscall*)(CPed*, const CVector*, float))GetAddress(0xABEC0))(this, pPosition, fRotation);
}

void CPed::SetControllable(BOOL bEnable) {
    ((void(__thiscall*)(CPed*, BOOL))GetAddress(0xABF00))(this, bEnable);
}

char CPed::GetDeathInfo(ID* pKiller) {
    return ((char(__thiscall*)(CPed*, ID*))GetAddress(0xABFC0))(this, pKiller);
}

::CEntity* CPed::GetFloor() {
    return ((::CEntity * (__thiscall*)(CPed*)) GetAddress(0xAC180))(this);
}

::CWeaponInfo* CPed::GetCurrentWeaponInfo() {
    return ((::CWeaponInfo * (__thiscall*)(CPed*)) GetAddress(0xAC230))(this);
}

void CPed::HandsUp() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAC280))(this);
}

BOOL CPed::DoesHandsUp() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xAC2D0))(this);
}

void CPed::HoldObject(int nModel) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xAC330))(this, nModel);
}

BOOL CPed::EnablePassengerDrivebyMode() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xAC700))(this);
}

void CPed::Extinguish() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAC860))(this);
}

unsigned short CPed::GetCurrentWeaponAmmo() {
    return ((unsigned short(__thiscall*)(CPed*))GetAddress(0xAC8C0))(this);
}

void CPed::EnableJetpack() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAC480))(this);
}

void CPed::DisableJetpack() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAC4D0))(this);
}

BOOL CPed::HasJetpack() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xAC530))(this);
}

CWeapon* CPed::GetWeaponSlot(int nWeapon) {
    return ((::CWeapon * (__thiscall*)(CPed*, int)) GetAddress(0xAC900))(this, nWeapon);
}

void CPed::SetWalkStyle(const char* szName) {
    ((void(__thiscall*)(CPed*, const char*))GetAddress(0xAC940))(this, szName);
}

void CPed::PerformAnimation(const char* szName, const char* szFile, float fFramedelta, int nLoopA, int nLockX, int nLockY, int nLockF, int nTime) {
    ((void(__thiscall*)(CPed*, const char*, const char*, float, int, int, int, int, int))GetAddress(0xAC9A0))(this, szName, szFile, fFramedelta, nLoopA, nLockX, nLockY, nLockF, nTime);
}

void CPed::LinkToInterior(char nId, BOOL bRefresh) {
    ((void(__thiscall*)(CPed*, char, BOOL))GetAddress(0xACAB0))(this, nId, bRefresh);
}

void CPed::DestroyParachute() {
    ((void(__thiscall*)(CPed*))GetAddress(0xACB50))(this);
}

BOOL CPed::OpenParachute() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xACC40))(this);
}

void CPed::ProcessParachuteEvent(const char* szName) {
    ((void(__thiscall*)(CPed*, const char*))GetAddress(0xACD90))(this, szName);
}

BOOL CPed::IsOnGround() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xACFD0))(this);
}

void CPed::ResetDamageEntity() {
    ((void(__thiscall*)(CPed*))GetAddress(0xACFF0))(this);
}

void CPed::RemoveWeaponModel(int nWeapon) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xAD020))(this, nWeapon);
}

float CPed::GetAimZ() {
    return ((float(__thiscall*)(CPed*))GetAddress(0xAD060))(this);
}

void CPed::SetAimZ(float fValue) {
    ((void(__thiscall*)(CPed*, float))GetAddress(0xAD0A0))(this, fValue);
}

::CEntity* CPed::GetContactEntity() {
    return ((::CEntity * (__thiscall*)(CPed*)) GetAddress(0xAD110))(this);
}

CVehicle* CPed::GetContactVehicle() {
    return ((::CVehicle * (__thiscall*)(CPed*)) GetAddress(0xAD120))(this);
}

int CPed::GetStat() {
    return ((int(__thiscall*)(CPed*))GetAddress(0xAD150))(this);
}

BOOL CPed::PerformingCustomAnimation() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xAD170))(this);
}

void CPed::StartDancing(int nStyle) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xAD240))(this, nStyle);
}

void CPed::StopDancing() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAD290))(this);
}

BOOL CPed::DoesDancing() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xAD2D0))(this);
}

const char* CPed::GetAnimationForDance(int nMove) {
    return ((const char*(__thiscall*)(CPed*, int))GetAddress(0xAD2E0))(this, nMove);
}

void CPed::DropStuff() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAD370))(this);
}

int CPed::GetStuff() {
    return ((int(__thiscall*)(CPed*))GetAddress(0xAD400))(this);
}

BOOL CPed::ApplyStuff() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xAD410))(this);
}

void CPed::ProcessDrunk() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAD560))(this);
}

int CPed::GetDrunkLevel() {
    return ((int(__thiscall*)(CPed*))GetAddress(0xAD710))(this);
}

void CPed::SetDrunkLevel(int nValue) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xAD720))(this, nValue);
}

void CPed::ApplyCommandTask(const char* szName, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11) {
    ((void(__thiscall*)(CPed*, const char*, int, int, int, int, int, int, int, int, int))GetAddress(0xAD740))(this, szName, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}

void CPed::DestroyCommandTask() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAD790))(this);
}

void CPed::EnableCellphone(BOOL bEnable) {
    ((void(__thiscall*)(CPed*, BOOL))GetAddress(0xAD7E0))(this, bEnable);
}

BOOL CPed::UsingCellphone() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xAD810))(this);
}

void CPed::SetFightingStyle(int nStyle) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xAD840))(this, nStyle);
}

void CPed::StartUrinating() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAD870))(this);
}

void CPed::StopUrinating() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAD950))(this);
}

BOOL CPed::DoesUrinating() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xAD9D0))(this);
}

const char* CPed::GetLoadedShoppingDataSubsection() {
    return ((const char*(__thiscall*)(CPed*))GetAddress(0xADA50))(this);
}

void CPed::LoadShoppingDataSubsection(const char* szName) {
    ((void(__thiscall*)(CPed*, const char*))GetAddress(0xADA70))(this, szName);
}

::CPed* CPed::GetAimedPed() {
    return ((::CPed * (__thiscall*)(CPed*)) GetAddress(0xAE6D0))(this);
}

void CPed::SetKeys(short controllerState, short sLeftStickX, short sLeftStickY) {
    ((void(__thiscall*)(CPed*, short, short, short))GetAddress(0xAEAB0))(this, controllerState, sLeftStickX, sLeftStickY);
}

short CPed::GetKeys(short* pLeftStickX, short* pLeftStickY) {
    return ((short(__thiscall*)(CPed*, short*, short*))GetAddress(0xAED40))(this, pLeftStickX, pLeftStickY);
}

void CPed::CreateArrow(int nColor) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xAEEA0))(this, nColor);
}

void CPed::SetModelIndex(int nModel) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xAF6C0))(this, nModel);
}

void CPed::Kill() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAF740))(this);
}

void CPed::SetWeaponAmmo(unsigned char nWeapon, unsigned short nAmmo) {
    ((void(__thiscall*)(CPed*, unsigned char, unsigned short))GetAddress(0xAF7F0))(this, nWeapon, nAmmo);
}

void CPed::ProcessDancing() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAF820))(this);
}

void CPed::GiveStuff(int nType) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xAFA40))(this, nType);
}

void CPed::Destroy() {
    ((void(__thiscall*)(CPed*))GetAddress(0xB0710))(this);
}

void CPed::SetCameraMode(char nMode) {
    ((void(__thiscall*)(CPed*, char))GetAddress(0x13F70))(this, nMode);
}

void CPed::SetCameraExtZoomAndAspectRatio(float fExtZoom, float fAspectRatio) {
    ((void(__thiscall*)(CPed*, float, float))GetAddress(0x13F90))(this, fExtZoom, fAspectRatio);
}

BOOL CPed::HasAccessory() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xAE5A0))(this);
}

void CPed::DeleteAccessory(int nSlot) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xAE5C0))(this, nSlot);
}

BOOL CPed::GetAccessoryState(int nSlot) {
    return ((BOOL(__thiscall*)(CPed*, int))GetAddress(0xAE620))(this, nSlot);
}

void CPed::DeleteAllAccessories() {
    ((void(__thiscall*)(CPed*))GetAddress(0xB0220))(this);
}

void CPed::AddAccessory(int nSlot, const Accessory* pInfo) {
    ((void(__thiscall*)(CPed*, int, const Accessory*))GetAddress(0xB0280))(this, nSlot, pInfo);
}

CObject* CPed::GetAccessory(int nSlot) {
    return ((CObject * (__thiscall*)(CPed*, int)) GetAddress(0x13330))(this, nSlot);
}

char CPed::GetCameraMode() {
    return ((char(__thiscall*)(CPed*))GetAddress(0x2CB0))(this);
}

void CPed::GetBonePosition(unsigned int boneId, CVector *outPosition) {
    ((void(__thiscall*)(CPed*, unsigned int, CVector*))GetAddress(0xADBF0))(this, boneId, outPosition);
}

SAMPAPI_END
