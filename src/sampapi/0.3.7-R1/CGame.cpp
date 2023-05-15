/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CGame.h"

SAMPAPI_BEGIN_V037R1

SAMPAPI_VAR CGame*& RefGame() {
    return *(CGame**)GetAddress(0x21A10C);
}

SAMPAPI_VAR char*& CGame::RefGameTextMessage() {
    return *(char**)GetAddress(0x13BEFC);
}

SAMPAPI_VAR BOOL* CGame::ArrayUsedPlayerSlots() {
    return (BOOL*)GetAddress(0x13BF08);
}

BOOL CGame::DoesHeadMoves() {
    return ((BOOL(__thiscall*)(CGame*))GetAddress(0x2D30))(this);
}

void* CGame::GetWindowHandle() {
    return ((void*(__thiscall*)(CGame*))GetAddress(0x2D00))(this);
}

CAudio* CGame::GetAudio() {
    return ((CAudio * (__thiscall*)(CGame*)) GetAddress(0x2D10))(this);
}

CCamera* CGame::GetCamera() {
    return ((CCamera * (__thiscall*)(CGame*)) GetAddress(0x2D20))(this);
}

CPed* CGame::GetPlayerPed() {
    return ((CPed * (__thiscall*)(CGame*)) GetAddress(0x1010))(this);
}

CGame::CGame() {
    ((void(__thiscall*)(CGame*))GetAddress(0x9B5C0))(this);
}

void CGame::SetCursorMode(int nMode, BOOL bImmediatelyHideCursor) {
    ((void(__thiscall*)(CGame*, int, BOOL))GetAddress(0x9BD30))(this, nMode, bImmediatelyHideCursor);
}

void CGame::ProcessInputEnabling() {
    ((void(__thiscall*)(CGame*))GetAddress(0x9BC10))(this);
}

void CGame::LetTimeGo(bool bLet) {
    ((void(__thiscall*)(CGame*, bool))GetAddress(0x9C0F0))(this, bLet);
}

void CGame::SetWorldWeather(char nWeather) {
    ((void(__thiscall*)(CGame*, char))GetAddress(0x9C130))(this, nWeather);
}

void CGame::SetFrameLimiter(int nValue) {
    ((void(__thiscall*)(CGame*, int))GetAddress(0x9C190))(this, nValue);
}

char CGame::GetCurrentInterior() {
    return ((char(__thiscall*)(CGame*))GetAddress(0x9C490))(this);
}

void CGame::EnableClock(bool bEnable) {
    ((void(__thiscall*)(CGame*, bool))GetAddress(0x9CA00))(this, bEnable);
}

void CGame::SetRequiredVehicleModels(unsigned char* pModelCount) {
    ((void(__thiscall*)(CGame*, unsigned char*))GetAddress(0x9CBB0))(this, pModelCount);
}

void CGame::CreateRacingCheckpoint() {
    ((void(__thiscall*)(CGame*))GetAddress(0x9D400))(this);
}

void CGame::ProcessCheckpoints() {
    ((void(__thiscall*)(CGame*))GetAddress(0x9D480))(this);
}

float CGame::FindGroundZ(CVector point) {
    return ((float(__thiscall*)(CGame*, CVector))GetAddress(0x9BA40))(this, point);
}

int CGame::IsStarted() {
    return ((int(__thiscall*)(CGame*))GetAddress(0x9BF70))(this);
}

void CGame::RequestModel(int nModel, int nLoadingStream) {
    ((void(__thiscall*)(CGame*, int, int))GetAddress(0x9BF80))(this, nModel, nLoadingStream);
}

void CGame::LoadRequestedModels() {
    ((void(__thiscall*)(CGame*))GetAddress(0x9BFA0))(this);
}

BOOL CGame::IsModelAvailable(int nModel) {
    return ((int(__thiscall*)(CGame*, int))GetAddress(0x9BFB0))(this, nModel);
}

void CGame::ReleaseModel(int nModel, bool bGameFunc) {
    ((void(__thiscall*)(CGame*, int, bool))GetAddress(0x9BFD0))(this, nModel, bGameFunc);
}

void CGame::SetWorldTime(char nHour, char nMinute) {
    ((void(__thiscall*)(CGame*, char, char))GetAddress(0x9C0A0))(this, nHour, nMinute);
}

void CGame::GetWorldTime(char* pHour, char* pMinute) {
    ((void(__thiscall*)(CGame*, char*, char*))GetAddress(0x9C0D0))(this, pHour, pMinute);
}

void CGame::SetMaxStats() {
    ((void(__thiscall*)(CGame*))GetAddress(0x9C1C0))(this);
}

void CGame::RefreshRenderer(float fX, float fY) {
    ((void(__thiscall*)(CGame*, float, float))GetAddress(0x9C200))(this, fX, fY);
}

void CGame::RequestAnimation(const char* szFile) {
    ((void(__thiscall*)(CGame*, const char*))GetAddress(0x9C230))(this, szFile);
}

int CGame::IsAnimationLoaded(const char* szFile) {
    return ((int(__thiscall*)(CGame*, const char*))GetAddress(0x9C250))(this, szFile);
}

void CGame::DisplayGameText(const char* szText, int nTime, int nSize) {
    ((void(__thiscall*)(CGame*, const char*, int, int))GetAddress(0x9C2C0))(this, szText, nTime, nSize);
}

GTAREF CGame::CreateMarker(int nIcon, CVector position, int nColor, int nType) {
    return ((unsigned long(__thiscall*)(CGame*, int, CVector, D3DCOLOR, int))GetAddress(0x9C340))(this, nIcon, position, nColor, nType);
}

void CGame::IncreasePlayerMoney(int nInc) {
    ((void(__thiscall*)(CGame*, int))GetAddress(0x9C520))(this, nInc);
}

int CGame::GetPlayerMoney() {
    return ((int(__thiscall*)(CGame*))GetAddress(0x9C540))(this);
}

const char* CGame::GetWeaponName(int nWeapon) {
    return ((const char*(__thiscall*)(CGame*, int))GetAddress(0x9C550))(this, nWeapon);
}

GTAREF CGame::CreateWeaponPickup(int nModel, int nAmmo, CVector position) {
    return ((unsigned long(__thiscall*)(CGame*, int, int, CVector))GetAddress(0x9C870))(this, nModel, nAmmo, position);
}

IDirect3DDevice9* CGame::GetDevice() {
    return ((IDirect3DDevice9 * (__thiscall*)(CGame*)) GetAddress(0x9C910))(this);
}

CWeaponInfo* CGame::GetWeaponInfo(int nWeapon, int nSkill) {
    return ((CWeaponInfo * (__thiscall*)(CGame*, int, int)) GetAddress(0x9C980))(this, nWeapon, nSkill);
}

void CGame::SetWorldGravity(float fValue) {
    ((void(__thiscall*)(CGame*, float))GetAddress(0x9C9A0))(this, fValue);
}

void CGame::SetWantedLevel(char nLevel) {
    ((void(__thiscall*)(CGame*, char))GetAddress(0x9C9C0))(this, nLevel);
}

void CGame::EnableZoneDisplaying(bool bEnable) {
    ((void(__thiscall*)(CGame*, bool))GetAddress(0x9CAC0))(this, bEnable);
}

void CGame::EnableStuntBonus(bool bEnable) {
    ((void(__thiscall*)(CGame*, bool))GetAddress(0x9CAE0))(this, bEnable);
}

void CGame::EnableHUD(BOOL bEnable) {
    ((void(__thiscall*)(CGame*, BOOL))GetAddress(0x9D310))(this, bEnable);
}

void CGame::ResetMoney() {
    ((void(__thiscall*)(CGame*))GetAddress(0x9D620))(this);
}

void CGame::DrawGangZone(float* pPos, char nColor) {
    ((void(__thiscall*)(CGame*, float*, D3DCOLOR))GetAddress(0x9C9E0))(this, pPos, nColor);
}

void CGame::DeleteMarker(GTAREF handle) {
    ((void(__thiscall*)(CGame*, GTAREF))GetAddress(0x9C470))(this, handle);
}

void CGame::LoadAnimationsAndModels() {
    ((void(__thiscall*)(CGame*))GetAddress(0x9CE00))(this);
}

int CGame::IsMenuVisible() {
    return ((int(__thiscall*)(CGame*))GetAddress(0x9BF60))(this);
}

BOOL CGame::UsingGamepad() {
    return ((BOOL(__thiscall*)(CGame*))GetAddress(0x9D120))(this);
}

void CGame::SetCheckpoint(CVector* pPosition, CVector* pSize) {
    ((void(__thiscall*)(CGame*, CVector*, CVector*))GetAddress(0x9D340))(this, pPosition, pSize);
}

void CGame::SetRacingCheckpoint(int nType, CVector* pPosition, CVector* pNextPosition, float fSize) {
    ((void(__thiscall*)(CGame*, int, CVector*, CVector*, float))GetAddress(0x9D660))(this, nType, pPosition, pNextPosition, fSize);
}

void CGame::InitGame() {
    ((void(__thiscall*)(CGame*))GetAddress(0x9BED0))(this);
}

void CGame::StartGame() {
    ((void(__thiscall*)(CGame*))GetAddress(0x9BF20))(this);
}

void CGame::DeleteRacingCheckpoint() {
    ((void(__thiscall*)(CGame*))GetAddress(0x9C310))(this);
}

CPed* CGame::CreatePed(int nModel, CVector position, float fRotation, int a6, int a7) {
    return ((CPed * (__thiscall*)(CGame*, int, CVector, float, int, int)) GetAddress(0x9B750))(this, nModel, position, fRotation, a6, a7);
}

CVehicle* CGame::CreateVehicle(int nModel, CVector position, float fRotation, BOOL bHasSiren) {
    return ((CVehicle * (__thiscall*)(CGame*, int, CVector, float, int)) GetAddress(0x9B890))(this, nModel, position, fRotation, bHasSiren);
}

CObject* CGame::CreateObject(int nModel, CVector position, CVector rotation, float fDrawDistance) {
    return ((CObject * (__thiscall*)(CGame*, int, CVector, CVector, float)) GetAddress(0x9B970))(this, nModel, position, rotation, fDrawDistance);
}

void CGame::DisableTrainTraffic() {
    ((void(__thiscall*)(CGame*))GetAddress(0x9C1F0))(this);
}

void CGame::ReleaseAnimation(const char* szFile) {
    ((void(__thiscall*)(CGame*, const char*))GetAddress(0x9C270))(this, szFile);
}

void CGame::UpdateFarClippingPlane() {
    ((void(__thiscall*)(CGame*))GetAddress(0x9C4B0))(this);
}

void CGame::CreatePickup(int nModel, int nType, CVector position, GTAREF* handle) {
    ((void(__thiscall*)(CGame*, int, int, CVector, GTAREF*))GetAddress(0x9C7A0))(this, nModel, nType, position, handle);
}

void CGame::Restart() {
    ((void(__thiscall*)(CGame*))GetAddress(0x9C950))(this);
}

void CGame::SetNumberOfIntroTextLinesThisFrame(unsigned short nValue) {
    ((void(__thiscall*)(CGame*, unsigned short))GetAddress(0x9C9D0))(this, nValue);
}

void CGame::LoadScene(const char* szFile) {
    ((void(__thiscall*)(CGame*, const char*))GetAddress(0x9CB50))(this, szFile);
}

int CGame::GetUsedMemory() {
    return ((int(__thiscall*)(CGame*))GetAddress(0x9CB70))(this);
}

int CGame::GetStreamingMemory() {
    return ((int(__thiscall*)(CGame*))GetAddress(0x9CB80))(this);
}

int CGame::GetTimer() {
    return ((int(__thiscall*)(CGame*))GetAddress(0x9CCD0))(this);
}

void CGame::LoadCollisionFile(const char* szFile) {
    ((void(__thiscall*)(CGame*, const char*))GetAddress(0x9D0E0))(this, szFile);
}

void CGame::LoadCullZone(const char* szLine) {
    ((void(__thiscall*)(CGame*, const char*))GetAddress(0x9D100))(this, szLine);
}

void CGame::DisableAutoAiming() {
    ((void(__thiscall*)(CGame*))GetAddress(0x9D130))(this);
}

void CGame::EnableRadar(BOOL bEnable) {
    ((void(__thiscall*)(CGame*, BOOL))GetAddress(0x9C2A0))(this, bEnable);
}

void CGame::Sleep(int elapsed, int fpsLimit) {
    ((void(__thiscall*)(CGame*, int, int))GetAddress(0x9B6D0))(this, elapsed, fpsLimit);
}

BOOL CGame::RemovePed(CPed* pPed) {
    return ((BOOL(__thiscall*)(CGame*, CPed*))GetAddress(0x9B850))(this, pPed);
}

void CGame::ProcessFrameLimiter() {
    ((void(__thiscall*)(CGame*))GetAddress(0x9D170))(this);
}

SAMPAPI_END
