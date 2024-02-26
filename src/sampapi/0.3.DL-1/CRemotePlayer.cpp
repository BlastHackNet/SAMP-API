/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CRemotePlayer.h"

SAMPAPI_BEGIN_V03DL_1

CRemotePlayer::CRemotePlayer() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x16250))(this);
}

CRemotePlayer::~CRemotePlayer() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x162C0))(this);
}

void CRemotePlayer::ProcessHead() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x14240))(this);
}

void CRemotePlayer::SetMarkerState(BOOL bState) {
    ((void(__thiscall*)(CRemotePlayer*, BOOL))GetAddress(0x14390))(this, bState);
}

void CRemotePlayer::SetMarkerPosition(int x, int y, int z) {
    ((void(__thiscall*)(CRemotePlayer*, int, int, int))GetAddress(0x143D0))(this, x, y, z);
}

BOOL CRemotePlayer::SurfingOnVehicle() {
    return ((BOOL(__thiscall*)(CRemotePlayer*))GetAddress(0x14470))(this);
}

BOOL CRemotePlayer::SurfingOnObject() {
    return ((BOOL(__thiscall*)(CRemotePlayer*))GetAddress(0x144A0))(this);
}

void CRemotePlayer::ProcessSurfing() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x144D0))(this);
}

void CRemotePlayer::OnEnterVehicle() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x14660))(this);
}

void CRemotePlayer::OnExitVehicle() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x14730))(this);
}

void CRemotePlayer::ProcessSpecialAction() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x14780))(this);
}

void CRemotePlayer::UpdateOnfootSpeedAndPosition() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x149F0))(this);
}

void CRemotePlayer::UpdateOnfootRotation() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x14D80))(this);
}

void CRemotePlayer::SetOnfootTargetSpeedAndPosition(CVector* pPosition, CVector* pSpeed) {
    ((void(__thiscall*)(CRemotePlayer*, CVector*, CVector*))GetAddress(0x14E50))(this, pPosition, pSpeed);
}

void CRemotePlayer::UpdateIncarSpeedAndPosition() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x14EC0))(this);
}

void CRemotePlayer::UpdateIncarRotation() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x151C0))(this);
}

void CRemotePlayer::SetIncarTargetSpeedAndPosition(CMatrix* pMatrix, CVector* pPosition, CVector* pSpeed) {
    ((void(__thiscall*)(CRemotePlayer*, CMatrix*, CVector*, CVector*))GetAddress(0x15330))(this, pMatrix, pPosition, pSpeed);
}

void CRemotePlayer::UpdateTrain(CMatrix* pMatrix, CVector* pSpeed, float fSpeed) {
        ((void(__thiscall*)(CRemotePlayer*, CMatrix*, CVector*, float))GetAddress(0x153A0))(this, pMatrix, pSpeed, fSpeed);
}

void CRemotePlayer::Update(Synchronization::AimData* pData) {
    ((void(__thiscall*)(CRemotePlayer*, Synchronization::AimData*))GetAddress(0x154A0))(this, pData);
}

void CRemotePlayer::Update(Synchronization::UnoccupiedData* pData) {
    ((void(__thiscall*)(CRemotePlayer*, Synchronization::UnoccupiedData*))GetAddress(0x15600))(this, pData);
}

void CRemotePlayer::Update(Synchronization::TrailerData* pData) {
    ((void(__thiscall*)(CRemotePlayer*, Synchronization::TrailerData*))GetAddress(0x15950))(this, pData);
}

void CRemotePlayer::ResetData() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x15C60))(this);
}

float CRemotePlayer::GetDistanceToPlayer(CRemotePlayer* pPlayer) {
    return ((float(__thiscall*)(CRemotePlayer*, CRemotePlayer*))GetAddress(0x15D50))(this, pPlayer);
}

float CRemotePlayer::GetDistanceToLocalPlayer() {
    return ((float(__thiscall*)(CRemotePlayer*))GetAddress(0x15DD0))(this);
}

void CRemotePlayer::SetColor(D3DCOLOR color) {
    ((void(__thiscall*)(CRemotePlayer*, D3DCOLOR))GetAddress(0x15E00))(this, color);
}

D3DCOLOR CRemotePlayer::GetColorAsRGBA() {
    return ((D3DCOLOR(__thiscall*)(CRemotePlayer*))GetAddress(0x15E20))(this);
}

D3DCOLOR CRemotePlayer::GetColorAsARGB() {
    return ((D3DCOLOR(__thiscall*)(CRemotePlayer*))GetAddress(0x15E30))(this);
}

void CRemotePlayer::EnterVehicle(ID nId, BOOL bPassenger) {
    ((void(__thiscall*)(CRemotePlayer*, ID, BOOL))GetAddress(0x15E50))(this, nId, bPassenger);
}

void CRemotePlayer::ExitVehicle() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x15EE0))(this);
}

void CRemotePlayer::ChangeState(char nOld, char nNew) {
    ((void(__thiscall*)(CRemotePlayer*, char, char))GetAddress(0x15F10))(this, nOld, nNew);
}

int CRemotePlayer::GetStatus() {
    return ((int(__thiscall*)(CRemotePlayer*))GetAddress(0x15FD0))(this);
}

void CRemotePlayer::Update(Synchronization::BulletData* pData) {
    ((void(__thiscall*)(CRemotePlayer*, Synchronization::BulletData*))GetAddress(0x16010))(this, pData);
}

void CRemotePlayer::Process() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x16310))(this);
}

BOOL CRemotePlayer::Spawn(int a2, int nModel, int a4, CVector* pPosition, float fRotation, D3DCOLOR color, char nFightingStyle) {
    return ((BOOL(__thiscall*)(CRemotePlayer*, int, int, int, CVector*, float, D3DCOLOR, char))GetAddress(0x16C50))(this, a2, nModel, a4, pPosition, fRotation, color, nFightingStyle);
}

void CRemotePlayer::Update(Synchronization::OnfootData* pData, TICK timestamp) {
    ((void(__thiscall*)(CRemotePlayer*, Synchronization::OnfootData*, TICK))GetAddress(0x16DA0))(this, pData, timestamp);
}

void CRemotePlayer::Update(Synchronization::IncarData* pData, TICK timestamp) {
    ((void(__thiscall*)(CRemotePlayer*, Synchronization::IncarData*, TICK))GetAddress(0x16E70))(this, pData, timestamp);
}

void CRemotePlayer::Update(Synchronization::PassengerData* pData, TICK timestamp) {
    ((void(__thiscall*)(CRemotePlayer*, Synchronization::PassengerData*, TICK))GetAddress(0x16F60))(this, pData, timestamp);
}

void CRemotePlayer::Remove() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x17040))(this);
}

void CRemotePlayer::Kill() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x17080))(this);
}

void CRemotePlayer::Chat(const char* szText) {
    ((void(__thiscall*)(CRemotePlayer*, const char*))GetAddress(0x17120))(this, szText);
}

BOOL CRemotePlayer::DoesExist() {
    return ((BOOL(__thiscall*)(CRemotePlayer*))GetAddress(0x1080))(this);
}

SAMPAPI_END
