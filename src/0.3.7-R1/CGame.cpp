/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CGame.h"

SAMP::CGame *&SAMP::pGame = *(SAMP::CGame **)SAMP_ADDROF(0x21A10C);
char *&SAMP::CGame::szGameTextMessage = *(char **)SAMP_ADDROF(0x13BEFC);
bool *SAMP::CGame::aUsedPlayerSlots = (bool *)SAMP_ADDROF(0x13BF08);

BOOL SAMP::CGame::DoesHeadMoves() {
	return ((BOOL(__thiscall *)(CGame *))SAMP_ADDROF(0x2D30))(this);
}

void *SAMP::CGame::GetWindowHandle() {
	return ((void *(__thiscall *)(CGame *))SAMP_ADDROF(0x2D00))(this);
}

SAMP::CAudio *SAMP::CGame::GetAudio() {
	return ((CAudio *(__thiscall *)(CGame *))SAMP_ADDROF(0x2D10))(this);
}

SAMP::CCamera *SAMP::CGame::GetCamera() {
	return ((CCamera *(__thiscall *)(CGame *))SAMP_ADDROF(0x2D20))(this);
}

SAMP::CPed *SAMP::CGame::GetPlayerPed() {
	return ((CPed *(__thiscall *)(CGame *))SAMP_ADDROF(0x1010))(this);
}

SAMP::CGame::CGame() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0x9B5C0))(this);
}

void SAMP::CGame::SetCursorMode(int nMode, BOOL bImmediatelyHideCursor) {
	((void(__thiscall *)(CGame *, int, BOOL))SAMP_ADDROF(0x9BD30))(this, nMode, bImmediatelyHideCursor);
}

void SAMP::CGame::ProcessInputEnabling() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0x9BC10))(this);
}

void SAMP::CGame::LetTimeGo(bool bLet) {
	((void(__thiscall *)(CGame *, bool))SAMP_ADDROF(0x9C0F0))(this, bLet);
}

void SAMP::CGame::SetWorldWeather(char nWeather) {
	((void(__thiscall *)(CGame *, char))SAMP_ADDROF(0x9C130))(this, nWeather);
}

void SAMP::CGame::SetFrameLimiter(int nValue) {
	((void(__thiscall *)(CGame *, int))SAMP_ADDROF(0x9C190))(this, nValue);
}

char SAMP::CGame::GetCurrentInterior() {
	return ((char(__thiscall *)(CGame *))SAMP_ADDROF(0x9C490))(this);
}

void SAMP::CGame::EnableClock(bool bEnable) {
	((void(__thiscall *)(CGame *, bool))SAMP_ADDROF(0x9CA00))(this, bEnable);
}

void SAMP::CGame::SetRequiredVehicleModels(unsigned char *pModelCount) {
	((void(__thiscall *)(CGame *, unsigned char *))SAMP_ADDROF(0x9CBB0))(this, pModelCount);
}

void SAMP::CGame::CreateRacingCheckpoint() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0x9D400))(this);
}

void SAMP::CGame::ProcessCheckpoints() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0x9D480))(this);
}

float SAMP::CGame::FindGroundZ(CVector point) {
	return ((float(__thiscall *)(CGame *, CVector))SAMP_ADDROF(0x9BA40))(this, point);
}

int SAMP::CGame::IsStarted() {
	return ((int(__thiscall *)(CGame *))SAMP_ADDROF(0x9BF70))(this);
}

void SAMP::CGame::RequestModel(int nModel, int nLoadingStream) {
	((void(__thiscall *)(CGame *, int, int))SAMP_ADDROF(0x9BF80))(this, nModel, nLoadingStream);
}

void SAMP::CGame::LoadRequestedModels() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0x9BFA0))(this);
}

BOOL SAMP::CGame::IsModelAvailable(int nModel) {
	return ((int(__thiscall *)(CGame *, int))SAMP_ADDROF(0x9BFB0))(this, nModel);
}

void SAMP::CGame::ReleaseModel(int nModel, bool bGameFunc) {
	((void(__thiscall *)(CGame *, int, bool))SAMP_ADDROF(0x9BFD0))(this, nModel, bGameFunc);
}

void SAMP::CGame::SetWorldTime(char nHour, char nMinute) {
	((void(__thiscall *)(CGame *, char, char))SAMP_ADDROF(0x9C0A0))(this, nHour, nMinute);
}

void SAMP::CGame::GetWorldTime(char *pHour, char *pMinute) {
	((void(__thiscall *)(CGame *, char *, char *))SAMP_ADDROF(0x9C0D0))(this, pHour, pMinute);
}

void SAMP::CGame::SetMaxStats() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0x9C1C0))(this);
}

void SAMP::CGame::RefreshRenderer(float fX, float fY) {
	((void(__thiscall *)(CGame *, float, float))SAMP_ADDROF(0x9C200))(this, fX, fY);
}

void SAMP::CGame::RequestAnimation(const char *szFile) {
	((void(__thiscall *)(CGame *, const char *))SAMP_ADDROF(0x9C230))(this, szFile);
}

int SAMP::CGame::IsAnimationLoaded(const char *szFile) {
	return ((int(__thiscall *)(CGame *, const char *))SAMP_ADDROF(0x9C250))(this, szFile);
}

void SAMP::CGame::DisplayGameText(const char *szText, int nTime, int nSize) {
	((void(__thiscall *)(CGame *, const char *, int, int))SAMP_ADDROF(0x9C2C0))(this, szText, nTime, nSize);
}

SAMP::GTAREF SAMP::CGame::CreateMarker(int nIcon, CVector position, int nColor, int nType) {
	return ((unsigned long(__thiscall *)(CGame *, int, CVector, D3DCOLOR, int))SAMP_ADDROF(0x9C340))(this, nIcon, position, nColor, nType);
}

void SAMP::CGame::IncreasePlayerMoney(int nInc) {
	((void(__thiscall *)(CGame *, int))SAMP_ADDROF(0x9C520))(this, nInc);
}

int SAMP::CGame::GetPlayerMoney() {
	return ((int(__thiscall *)(CGame *))SAMP_ADDROF(0x9C540))(this);
}

const char *SAMP::CGame::GetWeaponName(int nWeapon) {
	return ((const char *(__thiscall *)(CGame *, int))SAMP_ADDROF(0x9C550))(this, nWeapon);
}

SAMP::GTAREF SAMP::CGame::CreateWeaponPickup(int nModel, int nAmmo, CVector position) {
	return ((unsigned long(__thiscall *)(CGame *, int, int, CVector))SAMP_ADDROF(0x9C870))(this, nModel, nAmmo, position);
}

IDirect3DDevice9 *SAMP::CGame::GetDevice() {
	return ((IDirect3DDevice9 *(__thiscall *)(CGame *))SAMP_ADDROF(0x9C910))(this);
}

CWeaponInfo *SAMP::CGame::GetWeaponInfo(int nWeapon, int nSkill) {
	return ((CWeaponInfo *(__thiscall *)(CGame *, int, int))SAMP_ADDROF(0x9C980))(this, nWeapon, nSkill);
}

void SAMP::CGame::SetWorldGravity(float fValue) {
	((void(__thiscall *)(CGame *, float))SAMP_ADDROF(0x9C9A0))(this, fValue);
}

void SAMP::CGame::SetWantedLevel(char nLevel) {
	((void(__thiscall *)(CGame *, char))SAMP_ADDROF(0x9C9C0))(this, nLevel);
}

void SAMP::CGame::EnableZoneDisplaying(bool bEnable) {
	((void(__thiscall *)(CGame *, bool))SAMP_ADDROF(0x9CAC0))(this, bEnable);
}

void SAMP::CGame::EnableStuntBonus(bool bEnable) {
	((void(__thiscall *)(CGame *, bool))SAMP_ADDROF(0x9CAE0))(this, bEnable);
}

void SAMP::CGame::EnableHUD(BOOL bEnable) {
	((void(__thiscall *)(CGame *, BOOL))SAMP_ADDROF(0x9D310))(this, bEnable);
}

void SAMP::CGame::ResetMoney() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0x9D620))(this);
}

void SAMP::CGame::DrawGangZone(float *pPos, char nColor) {
	((void(__thiscall *)(CGame *, float *, D3DCOLOR))SAMP_ADDROF(0x9C9E0))(this, pPos, nColor);
}

void SAMP::CGame::DeleteMarker(GTAREF handle) {
	((void(__thiscall *)(CGame *, GTAREF))SAMP_ADDROF(0x9C470))(this, handle);
}

void SAMP::CGame::LoadAnimationsAndModels() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0x9CE00))(this);
}

int SAMP::CGame::IsMenuVisible() {
	return ((int(__thiscall *)(CGame *))SAMP_ADDROF(0x9BF60))(this);
}

BOOL SAMP::CGame::UsingGamepad() {
	return ((BOOL(__thiscall *)(CGame *))SAMP_ADDROF(0x9D120))(this);
}

void SAMP::CGame::SetCheckpoint(CVector *pPosition, CVector *pSize) {
	((void(__thiscall *)(CGame *, CVector *, CVector *))SAMP_ADDROF(0x9D340))(this, pPosition, pSize);
}

void SAMP::CGame::SetRacingCheckpoint(int nType, CVector *pPosition, CVector *pNextPosition, float fSize) {
	((void(__thiscall *)(CGame *, int, CVector *, CVector *, float))SAMP_ADDROF(0x9D660))(this, nType, pPosition, pNextPosition, fSize);
}

void SAMP::CGame::InitGame() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0x9BED0))(this);
}

void SAMP::CGame::StartGame() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0x9BF20))(this);
}

void SAMP::CGame::DeleteRacingCheckpoint() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0x9C310))(this);
}

SAMP::CPed *SAMP::CGame::CreatePed(int nModel, CVector position, float fRotation, int a6, int a7) {
	return ((CPed *(__thiscall *)(CGame *, int, CVector, float, int, int))SAMP_ADDROF(0x9B750))(this, nModel, position, fRotation, a6, a7);
}

SAMP::CVehicle *SAMP::CGame::CreateVehicle(int nModel, CVector position, float fRotation, BOOL bHasSiren) {
	return ((CVehicle *(__thiscall *)(CGame *, int, CVector, float, int))SAMP_ADDROF(0x9B890))(this, nModel, position, fRotation, bHasSiren);
}

SAMP::CObject *SAMP::CGame::CreateObject(int nModel, CVector position, CVector rotation, float fDrawDistance) {
	return ((SAMP::CObject *(__thiscall *)(CGame *, int, CVector, CVector, float))SAMP_ADDROF(0x9B970))(this, nModel, position, rotation, fDrawDistance);
}

void SAMP::CGame::DisableTrainTraffic() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0x9C1F0))(this);
}

void SAMP::CGame::ReleaseAnimation(const char *szFile) {
	((void(__thiscall *)(CGame *, const char *))SAMP_ADDROF(0x9C270))(this, szFile);
}

void SAMP::CGame::UpdateFarClippingPlane() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0x9C4B0))(this);
}

void SAMP::CGame::CreatePickup(int nModel, int nType, CVector position, GTAREF *handle) {
	((void(__thiscall *)(CGame *, int, int, CVector, GTAREF *))SAMP_ADDROF(0x9C7A0))(this, nModel, nType, position, handle);
}

void SAMP::CGame::Restart() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0x9C950))(this);
}

void SAMP::CGame::SetNumberOfIntroTextLinesThisFrame(unsigned short nValue) {
	((void(__thiscall *)(CGame *, unsigned short))SAMP_ADDROF(0x9C9D0))(this, nValue);
}

void SAMP::CGame::LoadScene(const char *szFile) {
	((void(__thiscall *)(CGame *, const char *))SAMP_ADDROF(0x9CB50))(this, szFile);
}

int SAMP::CGame::GetUsedMemory() {
	return ((int(__thiscall *)(CGame *))SAMP_ADDROF(0x9CB70))(this);
}

int SAMP::CGame::GetStreamingMemory() {
	return ((int(__thiscall *)(CGame *))SAMP_ADDROF(0x9CB80))(this);
}

int SAMP::CGame::GetTimer() {
	return ((int(__thiscall *)(CGame *))SAMP_ADDROF(0x9CCD0))(this);
}

void SAMP::CGame::LoadCollisionFile(const char *szFile) {
	((void(__thiscall *)(CGame *, const char *))SAMP_ADDROF(0x9D0E0))(this, szFile);
}

void SAMP::CGame::LoadCullZone(const char *szLine) {
	((void(__thiscall *)(CGame *, const char *))SAMP_ADDROF(0x9D100))(this, szLine);
}

void SAMP::CGame::DisableAutoAiming() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0x9D130))(this);
}

void SAMP::CGame::EnableRadar(BOOL bEnable) {
	((void(__thiscall *)(CGame *, BOOL))SAMP_ADDROF(0x9C2A0))(this, bEnable);
}

void SAMP::CGame::Sleep(int elapsed, int fpsLimit) {
	((void(__thiscall *)(CGame *, int, int))SAMP_ADDROF(0x9B6D0))(this, elapsed, fpsLimit);
}

BOOL SAMP::CGame::RemovePed(CPed *pPed) {
	return ((BOOL(__thiscall *)(CGame *, CPed *))SAMP_ADDROF(0x9B850))(this, pPed);
}

void SAMP::CGame::ProcessFrameLimiter() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0x9D170))(this);
}