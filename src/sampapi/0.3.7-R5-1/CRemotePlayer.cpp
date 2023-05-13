/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CRemotePlayer.h"

SAMPAPI_BEGIN_V037R5_1

CRemotePlayer::CRemotePlayer() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x165E0))(this);
}

CRemotePlayer::~CRemotePlayer() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x16660))(this);
}

void CRemotePlayer::ProcessHead() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x143A0))(this);
}

void CRemotePlayer::SetMarkerState(BOOL bState) {
    ((void(__thiscall*)(CRemotePlayer*, BOOL))GetAddress(0x14500))(this, bState);
}

void CRemotePlayer::SetMarkerPosition(int x, int y, int z) {
    ((void(__thiscall*)(CRemotePlayer*, int, int, int))GetAddress(0x14540))(this, x, y, z);
}

BOOL CRemotePlayer::SurfingOnVehicle() {
    return ((BOOL(__thiscall*)(CRemotePlayer*))GetAddress(0x145F0))(this);
}

BOOL CRemotePlayer::SurfingOnObject() {
    return ((BOOL(__thiscall*)(CRemotePlayer*))GetAddress(0x14620))(this);
}

void CRemotePlayer::ProcessSurfing() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x14650))(this);
}

void CRemotePlayer::OnEnterVehicle() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x14800))(this);
}

void CRemotePlayer::OnExitVehicle() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x148F0))(this);
}

void CRemotePlayer::ProcessSpecialAction() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x14950))(this);
}

void CRemotePlayer::UpdateOnfootSpeedAndPosition() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x14C40))(this);
}

void CRemotePlayer::UpdateOnfootRotation() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x14FF0))(this);
}

void CRemotePlayer::SetOnfootTargetSpeedAndPosition(CVector* pPosition, CVector* pSpeed) {
    ((void(__thiscall*)(CRemotePlayer*, CVector*, CVector*))GetAddress(0x150D0))(this, pPosition, pSpeed);
}

void CRemotePlayer::UpdateIncarSpeedAndPosition() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x15140))(this);
}

void CRemotePlayer::UpdateIncarRotation() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x15460))(this);
}

void CRemotePlayer::SetIncarTargetSpeedAndPosition(CMatrix* pMatrix, CVector* pPosition, CVector* pSpeed) {
    ((void(__thiscall*)(CRemotePlayer*, CMatrix*, CVector*, CVector*))GetAddress(0x155E0))(this, pMatrix, pPosition, pSpeed);
}

void CRemotePlayer::UpdateTrain(CMatrix* pMatrix, CVector* pSpeed, float fSpeed) {
        ((void(__thiscall*)(CRemotePlayer*, CMatrix*, CVector*, float))GetAddress(0x15650))(this, pMatrix, pSpeed, fSpeed);
}

void CRemotePlayer::Update(Synchronization::AimData* pData) {
    ((void(__thiscall*)(CRemotePlayer*, Synchronization::AimData*))GetAddress(0x15760))(this, pData);
}

void CRemotePlayer::Update(Synchronization::UnoccupiedData* pData) {
    ((void(__thiscall*)(CRemotePlayer*, Synchronization::UnoccupiedData*))GetAddress(0x158D0))(this, pData);
}

void CRemotePlayer::Update(Synchronization::TrailerData* pData) {
    ((void(__thiscall*)(CRemotePlayer*, Synchronization::TrailerData*))GetAddress(0x15C90))(this, pData);
}

void CRemotePlayer::ResetData() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x15FA0))(this);
}

float CRemotePlayer::GetDistanceToPlayer(CRemotePlayer* pPlayer) {
    return ((float(__thiscall*)(CRemotePlayer*, CRemotePlayer*))GetAddress(0x160A0))(this, pPlayer);
}

float CRemotePlayer::GetDistanceToLocalPlayer() {
    return ((float(__thiscall*)(CRemotePlayer*))GetAddress(0x16120))(this);
}

void CRemotePlayer::SetColor(D3DCOLOR color) {
    ((void(__thiscall*)(CRemotePlayer*, D3DCOLOR))GetAddress(0x16150))(this, color);
}

D3DCOLOR CRemotePlayer::GetColorAsRGBA() {
    return ((D3DCOLOR(__thiscall*)(CRemotePlayer*))GetAddress(0x16170))(this);
}

D3DCOLOR CRemotePlayer::GetColorAsARGB() {
    return ((D3DCOLOR(__thiscall*)(CRemotePlayer*))GetAddress(0x16180))(this);
}

void CRemotePlayer::EnterVehicle(ID nId, BOOL bPassenger) {
    ((void(__thiscall*)(CRemotePlayer*, ID, BOOL))GetAddress(0x161A0))(this, nId, bPassenger);
}

void CRemotePlayer::ExitVehicle() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x16230))(this);
}

void CRemotePlayer::ChangeState(char nOld, char nNew) {
    ((void(__thiscall*)(CRemotePlayer*, char, char))GetAddress(0x16270))(this, nOld, nNew);
}

int CRemotePlayer::GetStatus() {
    return ((int(__thiscall*)(CRemotePlayer*))GetAddress(0x16330))(this);
}

void CRemotePlayer::Update(Synchronization::BulletData* pData) {
    ((void(__thiscall*)(CRemotePlayer*, Synchronization::BulletData*))GetAddress(0x16370))(this, pData);
}

void CRemotePlayer::Process() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x166B0))(this);
}

BOOL CRemotePlayer::Spawn(int a2, int nModel, int a4, CVector* pPosition, float fRotation, D3DCOLOR color, char nFightingStyle) {
    return ((BOOL(__thiscall*)(CRemotePlayer*, int, int, int, CVector*, float, D3DCOLOR, char))GetAddress(0x17130))(this, a2, nModel, a4, pPosition, fRotation, color, nFightingStyle);
}

void CRemotePlayer::Update(Synchronization::OnfootData* pData, TICK timestamp) {
    ((void(__thiscall*)(CRemotePlayer*, Synchronization::OnfootData*, TICK))GetAddress(0x17260))(this, pData, timestamp);
}

void CRemotePlayer::Update(Synchronization::IncarData* pData, TICK timestamp) {
    ((void(__thiscall*)(CRemotePlayer*, Synchronization::IncarData*, TICK))GetAddress(0x17340))(this, pData, timestamp);
}

void CRemotePlayer::Update(Synchronization::PassengerData* pData, TICK timestamp) {
    ((void(__thiscall*)(CRemotePlayer*, Synchronization::PassengerData*, TICK))GetAddress(0x17440))(this, pData, timestamp);
}

void CRemotePlayer::Remove() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x17530))(this);
}

void CRemotePlayer::Kill() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x17570))(this);
}

void CRemotePlayer::Chat(const char* szText) {
    ((void(__thiscall*)(CRemotePlayer*, const char*))GetAddress(0x17610))(this, szText);
}

BOOL CRemotePlayer::DoesExist() {
    return ((BOOL(__thiscall*)(CRemotePlayer*))GetAddress(0x1080))(this);
}

SAMPAPI_END
