/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CGame.h"

SAMPAPI_BEGIN_V037R3_1

SAMPAPI_VAR char*& CGame::RefGameTextMessage() {
    return *(char**)GetAddress(0x150084);
}

SAMPAPI_VAR BOOL* CGame::ArrayUsedPlayerSlots() {
    return (BOOL*)GetAddress(0x150090);
}

SAMPAPI_VAR CGame*& RefGame() {
    return *(CGame**)GetAddress(0x26E8F4);
}

CGame::CGame() {
    ((void(__thiscall*)(CGame*))GetAddress(0x9F870))(this);
}

CPed* CGame::GetPlayerPed() {
    return ((CPed * (__thiscall*)(CGame*)) GetAddress(0x1010))(this);
}

float CGame::FindGroundZ(CVector vPoint) {
    return ((float(__thiscall*)(CGame*, CVector))GetAddress(0x9FCF0))(this, vPoint);
}

void CGame::SetCursorMode(int nMode, BOOL bImmediatelyHideCursor) {
    ((void(__thiscall*)(CGame*, int, BOOL))GetAddress(0x9FFE0))(this, nMode, bImmediatelyHideCursor);
}

void CGame::InitGame() {
    ((void(__thiscall*)(CGame*))GetAddress(0xA0180))(this);
}

void CGame::StartGame() {
    ((void(__thiscall*)(CGame*))GetAddress(0xA01D0))(this);
}

BOOL CGame::IsMenuVisible() {
    return ((BOOL(__thiscall*)(CGame*))GetAddress(0xA0210))(this);
}

BOOL CGame::IsStarted() {
    return ((BOOL(__thiscall*)(CGame*))GetAddress(0xA0220))(this);
}

void CGame::RequestModel(int nModel, int nLoadingStream) {
    ((void(__thiscall*)(CGame*, int, int))GetAddress(0xA0230))(this, nModel, nLoadingStream);
}

void CGame::LoadRequestedModels() {
    ((void(__thiscall*)(CGame*))GetAddress(0xA0250))(this);
}

BOOL CGame::IsModelAvailable(int nModel) {
    return ((BOOL(__thiscall*)(CGame*, int))GetAddress(0xA0260))(this, nModel);
}

void CGame::ReleaseModel(int nModel, bool bGameFunc) {
    ((void(__thiscall*)(CGame*, int, bool))GetAddress(0xA0290))(this, nModel, bGameFunc);
}

void CGame::SetWorldTime(char nHour, char nMinute) {
    ((void(__thiscall*)(CGame*, char, char))GetAddress(0xA03A0))(this, nHour, nMinute);
}

void CGame::GetWorldTime(char* nHour, char* nMinute) {
    ((void(__thiscall*)(CGame*, char*, char*))GetAddress(0xA03D0))(this, nHour, nMinute);
}

void CGame::LetTimeGo(bool bLet) {
    ((void(__thiscall*)(CGame*, bool))GetAddress(0xA03F0))(this, bLet);
}

void CGame::SetWorldWeather(char nWeather) {
    ((void(__thiscall*)(CGame*, char))GetAddress(0xA0430))(this, nWeather);
}

void CGame::SetFrameLimiter(int nValue) {
    ((void(__thiscall*)(CGame*, int))GetAddress(0xA04A0))(this, nValue);
}

void CGame::SetMaxStats() {
    ((void(__thiscall*)(CGame*))GetAddress(0xA04D0))(this);
}

void CGame::DisableTrainTraffic() {
    ((void(__thiscall*)(CGame*))GetAddress(0xA0500))(this);
}

void CGame::RefreshRenderer(float fX, float fY) {
    ((void(__thiscall*)(CGame*, float, float))GetAddress(0xA0510))(this, fX, fY);
}

void CGame::RequestAnimation(const char* szFile) {
    ((void(__thiscall*)(CGame*, const char*))GetAddress(0xA0540))(this, szFile);
}

BOOL CGame::IsAnimationLoaded(const char* szFile) {
    return ((BOOL(__thiscall*)(CGame*, const char*))GetAddress(0xA0560))(this, szFile);
}

void CGame::ReleaseAnimation(const char* szFile) {
    ((void(__thiscall*)(CGame*, const char*))GetAddress(0xA0580))(this, szFile);
}

void CGame::DisplayGameText(const char* szText, int nTime, int nSize) {
    ((void(__thiscall*)(CGame*, const char*, int, int))GetAddress(0xA05D0))(this, szText, nTime, nSize);
}

void CGame::DeleteRacingCheckpoint() {
    ((void(__thiscall*)(CGame*))GetAddress(0xA0630))(this);
}

GTAREF CGame::CreateMarker(int nIcon, CVector vPosition, int nColor, int nType) {
    return ((GTAREF(__thiscall*)(CGame*, int, CVector, int, int))GetAddress(0xA0660))(this, nIcon, vPosition, nColor, nType);
}

void CGame::DeleteMarker(GTAREF handle) {
    ((void(__thiscall*)(CGame*, GTAREF))GetAddress(0xA0790))(this, handle);
}

char CGame::GetCurrentInterior() {
    return ((char(__thiscall*)(CGame*))GetAddress(0xA07B0))(this);
}

void CGame::UpdateFarClippingPlane() {
    ((void(__thiscall*)(CGame*))GetAddress(0xA07D0))(this);
}

void CGame::IncreasePlayerMoney(int nInc) {
    ((void(__thiscall*)(CGame*, int))GetAddress(0xA0840))(this, nInc);
}

int CGame::GetPlayerMoney() {
    return ((int(__thiscall*)(CGame*))GetAddress(0xA0860))(this);
}

const char* CGame::GetWeaponName(int nWeapon) {
    return ((const char*(__thiscall*)(CGame*, int))GetAddress(0xA0870))(this, nWeapon);
}

void CGame::CreatePickup(int nModel, int nType, CVector vPosition, GTAREF* handle) {
    ((void(__thiscall*)(CGame*, int, int, CVector, GTAREF*))GetAddress(0xA0AC0))(this, nModel, nType, vPosition, handle);
}

GTAREF CGame::CreateWeaponPickup(int nModel, int nAmmo, CVector vPosition) {
    return ((GTAREF(__thiscall*)(CGame*, int, int, CVector))GetAddress(0xA0BA0))(this, nModel, nAmmo, vPosition);
}

IDirect3DDevice9* CGame::GetDevice() {
    return ((IDirect3DDevice9 * (__thiscall*)(CGame*)) GetAddress(0xA0C40))(this);
}

void CGame::Restart() {
    ((void(__thiscall*)(CGame*))GetAddress(0xA0C80))(this);
}

CWeaponInfo* CGame::GetWeaponInfo(int nWeapon, int nSkill) {
    return ((CWeaponInfo * (__thiscall*)(CGame*, int, int)) GetAddress(0xA0CB0))(this, nWeapon, nSkill);
}

void CGame::SetWorldGravity(float fValue) {
    ((void(__thiscall*)(CGame*, float))GetAddress(0xA0CD0))(this, fValue);
}

void CGame::SetWantedLevel(char nLevel) {
    ((void(__thiscall*)(CGame*, char))GetAddress(0xA0CF0))(this, nLevel);
}

void CGame::SetNumberOfIntroTextLinesThisFrame(unsigned short nValue) {
    ((void(__thiscall*)(CGame*, unsigned short))GetAddress(0xA0D00))(this, nValue);
}

void CGame::DrawGangZone(float* pPos, char nColor) {
    ((void(__thiscall*)(CGame*, float*, char))GetAddress(0xA0D10))(this, pPos, nColor);
}

void CGame::EnableZoneDisplaying(bool bEnable) {
    ((void(__thiscall*)(CGame*, bool))GetAddress(0xA0DF0))(this, bEnable);
}

void CGame::EnableStuntBonus(bool bEnable) {
    ((void(__thiscall*)(CGame*, bool))GetAddress(0xA0E10))(this, bEnable);
}

void CGame::LoadScene(const char* szFile) {
    ((void(__thiscall*)(CGame*, const char*))GetAddress(0xA0E80))(this, szFile);
}

int CGame::GetUsedMemory() {
    return ((int(__thiscall*)(CGame*))GetAddress(0xA0EA0))(this);
}

int CGame::GetStreamingMemory() {
    return ((int(__thiscall*)(CGame*))GetAddress(0xA0EB0))(this);
}

void CGame::SetRequiredVehicleModels(unsigned char* pModelCount) {
    ((void(__thiscall*)(CGame*, unsigned char*))GetAddress(0xA0EE0))(this, pModelCount);
}

int CGame::GetTimer() {
    return ((int(__thiscall*)(CGame*))GetAddress(0xA1040))(this);
}

void CGame::LoadAnimationsAndModels() {
    ((void(__thiscall*)(CGame*))GetAddress(0xA1170))(this);
}

void CGame::LoadCollisionFile(const char* szFile) {
    ((void(__thiscall*)(CGame*, const char*))GetAddress(0xA1450))(this, szFile);
}

void CGame::LoadCullZone(const char* szLine) {
    ((void(__thiscall*)(CGame*, const char*))GetAddress(0xA1470))(this, szLine);
}

BOOL CGame::UsingGamepad() {
    return ((BOOL(__thiscall*)(CGame*))GetAddress(0xA1490))(this);
}

void CGame::DisableAutoAiming() {
    ((void(__thiscall*)(CGame*))GetAddress(0xA14A0))(this);
}

void CGame::EnableHUD(BOOL bEnable) {
    ((void(__thiscall*)(CGame*, BOOL))GetAddress(0xA1680))(this, bEnable);
}

void CGame::SetCheckpoint(CVector* pPos, CVector* pSize) {
    ((void(__thiscall*)(CGame*, CVector*, CVector*))GetAddress(0xA16B0))(this, pPos, pSize);
}

void CGame::CreateRacingCheckpoint() {
    ((void(__thiscall*)(CGame*))GetAddress(0xA1770))(this);
}

void CGame::ProcessCheckpoints() {
    ((void(__thiscall*)(CGame*))GetAddress(0xA17F0))(this);
}

void CGame::ResetMoney() {
    ((void(__thiscall*)(CGame*))GetAddress(0xA1990))(this);
}

void CGame::SetRacingCheckpoint(int nType, CVector* pCurrentPos, CVector* pNextPos, float fSize) {
    ((void(__thiscall*)(CGame*, int, CVector*, CVector*, float))GetAddress(0xA19D0))(this, nType, pCurrentPos, pNextPos, fSize);
}

void CGame::EnableRadar(BOOL bEnable) {
    ((void(__thiscall*)(CGame*, BOOL))GetAddress(0xA05B0))(this, bEnable);
}

void* CGame::GetWindowHandle() {
    return ((void*(__thiscall*)(CGame*))GetAddress(0x2CF0))(this);
}

CAudio* CGame::GetAudio() {
    return ((CAudio * (__thiscall*)(CGame*)) GetAddress(0x2D00))(this);
}

CCamera* CGame::GetCamera() {
    return ((CCamera * (__thiscall*)(CGame*)) GetAddress(0x2D10))(this);
}

BOOL CGame::DoesHeadMoves() {
    return ((BOOL(__thiscall*)(CGame*))GetAddress(0x2D20))(this);
}

void CGame::EnableClock(bool bEnable) {
    ((void(__thiscall*)(CGame*, bool))GetAddress(0xA0D30))(this, bEnable);
}

void CGame::Sleep(int elapsed, int fpsLimit) {
    ((void(__thiscall*)(CGame*, int, int))GetAddress(0x9F980))(this, elapsed, fpsLimit);
}

CPed* CGame::CreatePed(int nModel, CVector position, float fRotation, int a6, int a7) {
    return ((CPed * (__thiscall*)(CGame*, int, CVector, float, int, int)) GetAddress(0x9FA00))(this, nModel, position, fRotation, a6, a7);
}

BOOL CGame::RemovePed(CPed* pPed) {
    return ((BOOL(__thiscall*)(CGame*, CPed*))GetAddress(0x9FB00))(this, pPed);
}

CVehicle* CGame::CreateVehicle(int nModel, CVector position, float fRotation, BOOL bHasSiren) {
    return ((CVehicle * (__thiscall*)(CGame*, int, CVector, float, BOOL)) GetAddress(0x9FB40))(this, nModel, position, fRotation, bHasSiren);
}

CObject* CGame::CreateObject(int nModel, CVector position, CVector rotation, float fDrawDistance, char a11, char a12) {
    return ((CObject * (__thiscall*)(CGame*, int, CVector, CVector, float, char, char)) GetAddress(0x9FC20))(this, nModel, position, rotation, fDrawDistance, a11, a12);
}

void CGame::ProcessInputEnabling() {
    ((void(__thiscall*)(CGame*))GetAddress(0x9FEC0))(this);
}

void CGame::ProcessFrameLimiter() {
    ((void(__thiscall*)(CGame*))GetAddress(0xA14E0))(this);
}

SAMPAPI_END
