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

SAMP::CPed *SAMP::CGame::FindPlayerPed() {
	return ((CPed *(__thiscall *)(CGame *))SAMP_ADDROF(0x1010))(this);
}

SAMP::CGame::CGame() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0x9B5C0))(this);
}

void SAMP::CGame::SetCursorMode(SAMP::eCursorMode nMode, bool bImmediatelyHideCursor) {
	((void(__thiscall *)(CGame *, eCursorMode, bool))SAMP_ADDROF(0x9BD30))(this, nMode, bImmediatelyHideCursor);
}

void SAMP::CGame::ProcessInputEnabling() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0x9BC10))(this);
}

void SAMP::CGame::LetTimeGo(bool bLet) {
	((void(__thiscall *)(CGame *, bool))SAMP_ADDROF(0x9C0F0))(this, bLet);
}

void SAMP::CGame::SetWorldWeather(unsigned char nWeather) {
	((void(__thiscall *)(CGame *, unsigned char))SAMP_ADDROF(0x9C130))(this, nWeather);
}

void SAMP::CGame::SetFPSLimit(unsigned int nValue) {
	((void(__thiscall *)(CGame *, unsigned int))SAMP_ADDROF(0x9C190))(this, nValue);
}

char SAMP::CGame::GetActiveInterior() {
	return ((char(__thiscall *)(CGame *))SAMP_ADDROF(0x9C490))(this);
}

void SAMP::CGame::ToggleClock(bool bEnable) {
	((void(__thiscall *)(CGame *, bool))SAMP_ADDROF(0x9CA00))(this, bEnable);
}

void SAMP::CGame::SetRequiredVehicleModels(unsigned char *pModelCount) {
	((void(__thiscall *)(CGame *, unsigned char *))SAMP_ADDROF(0x9CBB0))(this, pModelCount);
}

void SAMP::CGame::MakeRaceCheckpoint() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0x9D400))(this);
}

void SAMP::CGame::UpdateCheckpoints() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0x9D480))(this);
}

float SAMP::CGame::FindGroundZ(CVector vPosition) {
	return ((float(__thiscall *)(CGame *, CVector))SAMP_ADDROF(0x9BA40))(this, vPosition);
}

int SAMP::CGame::IsGameLoaded() {
	return ((int(__thiscall *)(CGame *))SAMP_ADDROF(0x9BF70))(this);
}

void SAMP::CGame::RequestModel(unsigned int nModel, int nLoadingStream) {
	((void(__thiscall *)(CGame *, unsigned int, int))SAMP_ADDROF(0x9BF80))(this, nModel, nLoadingStream);
}

void SAMP::CGame::LoadRequestedModels() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0x9BFA0))(this);
}

int SAMP::CGame::IsModelLoaded(unsigned int nModel) {
	return ((int(__thiscall *)(CGame *, unsigned int))SAMP_ADDROF(0x9BFB0))(this, nModel);
}

void SAMP::CGame::ReleaseModel(unsigned int nModel, bool bGameFunc) {
	((void(__thiscall *)(CGame *, unsigned int, bool))SAMP_ADDROF(0x9BFD0))(this, nModel, bGameFunc);
}

void SAMP::CGame::SetWorldTime(int nHour, int nMinute) {
	((void(__thiscall *)(CGame *, int, int))SAMP_ADDROF(0x9C0A0))(this, nHour, nMinute);
}

void SAMP::CGame::GetWorldTime(int *pHour, int *pMinute) {
	((void(__thiscall *)(CGame *, int *, int *))SAMP_ADDROF(0x9C0D0))(this, pHour, pMinute);
}

void SAMP::CGame::SetMaxStats() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0x9C1C0))(this);
}

void SAMP::CGame::RefreshStreamingAt(float fX, float fY) {
	((void(__thiscall *)(CGame *, float, float))SAMP_ADDROF(0x9C200))(this, fX, fY);
}

void SAMP::CGame::RequestAnimation(const char *szFilename) {
	((void(__thiscall *)(CGame *, const char *))SAMP_ADDROF(0x9C230))(this, szFilename);
}

int SAMP::CGame::IsAnimationLoaded(const char *szFilename) {
	return ((int(__thiscall *)(CGame *, const char *))SAMP_ADDROF(0x9C250))(this, szFilename);
}

void SAMP::CGame::DisplayGameText(const char *szText, int nTime, int nSize) {
	((void(__thiscall *)(CGame *, const char *, int, int))SAMP_ADDROF(0x9C2C0))(this, szText, nTime, nSize);
}

SAMP::GTAREF SAMP::CGame::CreateRadarMarkerIcon(int nMarkerType, CVector vPosition, D3DCOLOR dwColor, int nType) {
	return ((unsigned long(__thiscall *)(CGame *, int, CVector, D3DCOLOR, int))SAMP_ADDROF(0x9C340))(this, nMarkerType, vPosition, dwColor, nType);
}

void SAMP::CGame::IncreasePlayerMoney(int nInc) {
	((void(__thiscall *)(CGame *, int))SAMP_ADDROF(0x9C520))(this, nInc);
}

int SAMP::CGame::GetLocalMoney() {
	return ((int(__thiscall *)(CGame *))SAMP_ADDROF(0x9C540))(this);
}

const char *SAMP::CGame::GetWeaponName(int nWeapon) {
	return ((const char *(__thiscall *)(CGame *, int))SAMP_ADDROF(0x9C550))(this, nWeapon);
}

SAMP::GTAREF SAMP::CGame::CreateWeaponPickup(unsigned int nModel, unsigned int nAmmo, CVector vPosition) {
	return ((unsigned long(__thiscall *)(CGame *, unsigned int, unsigned int, CVector))SAMP_ADDROF(0x9C870))(this, nModel, nAmmo, vPosition);
}

void *SAMP::CGame::GetD3DDevice() {
	return ((void *(__thiscall *)(CGame *))SAMP_ADDROF(0x9C910))(this);
}

void *SAMP::CGame::GetWeaponInfo(int nWeapon, int nSkill) {
	return ((void *(__thiscall *)(CGame *, int, int))SAMP_ADDROF(0x9C980))(this, nWeapon, nSkill);
}

void SAMP::CGame::SetGravity(float fGravity) {
	((void(__thiscall *)(CGame *, float))SAMP_ADDROF(0x9C9A0))(this, fGravity);
}

void SAMP::CGame::SetWantedLevel(char nLevel) {
	((void(__thiscall *)(CGame *, char))SAMP_ADDROF(0x9C9C0))(this, nLevel);
}

void SAMP::CGame::EnableZoneNames(bool bEnable) {
	((void(__thiscall *)(CGame *, bool))SAMP_ADDROF(0x9CAC0))(this, bEnable);
}

void SAMP::CGame::EnableStuntBonus(bool bEnable) {
	((void(__thiscall *)(CGame *, bool))SAMP_ADDROF(0x9CAE0))(this, bEnable);
}

void SAMP::CGame::EnableHud(bool bEnable) {
	((void(__thiscall *)(CGame *, bool))SAMP_ADDROF(0x9D310))(this, bEnable);
}

void SAMP::CGame::ResetPlayerMoney() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0x9D620))(this);
}

void SAMP::CGame::DrawGangZone(float *pPos, D3DCOLOR dwColor) {
	((void(__thiscall *)(CGame *, float *, D3DCOLOR))SAMP_ADDROF(0x9C9E0))(this, pPos, dwColor);
}

void SAMP::CGame::DisableMarker(unsigned long dwMarker) {
	((void(__thiscall *)(CGame *, unsigned long))SAMP_ADDROF(0x9C470))(this, dwMarker);
}

void SAMP::CGame::LoadAnimsAndModels() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0x9CE00))(this);
}

int SAMP::CGame::IsMenuActive() {
	return ((int(__thiscall *)(CGame *))SAMP_ADDROF(0x9BF60))(this);
}

int SAMP::CGame::IsUsingGamepad() {
	return ((int(__thiscall *)(CGame *))SAMP_ADDROF(0x9D120))(this);
}

void SAMP::CGame::SetCheckpointInformation(CVector *pPosition, CVector *pSize) {
	((void(__thiscall *)(CGame *, CVector *, CVector *))SAMP_ADDROF(0x9D340))(this, pPosition, pSize);
}

void SAMP::CGame::SetRaceCheckpointInformation(int nType, CVector *pPos, CVector *pNextPos, float fSize) {
	((void(__thiscall *)(CGame *, int, CVector *, CVector *, float))SAMP_ADDROF(0x9D660))(this, nType, pPos, pNextPos, fSize);
}

void SAMP::CGame::InitGame() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0x9BED0))(this);
}

void SAMP::CGame::StartGame() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0x9BF20))(this);
}

void SAMP::CGame::DeleteRaceCheckpoint() {
	((void(__thiscall *)(CGame *))SAMP_ADDROF(0x9C310))(this);
}

void SAMP::CGame::SetCheckpointInfomation(CVector *pPos, CVector *pSize) {
	((void(__thiscall *)(CGame *, CVector *, CVector *))SAMP_ADDROF(0x9D340))(this, pPos, pSize);
}

void SAMP::CGame::SetRaceCheckpointInformation(char nType, CVector *pCurrentPos, CVector *pNextPos, float fSize) {
	((void(__thiscall *)(CGame *, char, CVector *, CVector *, float))SAMP_ADDROF(0x9D660))(this, nType, pCurrentPos, pNextPos, fSize);
}

SAMP::CPed *SAMP::CGame::NewPlayer(int nSkin, CVector vPos, float fRotation, int arg4, int arg5) {
	return ((CPed *(__thiscall *)(CGame *, int, CVector, float, int, int))SAMP_ADDROF(0x9B750))(this, nSkin, vPos, fRotation, arg4, arg5);
}

SAMP::CVehicle *SAMP::CGame::NewVehicle(int nType, CVector vPos, float fRotation, int arg4) {
	return ((CVehicle *(__thiscall *)(CGame *, int, CVector, float, int))SAMP_ADDROF(0x9B890))(this, nType, vPos, fRotation, arg4);
}

SAMP::CObject *SAMP::CGame::NewObject(int nModel, CVector vPos, CVector vRot, float fDrawDistance) {
	return ((SAMP::CObject *(__thiscall *)(CGame *, int, CVector, CVector, float))SAMP_ADDROF(0x9B970))(this, nModel, vPos, vRot, fDrawDistance);
}