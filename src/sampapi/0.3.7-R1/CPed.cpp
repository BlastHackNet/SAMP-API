/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CPed.h"

SAMPAPI_BEGIN_V037R1

CPed::CPed() {
    ((void(__thiscall*)(CPed*))GetAddress(0xA6330))(this);
}

CPed::CPed(unsigned char nPlayerNumber, int nModel, CVector position, float fRotation) {
    ((void(__thiscall*)(CPed*, unsigned char, int, CVector, float))GetAddress(0xAB580))(this, nPlayerNumber, nModel, position, fRotation);
}

CPed::~CPed() {
}

void CPed::ResetPointers() {
    ((void(__thiscall*)(CPed*))GetAddress(0xA6470))(this);
}

void CPed::SetInitialState() {
    ((void(__thiscall*)(CPed*))GetAddress(0xA6490))(this);
}

AimStuff::Aim* CPed::GetAim() {
    return ((AimStuff::Aim * (__thiscall*)(CPed*)) GetAddress(0xA64E0))(this);
}

void CPed::SetAim(const AimStuff::Aim* pAim) {
    ((void(__thiscall*)(CPed*, const AimStuff::Aim*))GetAddress(0xA64F0))(this, pAim);
}

char CPed::GetCurrentWeapon() {
    return ((char(__thiscall*)(CPed*))GetAddress(0xA6510))(this);
}

GTAREF CPed::GetVehicleRef() {
    return ((GTAREF(__thiscall*)(CPed*))GetAddress(0xA6550))(this);
}

void CPed::DeleteArrow() {
    ((void(__thiscall*)(CPed*))GetAddress(0xA6570))(this);
}

BOOL CPed::IsOnScreen() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xA65A0))(this);
}

void CPed::SetImmunities(int BP, int FP, int EP, int CP, int MP) {
    ((void(__thiscall*)(CPed*, int, int, int, int, int))GetAddress(0xA65C0))(this, BP, FP, EP, CP, MP);
}

float CPed::GetHealth() {
    return ((float(__thiscall*)(CPed*))GetAddress(0xA6610))(this);
}

void CPed::SetHealth(float fValue) {
    ((void(__thiscall*)(CPed*, float))GetAddress(0xA6630))(this, fValue);
}

float CPed::GetArmour() {
    return ((float(__thiscall*)(CPed*))GetAddress(0xA6650))(this);
}

void CPed::SetArmour(float fValue) {
    ((void(__thiscall*)(CPed*, float))GetAddress(0xA6670))(this, fValue);
}

int CPed::GetFlags() {
    return ((int(__thiscall*)(CPed*))GetAddress(0xA6690))(this);
}

void CPed::SetFlags(int nValue) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xA66B0))(this, nValue);
}

BOOL CPed::IsDead() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xA66D0))(this);
}

char CPed::GetState() {
    return ((char(__thiscall*)(CPed*))GetAddress(0xA6700))(this);
}

void CPed::SetState(char nValue) {
    ((void(__thiscall*)(CPed*, char))GetAddress(0xA6710))(this, nValue);
}

void CPed::SetRotation(float fValue) {
    ((void(__thiscall*)(CPed*, float))GetAddress(0xA67D0))(this, fValue);
}

void CPed::ForceRotation(float fValue) {
    ((void(__thiscall*)(CPed*, float))GetAddress(0xA6820))(this, fValue);
}

BOOL CPed::IsPassenger() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xA6880))(this);
}

CVehicle* CPed::GetVehicle() {
    return ((CVehicle * (__thiscall*)(CPed*)) GetAddress(0xA68C0))(this);
}

void CPed::ClearWeapons() {
    ((void(__thiscall*)(CPed*))GetAddress(0xA68D0))(this);
}

void CPed::SetArmedWeapon(int nWeapon, bool bGameFunc) {
    ((void(__thiscall*)(CPed*, int, bool))GetAddress(0xA6920))(this, nWeapon, bGameFunc);
}

float CPed::GetDistanceToEntity(const CEntity* pEntity) {
    return ((float(__thiscall*)(CPed*, const CEntity*))GetAddress(0xA6A60))(this, pEntity);
}

int CPed::GetVehicleSeatIndex() {
    return ((int(__thiscall*)(CPed*))GetAddress(0xA6AC0))(this);
}

void CPed::PutIntoVehicle(GTAREF vehicle, int nSeat) {
    ((void(__thiscall*)(CPed*, unsigned long, int))GetAddress(0xA6B50))(this, vehicle, nSeat);
}

void CPed::EnterVehicle(GTAREF vehicle, BOOL bAsPassenger) {
    ((void(__thiscall*)(CPed*, unsigned long, bool))GetAddress(0xA6CD0))(this, vehicle, bAsPassenger);
}

void CPed::ExitVehicle() {
    ((void(__thiscall*)(CPed*))GetAddress(0xA6DA0))(this);
}

void CPed::WarpFromVehicle(CVector putAt) {
    ((void(__thiscall*)(CPed*, CVector))GetAddress(0xA6E30))(this, putAt);
}

void CPed::SetSpawnInfo(const CVector* pPosition, float fRotation) {
    ((void(__thiscall*)(CPed*, const CVector*, float))GetAddress(0xA7010))(this, pPosition, fRotation);
}

void CPed::SetControllable(BOOL bEnable) {
    ((void(__thiscall*)(CPed*, BOOL))GetAddress(0xA7050))(this, bEnable);
}

char CPed::GetDeathInfo(ID* pKiller) {
    return ((unsigned char(__thiscall*)(CPed*, ID*))GetAddress(0xA7110))(this, pKiller);
}

void CPed::HandsUp() {
    ((void(__thiscall*)(CPed*))GetAddress(0xA73D0))(this);
}

BOOL CPed::DoesHandsUp() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xA7420))(this);
}

void CPed::HoldObject(int nModel) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xA7480))(this, nModel);
}

void CPed::EnableJetpack() {
    ((void(__thiscall*)(CPed*))GetAddress(0xA75D0))(this);
}

void CPed::DisableJetpack() {
    ((void(__thiscall*)(CPed*))GetAddress(0xA7620))(this);
}

BOOL CPed::HasJetpack() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xA7680))(this);
}

BOOL CPed::EnablePassengerDrivebyMode() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xA7850))(this);
}

void CPed::Extinguish() {
    ((void(__thiscall*)(CPed*))GetAddress(0xA79B0))(this);
}

void CPed::SetWalkStyle(const char* szName) {
    ((void(__thiscall*)(CPed*, const char*))GetAddress(0xA7A90))(this, szName);
}

void CPed::PerformAnimation(const char* szName, const char* szFile, float fFramedelta, int nLoopA, int nLockX, int nLockY, int nLockF, int nTime) {
    ((void(__thiscall*)(CPed*, const char*, const char*, float, int, int, int, int, int))GetAddress(0xA7AF0))(this, szName, szFile, fFramedelta, nLoopA, nLockX, nLockY, nLockF, nTime);
}

void CPed::LinkToInterior(char nId, BOOL bRefresh) {
    ((void(__thiscall*)(CPed*, char, BOOL))GetAddress(0xA7C00))(this, nId, bRefresh);
}

void CPed::DestroyParachute() {
    ((void(__thiscall*)(CPed*))GetAddress(0xA7CA0))(this);
}

BOOL CPed::IsOnGround() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xA8120))(this);
}

void CPed::ResetDamageEntity() {
    ((void(__thiscall*)(CPed*))GetAddress(0xA8140))(this);
}

void CPed::RemoveWeaponModel(int nModel) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xA817C))(this, nModel);
}

float CPed::GetAimZ() {
    return ((float(__thiscall*)(CPed*))GetAddress(0xA81B0))(this);
}

void CPed::SetAimZ(float fValue) {
    ((void(__thiscall*)(CPed*, float))GetAddress(0xA81F0))(this, fValue);
}

::CEntity* CPed::GetContactEntity() {
    return ((::CEntity * (__thiscall*)(CPed*)) GetAddress(0xA8240))(this);
}

CVehicle* CPed::GetContactVehicle() {
    return ((::CVehicle * (__thiscall*)(CPed*)) GetAddress(0xA8250))(this);
}

int CPed::GetStat() {
    return ((int(__thiscall*)(CPed*))GetAddress(0xA8260))(this);
}

BOOL CPed::PerformingCustomAnimation() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xA82A0))(this);
}

void CPed::StartDancing(int nStyle) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xA8370))(this, nStyle);
}

void CPed::StopDancing() {
    ((void(__thiscall*)(CPed*))GetAddress(0xA83C0))(this);
}

BOOL CPed::DoesDancing() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xA8400))(this);
}

const char* CPed::GetAnimationForDance(int nMove) {
    return ((const char*(__thiscall*)(CPed*, int))GetAddress(0xA8410))(this, nMove);
}

void CPed::DropStuff() {
    ((void(__thiscall*)(CPed*))GetAddress(0xA84A0))(this);
}

void CPed::ProcessDrunk() {
    ((void(__thiscall*)(CPed*))GetAddress(0xA8690))(this);
}

int CPed::GetDrunkLevel() {
    return ((int(__thiscall*)(CPed*))GetAddress(0xA8840))(this);
}

void CPed::SetDrunkLevel(int nLevel) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xA8850))(this, nLevel);
}

void CPed::EnableCellphone(BOOL bEnable) {
    ((void(__thiscall*)(CPed*, BOOL))GetAddress(0xA8910))(this, bEnable);
}

BOOL CPed::UsingCellphone() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xA8940))(this);
}

void CPed::SetFightingStyle(int nStyle) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xA8970))(this, nStyle);
}

void CPed::StartUrinating() {
    ((void(__thiscall*)(CPed*))GetAddress(0xA89A0))(this);
}

void CPed::StopUrinating() {
    ((void(__thiscall*)(CPed*))GetAddress(0xA8A80))(this);
}

BOOL CPed::DoesUrinating() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xA8B00))(this);
}

void CPed::GetBonePosition(int nBone, CVector* pPosition) {
    ((void(__thiscall*)(CPed*, int, CVector*))GetAddress(0xA8D70))(this, nBone, pPosition);
}

void CPed::SetKeys(short controllerState, short sLeftStickX, short sLeftStickY) {
    ((void(__thiscall*)(CPed*, short, short, short))GetAddress(0xA9BE0))(this, controllerState, sLeftStickX, sLeftStickY);
}

void CPed::CreateArrow(int nColor) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xAA000))(this, nColor);
}

void CPed::GiveWeapon(int nWeapon, int nAmmo) {
    ((void(__thiscall*)(CPed*, int, int))GetAddress(0xAA060))(this, nWeapon, nAmmo);
}

void CPed::Kill() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAA8A0))(this);
}

void CPed::GiveStuff(int nType) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xAABA0))(this, nType);
}

short CPed::GetKeys(short* pLeftStickX, short* pLeftStickY) {
    return ((short(__thiscall*)(CPed*, short*, short*))GetAddress(0xA9E70))(this, pLeftStickX, pLeftStickY);
}

BOOL CPed::IsInVehicle() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xA6730))(this);
}

void CPed::Destroy() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAB840))(this);
}

void CPed::ApplyCommandTask(const char* szName, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11) {
    ((void(__thiscall*)(CPed*, const char*, int, int, int, int, int, int, int, int, int))GetAddress(0xA8870))(this, szName, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}

CWeapon* CPed::GetCurrentWeaponSlot() {
    return ((CWeapon * (__thiscall*)(CPed*)) GetAddress(0xA6A00))(this);
}

void CPed::SetCameraExtZoomAndAspectRatio(float fExtZoom, float fAspectRatio) {
    ((void(__thiscall*)(CPed*, float, float))GetAddress(0x10E60))(this, fExtZoom, fAspectRatio);
}

BOOL CPed::HasAccessory() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xA96D0))(this);
}

void CPed::DeleteAccessory(int nSlot) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xA96F0))(this, nSlot);
}

BOOL CPed::GetAccessoryState(int nSlot) {
    return ((BOOL(__thiscall*)(CPed*, int))GetAddress(0xA9750))(this, nSlot);
}

void CPed::DeleteAllAccessories() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAB380))(this);
}

void CPed::AddAccessory(int nSlot, const Accessory* pInfo) {
    ((void(__thiscall*)(CPed*, int, const Accessory*))GetAddress(0xAB3E0))(this, nSlot, pInfo);
}

CObject* CPed::GetAccessory(int nSlot) {
    return ((CObject * (__thiscall*)(CPed*, int)) GetAddress(0x101E0))(this, nSlot);
}

void CPed::SetModelIndex(int nModel) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xAA820))(this, nModel);
}

::CPed* CPed::GetAimedPed() {
    return ((::CPed * (__thiscall*)(CPed*)) GetAddress(0xA9800))(this);
}

void CPed::DestroyCommandTask() {
    ((void(__thiscall*)(CPed*))GetAddress(0xA88C0))(this);
}

int CPed::GetStuff() {
    return ((int(__thiscall*)(CPed*))GetAddress(0xA8530))(this);
}

BOOL CPed::ApplyStuff() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xA8540))(this);
}

float CPed::GetRotation() {
    return ((float(__thiscall*)(CPed*))GetAddress(0xA6750))(this);
}

void CPed::RemoveWeaponWhenEnteringVehicle() {
    ((void(__thiscall*)(CPed*))GetAddress(0xA69D0))(this);
}

BOOL CPed::CurrentWeaponHasAmmo() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xA6A20))(this);
}

::CEntity* CPed::GetFloor() {
    return ((::CEntity * (__thiscall*)(CPed*)) GetAddress(0xA72D0))(this);
}

CWeaponInfo* CPed::GetCurrentWeaponInfo() {
    return ((::CWeaponInfo * (__thiscall*)(CPed*)) GetAddress(0xA7380))(this);
}

unsigned short CPed::GetCurrentWeaponAmmo() {
    return ((unsigned short(__thiscall*)(CPed*))GetAddress(0xA7A10))(this);
}

CWeapon* CPed::GetWeaponSlot(int nWeapon) {
    return ((::CWeapon * (__thiscall*)(CPed*, int)) GetAddress(0xA7A50))(this, nWeapon);
}

BOOL CPed::OpenParachute() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xA7D90))(this);
}

void CPed::ProcessParachuteEvent(const char* szName) {
    ((void(__thiscall*)(CPed*, const char*))GetAddress(0xA7EE0))(this, szName);
}

const char* CPed::GetLoadedShoppingDataSubsection() {
    return ((const char*(__thiscall*)(CPed*))GetAddress(0xA8B80))(this);
}

void CPed::LoadShoppingDataSubsection(const char* szName) {
    ((void(__thiscall*)(CPed*, const char*))GetAddress(0xA8BA0))(this, szName);
}

void CPed::SetWeaponAmmo(unsigned char nWeapon, unsigned short nAmmo) {
    ((void(__thiscall*)(CPed*, unsigned char, unsigned short))GetAddress(0xAA950))(this, nWeapon, nAmmo);
}

void CPed::ProcessDancing() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAA980))(this);
}

SAMPAPI_END
