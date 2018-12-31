/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CGame.h"

char *&SAMP::CGame::szGameTextMessage = *(char **)SAMP_ADDROF(0x150084);
bool *SAMP::CGame::aUsedPlayerSlots = (bool *)SAMP_ADDROF(0x150090);
SAMP::CGame *&SAMP::pGame = *(SAMP::CGame **)SAMP_ADDROF(0x26E8F4);

SAMP::CGame::CGame() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0x9F870))(this);
}

SAMP::CPed *SAMP::CGame::GetPlayerPed() {
	return ((SAMP::CPed *(__thiscall *)(CGame *))SAMP_ADDROF(0x1010))(this);
}

float SAMP::CGame::FindGroundZ(CVector vPoint) {
	return ((float(__thiscall *)(CGame *, CVector))SAMP_ADDROF(0x9FCF0))(this, vPoint);
}

void SAMP::CGame::SetCursorMode(int nMode, BOOL bImmediatelyHideCursor) {
	((void(__thiscall *)(CGame *, int, BOOL))SAMP_ADDROF(0x9FFE0))(this, nMode, bImmediatelyHideCursor);
}

void SAMP::CGame::InitGame() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0xA0180))(this);
}

void SAMP::CGame::StartGame() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0xA01D0))(this);
}

BOOL SAMP::CGame::IsMenuVisible() {
	return ((BOOL(__thiscall *)(CGame *))SAMP_ADDROF(0xA0210))(this);
}

BOOL SAMP::CGame::IsStarted() {
	return ((BOOL(__thiscall *)(CGame *))SAMP_ADDROF(0xA0220))(this);
}

void SAMP::CGame::RequestModel(int nModel, int nLoadingStream) {
	((void(__thiscall *)(CGame *, int, int))SAMP_ADDROF(0xA0230))(this, nModel, nLoadingStream);
}

void SAMP::CGame::LoadRequestedModels() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0xA0250))(this);
}

BOOL SAMP::CGame::IsModelAvailable(int nModel) {
	return ((BOOL(__thiscall *)(CGame *, int))SAMP_ADDROF(0xA0260))(this, nModel);
}

void SAMP::CGame::ReleaseModel(int nModel, bool bGameFunc) {
	((void(__thiscall *)(CGame *, int, bool))SAMP_ADDROF(0xA0290))(this, nModel, bGameFunc);
}

void SAMP::CGame::SetWorldTime(char nHour, char nMinute) {
	((void(__thiscall *)(CGame *, char, char))SAMP_ADDROF(0xA03A0))(this, nHour, nMinute);
}

void SAMP::CGame::GetWorldTime(char *nHour, char *nMinute) {
	((void(__thiscall *)(CGame *, char *, char *))SAMP_ADDROF(0xA03D0))(this, nHour, nMinute);
}

void SAMP::CGame::LetTimeGo(bool bLet) {
	((void(__thiscall *)(CGame *, bool))SAMP_ADDROF(0xA03F0))(this, bLet);
}

void SAMP::CGame::SetWorldWeather(char nWeather) {
	((void(__thiscall *)(CGame *, char))SAMP_ADDROF(0xA0430))(this, nWeather);
}

void SAMP::CGame::SetFrameLimiter(int nValue) {
	((void(__thiscall *)(CGame *, int))SAMP_ADDROF(0xA04A0))(this, nValue);
}

void SAMP::CGame::SetMaxStats() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0xA04D0))(this);
}

void SAMP::CGame::DisableTrainTraffic() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0xA0500))(this);
}

void SAMP::CGame::RefreshRenderer(float fX, float fY) {
	((void(__thiscall *)(CGame *, float, float))SAMP_ADDROF(0xA0510))(this, fX, fY);
}

void SAMP::CGame::RequestAnimation(const char *szFile) {
	((void(__thiscall *)(CGame *, const char *))SAMP_ADDROF(0xA0540))(this, szFile);
}

BOOL SAMP::CGame::IsAnimationLoaded(const char *szFile) {
	return ((BOOL(__thiscall *)(CGame *, const char *))SAMP_ADDROF(0xA0560))(this, szFile);
}

void SAMP::CGame::ReleaseAnimation(const char *szFile) {
	((void(__thiscall *)(CGame *, const char *))SAMP_ADDROF(0xA0580))(this, szFile);
}

void SAMP::CGame::DisplayGameText(const char *szText, int nTime, int nSize) {
	((void(__thiscall *)(CGame *, const char *, int, int))SAMP_ADDROF(0xA05D0))(this, szText, nTime, nSize);
}

void SAMP::CGame::DeleteRacingCheckpoint() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0xA0630))(this);
}

SAMP::GTAREF SAMP::CGame::CreateMarker(int nIcon, CVector vPosition, int nColor, int nType) {
	return ((GTAREF(__thiscall *)(CGame *, int, CVector, int, int))SAMP_ADDROF(0xA0660))(this, nIcon, vPosition, nColor, nType);
}

void SAMP::CGame::DeleteMarker(GTAREF handle) {
	((void(__thiscall *)(CGame *, GTAREF))SAMP_ADDROF(0xA0790))(this, handle);
}

char SAMP::CGame::GetCurrentInterior() {
	return ((char(__thiscall *)(CGame *))SAMP_ADDROF(0xA07B0))(this);
}

void SAMP::CGame::UpdateFarClippingPlane() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0xA07D0))(this);
}

void SAMP::CGame::IncreasePlayerMoney(int nInc) {
	((void(__thiscall *)(CGame *, int))SAMP_ADDROF(0xA0840))(this, nInc);
}

int SAMP::CGame::GetPlayerMoney() {
	return ((int(__thiscall *)(CGame *))SAMP_ADDROF(0xA0860))(this);
}

const char *SAMP::CGame::GetWeaponName(int nWeapon) {
	return ((const char *(__thiscall *)(CGame *, int))SAMP_ADDROF(0xA0870))(this, nWeapon);
}

void SAMP::CGame::CreatePickup(int nModel, int nType, CVector vPosition, GTAREF *handle) {
	((void(__thiscall *)(CGame *, int, int, CVector, GTAREF *))SAMP_ADDROF(0xA0AC0))(this, nModel, nType, vPosition, handle);
}

SAMP::GTAREF SAMP::CGame::CreateWeaponPickup(int nModel, int nAmmo, CVector vPosition) {
	return ((GTAREF(__thiscall *)(CGame *, int, int, CVector))SAMP_ADDROF(0xA0BA0))(this, nModel, nAmmo, vPosition);
}

IDirect3DDevice9 *SAMP::CGame::GetDevice() {
	return ((IDirect3DDevice9 *(__thiscall *)(CGame *))SAMP_ADDROF(0xA0C40))(this);
}

void SAMP::CGame::Restart() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0xA0C80))(this);
}

CWeaponInfo *SAMP::CGame::GetWeaponInfo(int nWeapon, int nSkill) {
	return ((CWeaponInfo *(__thiscall *)(CGame *, int, int))SAMP_ADDROF(0xA0CB0))(this, nWeapon, nSkill);
}

void SAMP::CGame::SetWorldGravity(float fValue) {
	((void(__thiscall *)(CGame *, float))SAMP_ADDROF(0xA0CD0))(this, fValue);
}

void SAMP::CGame::SetWantedLevel(char nLevel) {
	((void(__thiscall *)(CGame *, char))SAMP_ADDROF(0xA0CF0))(this, nLevel);
}

void SAMP::CGame::SetNumberOfIntroTextLinesThisFrame(unsigned short nValue) {
	((void(__thiscall *)(CGame *, unsigned short))SAMP_ADDROF(0xA0D00))(this, nValue);
}

void SAMP::CGame::DrawGangZone(float *pPos, char nColor) {
	((void(__thiscall *)(CGame *, float *, char))SAMP_ADDROF(0xA0D10))(this, pPos, nColor);
}

void SAMP::CGame::EnableZoneDisplaying(bool bEnable) {
	((void(__thiscall *)(CGame *, bool))SAMP_ADDROF(0xA0DF0))(this, bEnable);
}

void SAMP::CGame::EnableStuntBonus(bool bEnable) {
	((void(__thiscall *)(CGame *, bool))SAMP_ADDROF(0xA0E10))(this, bEnable);
}

void SAMP::CGame::LoadScene(const char *szFile) {
	((void(__thiscall *)(CGame *, const char *))SAMP_ADDROF(0xA0E80))(this, szFile);
}

int SAMP::CGame::GetUsedMemory() {
	return ((int(__thiscall *)(CGame *))SAMP_ADDROF(0xA0EA0))(this);
}

int SAMP::CGame::GetStreamingMemory() {
	return ((int(__thiscall *)(CGame *))SAMP_ADDROF(0xA0EB0))(this);
}

void SAMP::CGame::SetRequiredVehicleModels(unsigned char *pModelCount) {
	((void(__thiscall *)(CGame *, unsigned char *))SAMP_ADDROF(0xA0EE0))(this, pModelCount);
}

int SAMP::CGame::GetTimer() {
	return ((int(__thiscall *)(CGame *))SAMP_ADDROF(0xA1040))(this);
}

void SAMP::CGame::LoadAnimationsAndModels() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0xA1170))(this);
}

void SAMP::CGame::LoadCollisionFile(const char *szFile) {
	((void(__thiscall *)(CGame *, const char *))SAMP_ADDROF(0xA1450))(this, szFile);
}

void SAMP::CGame::LoadCullZone(const char *szLine) {
	((void(__thiscall *)(CGame *, const char *))SAMP_ADDROF(0xA1470))(this, szLine);
}

BOOL SAMP::CGame::UsingGamepad() {
	return ((BOOL(__thiscall *)(CGame *))SAMP_ADDROF(0xA1490))(this);
}

void SAMP::CGame::DisableAutoAiming() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0xA14A0))(this);
}

void SAMP::CGame::EnableHUD(BOOL bEnable) {
	((void(__thiscall *)(CGame *, BOOL))SAMP_ADDROF(0xA1680))(this, bEnable);
}

void SAMP::CGame::SetCheckpoint(CVector *pPos, CVector *pSize) {
	((void(__thiscall *)(CGame *, CVector *, CVector *))SAMP_ADDROF(0xA16B0))(this, pPos, pSize);
}

void SAMP::CGame::CreateRacingCheckpoint() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0xA1770))(this);
}

void SAMP::CGame::ProcessCheckpoints() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0xA17F0))(this);
}

void SAMP::CGame::ResetMoney() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0xA1990))(this);
}

void SAMP::CGame::SetRacingCheckpoint(int nType, CVector *pCurrentPos, CVector *pNextPos, float fSize) {
	((void(__thiscall *)(CGame *, int, CVector *, CVector *, float))SAMP_ADDROF(0xA19D0))(this, nType, pCurrentPos, pNextPos, fSize);
}

void SAMP::CGame::EnableRadar(BOOL bEnable) {
	((void(__thiscall *)(CGame *, BOOL))SAMP_ADDROF(0xA05B0))(this, bEnable);
}

void *SAMP::CGame::GetWindowHandle() {
	 return ((void *(__thiscall *)(CGame *))SAMP_ADDROF(0x2CF0))(this);
}

SAMP::CAudio *SAMP::CGame::GetAudio() {
	return ((CAudio *(__thiscall *)(CGame *))SAMP_ADDROF(0x2D00))(this);
}

SAMP::CCamera *SAMP::CGame::GetCamera() {
	return ((CCamera *(__thiscall *)(CGame *))SAMP_ADDROF(0x2D10))(this);
}

BOOL SAMP::CGame::DoesHeadMoves() {
	return ((BOOL(__thiscall *)(CGame *))SAMP_ADDROF(0x2D20))(this);
}

void SAMP::CGame::EnableClock(bool bEnable) {
	((void(__thiscall *)(CGame *, bool))SAMP_ADDROF(0xA0D30))(this, bEnable);
}

void SAMP::CGame::Sleep(int elapsed, int fpsLimit) {
	((void(__thiscall *)(CGame *, int, int))SAMP_ADDROF(0x9F980))(this, elapsed, fpsLimit);
}

SAMP::CPed *SAMP::CGame::CreatePed(int nModel, CVector position, float fRotation, int a6, int a7) {
	return ((CPed *(__thiscall *)(CGame *, int, CVector, float, int, int))SAMP_ADDROF(0x9FA00))(this, nModel, position, fRotation, a6, a7);
}

BOOL SAMP::CGame::RemovePed(CPed *pPed) {
	return ((BOOL(__thiscall *)(CGame *, CPed *))SAMP_ADDROF(0x9FB00))(this, pPed);
}

SAMP::CVehicle *SAMP::CGame::CreateVehicle(int nModel, CVector position, float fRotation, BOOL bHasSiren) {
	return ((CVehicle *(__thiscall *)(CGame *, int, CVector, float, BOOL))SAMP_ADDROF(0x9FB40))(this, nModel, position, fRotation, bHasSiren);
}

SAMP::CObject *SAMP::CGame::CreateObject(int nModel, CVector position, CVector rotation, float fDrawDistance, char a11, char a12) {
	return ((CObject *(__thiscall *)(CGame *, int, CVector, CVector, float, char, char))SAMP_ADDROF(0x9FC20))(this, nModel, position, rotation, fDrawDistance, a11, a12);
}

void SAMP::CGame::ProcessInputEnabling() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0x9FEC0))(this);
}

void SAMP::CGame::ProcessFrameLimiter() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0xA14E0))(this);
}

