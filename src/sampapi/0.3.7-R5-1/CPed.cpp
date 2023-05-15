/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CPed.h"

SAMPAPI_BEGIN_V037R5_1

CPed::CPed() {
    ((void(__thiscall*)(CPed*))GetAddress(0xABA70))(this);
}

CPed::CPed(int nPlayerNumber, int nModel, CVector position, float fRotation) {
    ((void(__thiscall*)(CPed*, int, int, CVector, float))GetAddress(0xB0CE0))(this, nPlayerNumber, nModel, position, fRotation);
}

CPed::~CPed() {
}

void CPed::ResetPointers() {
    ((void(__thiscall*)(CPed*))GetAddress(0xABBB0))(this);
}

void CPed::SetInitialState() {
    ((void(__thiscall*)(CPed*))GetAddress(0xABBD0))(this);
}

AimStuff::Aim* CPed::GetAim() {
    return ((AimStuff::Aim * (__thiscall*)(CPed*)) GetAddress(0xABBF0))(this);
}

void CPed::SetAim(const AimStuff::Aim* pAim) {
    ((void(__thiscall*)(CPed*, const AimStuff::Aim*))GetAddress(0xABC30))(this, pAim);
}

char CPed::GetCurrentWeapon() {
    return ((char(__thiscall*)(CPed*))GetAddress(0xABC50))(this);
}

GTAREF CPed::GetVehicleRef() {
    return ((GTAREF(__thiscall*)(CPed*))GetAddress(0xABC90))(this);
}

void CPed::DeleteArrow() {
    ((void(__thiscall*)(CPed*))GetAddress(0xABCB0))(this);
}

BOOL CPed::IsOnScreen() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xABCE0))(this);
}

void CPed::SetImmunities(BOOL BP, BOOL FP, BOOL EP, BOOL CP, BOOL MP) {
    ((void(__thiscall*)(CPed*, BOOL, BOOL, BOOL, BOOL, BOOL))GetAddress(0xABD00))(this, BP, FP, EP, CP, MP);
}

float CPed::GetHealth() {
    return ((float(__thiscall*)(CPed*))GetAddress(0xABD50))(this);
}

void CPed::SetHealth(float fValue) {
    ((void(__thiscall*)(CPed*, float))GetAddress(0xABD70))(this, fValue);
}

float CPed::GetArmour() {
    return ((float(__thiscall*)(CPed*))GetAddress(0xABD90))(this);
}

void CPed::SetArmour(float fValue) {
    ((void(__thiscall*)(CPed*, float))GetAddress(0xABDB0))(this, fValue);
}

int CPed::GetFlags() {
    return ((int(__thiscall*)(CPed*))GetAddress(0xABDD0))(this);
}

void CPed::SetFlags(int nValue) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xABDF0))(this, nValue);
}

BOOL CPed::IsDead() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xABE10))(this);
}

char CPed::GetState() {
    return ((char(__thiscall*)(CPed*))GetAddress(0xABE40))(this);
}

void CPed::SetState(char nValue) {
    ((void(__thiscall*)(CPed*, char))GetAddress(0xABE50))(this, nValue);
}

float CPed::GetRotation() {
    return ((float(__thiscall*)(CPed*))GetAddress(0xABE90))(this);
}

void CPed::ForceRotation(float fValue) {
    ((void(__thiscall*)(CPed*, float))GetAddress(0xABF10))(this, fValue);
}

void CPed::SetRotation(float fValue) {
    ((void(__thiscall*)(CPed*, float))GetAddress(0xABF60))(this, fValue);
}

BOOL CPed::IsPassenger() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xABFC0))(this);
}

::CVehicle* CPed::GetVehicle() {
    return ((::CVehicle * (__thiscall*)(CPed*)) GetAddress(0xAC000))(this);
}

void CPed::ClearWeapons() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAC010))(this);
}

void CPed::SetArmedWeapon(int nWeapon, bool bGameFunc) {
    ((void(__thiscall*)(CPed*, int, bool))GetAddress(0xAC060))(this, nWeapon, bGameFunc);
}

void CPed::RemoveWeaponWhenEnteringVehicle() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAC140))(this);
}

::CWeapon* CPed::GetCurrentWeaponSlot() {
    return ((::CWeapon * (__thiscall*)(CPed*)) GetAddress(0xAC140))(this);
}

BOOL CPed::CurrentWeaponHasAmmo() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xAC160))(this);
}

float CPed::GetDistanceToEntity(const CEntity* pEntity) {
    return ((float(__thiscall*)(CPed*, const CEntity*))GetAddress(0xAC1A0))(this, pEntity);
}

int CPed::GetVehicleSeatIndex() {
    return ((int(__thiscall*)(CPed*))GetAddress(0xAC200))(this);
}

void CPed::PutIntoVehicle(GTAREF vehicle, int nSeat) {
    ((void(__thiscall*)(CPed*, GTAREF, int))GetAddress(0xAC290))(this, vehicle, nSeat);
}

void CPed::EnterVehicle(GTAREF vehicle, BOOL bAsPassenger) {
    ((void(__thiscall*)(CPed*, GTAREF, BOOL))GetAddress(0xAC410))(this, vehicle, bAsPassenger);
}

void CPed::ExitVehicle() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAC4E0))(this);
}

void CPed::WarpFromVehicle(CVector putAt) {
    ((void(__thiscall*)(CPed*, CVector))GetAddress(0xAC570))(this, putAt);
}

void CPed::SetSpawnInfo(const CVector* pPosition, float fRotation) {
    ((void(__thiscall*)(CPed*, const CVector*, float))GetAddress(0xAC750))(this, pPosition, fRotation);
}

void CPed::SetControllable(BOOL bEnable) {
    ((void(__thiscall*)(CPed*, BOOL))GetAddress(0xAC790))(this, bEnable);
}

char CPed::GetDeathInfo(ID* pKiller) {
    return ((char(__thiscall*)(CPed*, ID*))GetAddress(0xAC850))(this, pKiller);
}

::CEntity* CPed::GetFloor() {
    return ((::CEntity * (__thiscall*)(CPed*)) GetAddress(0xACA10))(this);
}

::CWeaponInfo* CPed::GetCurrentWeaponInfo() {
    return ((::CWeaponInfo * (__thiscall*)(CPed*)) GetAddress(0xACAC0))(this);
}

void CPed::HandsUp() {
    ((void(__thiscall*)(CPed*))GetAddress(0xACB10))(this);
}

BOOL CPed::DoesHandsUp() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xACB60))(this);
}

void CPed::HoldObject(int nModel) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xACBC0))(this, nModel);
}

BOOL CPed::EnablePassengerDrivebyMode() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xACF90))(this);
}

void CPed::Extinguish() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAD0F0))(this);
}

unsigned short CPed::GetCurrentWeaponAmmo() {
    return ((unsigned short(__thiscall*)(CPed*))GetAddress(0xAD150))(this);
}

void CPed::EnableJetpack() {
    ((void(__thiscall*)(CPed*))GetAddress(0xACD10))(this);
}

void CPed::DisableJetpack() {
    ((void(__thiscall*)(CPed*))GetAddress(0xACD60))(this);
}

BOOL CPed::HasJetpack() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xACDC0))(this);
}

CWeapon* CPed::GetWeaponSlot(int nWeapon) {
    return ((::CWeapon * (__thiscall*)(CPed*, int)) GetAddress(0xAD190))(this, nWeapon);
}

void CPed::SetWalkStyle(const char* szName) {
    ((void(__thiscall*)(CPed*, const char*))GetAddress(0xAD1D0))(this, szName);
}

void CPed::PerformAnimation(const char* szName, const char* szFile, float fFramedelta, int nLoopA, int nLockX, int nLockY, int nLockF, int nTime) {
    ((void(__thiscall*)(CPed*, const char*, const char*, float, int, int, int, int, int))GetAddress(0xAD230))(this, szName, szFile, fFramedelta, nLoopA, nLockX, nLockY, nLockF, nTime);
}

void CPed::LinkToInterior(char nId, BOOL bRefresh) {
    ((void(__thiscall*)(CPed*, char, BOOL))GetAddress(0xAD340))(this, nId, bRefresh);
}

void CPed::DestroyParachute() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAD3E0))(this);
}

BOOL CPed::OpenParachute() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xAD4D0))(this);
}

void CPed::ProcessParachuteEvent(const char* szName) {
    ((void(__thiscall*)(CPed*, const char*))GetAddress(0xAD620))(this, szName);
}

BOOL CPed::IsOnGround() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xAD860))(this);
}

void CPed::ResetDamageEntity() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAD880))(this);
}

void CPed::RemoveWeaponModel(int nWeapon) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xAD8B0))(this, nWeapon);
}

float CPed::GetAimZ() {
    return ((float(__thiscall*)(CPed*))GetAddress(0xAD8F0))(this);
}

void CPed::SetAimZ(float fValue) {
    ((void(__thiscall*)(CPed*, float))GetAddress(0xAD930))(this, fValue);
}

::CEntity* CPed::GetContactEntity() {
    return ((::CEntity * (__thiscall*)(CPed*)) GetAddress(0xAD9A0))(this);
}

CVehicle* CPed::GetContactVehicle() {
    return ((::CVehicle * (__thiscall*)(CPed*)) GetAddress(0xAD9B0))(this);
}

int CPed::GetStat() {
    return ((int(__thiscall*)(CPed*))GetAddress(0xAD9E0))(this);
}

BOOL CPed::PerformingCustomAnimation() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xADA00))(this);
}

void CPed::StartDancing(int nStyle) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xADAD0))(this, nStyle);
}

void CPed::StopDancing() {
    ((void(__thiscall*)(CPed*))GetAddress(0xADB20))(this);
}

BOOL CPed::DoesDancing() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xADB60))(this);
}

const char* CPed::GetAnimationForDance(int nMove) {
    return ((const char*(__thiscall*)(CPed*, int))GetAddress(0xADB70))(this, nMove);
}

void CPed::DropStuff() {
    ((void(__thiscall*)(CPed*))GetAddress(0xADC00))(this);
}

int CPed::GetStuff() {
    return ((int(__thiscall*)(CPed*))GetAddress(0xADC90))(this);
}

BOOL CPed::ApplyStuff() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xADCA0))(this);
}

void CPed::ProcessDrunk() {
    ((void(__thiscall*)(CPed*))GetAddress(0xADDF0))(this);
}

int CPed::GetDrunkLevel() {
    return ((int(__thiscall*)(CPed*))GetAddress(0xADFA0))(this);
}

void CPed::SetDrunkLevel(int nValue) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xADFB0))(this, nValue);
}

void CPed::ApplyCommandTask(const char* szName, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11) {
    ((void(__thiscall*)(CPed*, const char*, int, int, int, int, int, int, int, int, int))GetAddress(0xADFD0))(this, szName, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}

void CPed::DestroyCommandTask() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAE020))(this);
}

void CPed::EnableCellphone(BOOL bEnable) {
    ((void(__thiscall*)(CPed*, BOOL))GetAddress(0xAE070))(this, bEnable);
}

BOOL CPed::UsingCellphone() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xAE0A0))(this);
}

void CPed::SetFightingStyle(int nStyle) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xAE0D0))(this, nStyle);
}

void CPed::StartUrinating() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAE100))(this);
}

void CPed::StopUrinating() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAE1E0))(this);
}

BOOL CPed::DoesUrinating() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xAE260))(this);
}

const char* CPed::GetLoadedShoppingDataSubsection() {
    return ((const char*(__thiscall*)(CPed*))GetAddress(0xAE2E0))(this);
}

void CPed::LoadShoppingDataSubsection(const char* szName) {
    ((void(__thiscall*)(CPed*, const char*))GetAddress(0xAE300))(this, szName);
}

::CPed* CPed::GetAimedPed() {
    return ((::CPed * (__thiscall*)(CPed*)) GetAddress(0xAEF60))(this);
}

void CPed::SetKeys(short controllerState, short sLeftStickX, short sLeftStickY) {
    ((void(__thiscall*)(CPed*, short, short, short))GetAddress(0xAF340))(this, controllerState, sLeftStickX, sLeftStickY);
}

short CPed::GetKeys(short* pLeftStickX, short* pLeftStickY) {
    return ((short(__thiscall*)(CPed*, short*, short*))GetAddress(0xAF5D0))(this, pLeftStickX, pLeftStickY);
}

void CPed::CreateArrow(int nColor) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xAF730))(this, nColor);
}

void CPed::SetModelIndex(int nModel) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xAFF50))(this, nModel);
}

void CPed::Kill() {
    ((void(__thiscall*)(CPed*))GetAddress(0xAFFD0))(this);
}

void CPed::SetWeaponAmmo(unsigned char nWeapon, unsigned short nAmmo) {
    ((void(__thiscall*)(CPed*, unsigned char, unsigned short))GetAddress(0xB0080))(this, nWeapon, nAmmo);
}

void CPed::ProcessDancing() {
    ((void(__thiscall*)(CPed*))GetAddress(0xB00B0))(this);
}

void CPed::GiveStuff(int nType) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xB02D0))(this, nType);
}

void CPed::Destroy() {
    ((void(__thiscall*)(CPed*))GetAddress(0xB0FA0))(this);
}

void CPed::SetCameraMode(char nMode) {
    ((void(__thiscall*)(CPed*, char))GetAddress(0x14340))(this, nMode);
}

void CPed::SetCameraExtZoomAndAspectRatio(float fExtZoom, float fAspectRatio) {
    ((void(__thiscall*)(CPed*, float, float))GetAddress(0x14360))(this, fExtZoom, fAspectRatio);
}

BOOL CPed::HasAccessory() {
    return ((BOOL(__thiscall*)(CPed*))GetAddress(0xAEE30))(this);
}

void CPed::DeleteAccessory(int nSlot) {
    ((void(__thiscall*)(CPed*, int))GetAddress(0xAEE50))(this, nSlot);
}

BOOL CPed::GetAccessoryState(int nSlot) {
    return ((BOOL(__thiscall*)(CPed*, int))GetAddress(0xAEEB0))(this, nSlot);
}

void CPed::DeleteAllAccessories() {
    ((void(__thiscall*)(CPed*))GetAddress(0xB0AB0))(this);
}

void CPed::AddAccessory(int nSlot, const Accessory* pInfo) {
    ((void(__thiscall*)(CPed*, int, const Accessory*))GetAddress(0xB0B10))(this, nSlot, pInfo);
}

CObject* CPed::GetAccessory(int nSlot) {
    return ((CObject * (__thiscall*)(CPed*, int)) GetAddress(0x13680))(this, nSlot);
}

char CPed::GetCameraMode() {
    return ((char(__thiscall*)(CPed*))GetAddress(0x2CD0))(this);
}

void CPed::GetBonePosition(unsigned int boneId, CVector *outPosition) {
    ((void(__thiscall*)(CPed*, unsigned int, CVector*))GetAddress(0xAE480))(this, boneId, outPosition);
}

SAMPAPI_END
