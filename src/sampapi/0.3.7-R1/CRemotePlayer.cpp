/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CRemotePlayer.h"

SAMPAPI_BEGIN_V037R1

CRemotePlayer::CRemotePlayer() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x12E20))(this);
}

CRemotePlayer::~CRemotePlayer() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x12EA0))(this);
}

void CRemotePlayer::Process() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x12EF0))(this);
}

void CRemotePlayer::ProcessHead() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x10EA0))(this);
}

void CRemotePlayer::SetMarkerState(BOOL bState) {
    ((void(__thiscall*)(CRemotePlayer*, BOOL))GetAddress(0x10FF0))(this, bState);
}

void CRemotePlayer::SetMarkerPosition(int x, int y, int z) {
    ((void(__thiscall*)(CRemotePlayer*, int, int, int))GetAddress(0x11030))(this, x, y, z);
}

BOOL CRemotePlayer::Surfing() {
    return ((BOOL(__thiscall*)(CRemotePlayer*))GetAddress(0x110D0))(this);
}

BOOL CRemotePlayer::SurfingOnObject() {
    return ((BOOL(__thiscall*)(CRemotePlayer*))GetAddress(0x11100))(this);
}

void CRemotePlayer::ProcessSurfing() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x11130))(this);
}

void CRemotePlayer::OnEnterVehicle() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x112D0))(this);
}

void CRemotePlayer::OnExitVehicle() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x113A0))(this);
}

void CRemotePlayer::ProcessSpecialAction() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x113F0))(this);
}

void CRemotePlayer::Update(Synchronization::AimData* pData) {
    ((void(__thiscall*)(CRemotePlayer*, Synchronization::AimData*))GetAddress(0x12080))(this, pData);
}

void CRemotePlayer::Update(Synchronization::UnoccupiedData* pData) {
    ((void(__thiscall*)(CRemotePlayer*, Synchronization::UnoccupiedData*))GetAddress(0x121D0))(this, pData);
}

void CRemotePlayer::Update(Synchronization::TrailerData* pData) {
    ((void(__thiscall*)(CRemotePlayer*, Synchronization::TrailerData*))GetAddress(0x12520))(this, pData);
}

void CRemotePlayer::ResetData() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x12830))(this);
}

float CRemotePlayer::GetDistanceToPlayer(CRemotePlayer* pPlayer) {
    return ((float(__thiscall*)(CRemotePlayer*, CRemotePlayer*))GetAddress(0x12930))(this, pPlayer);
}

void CRemotePlayer::ChangeState(char nOldState, char nNewState) {
    ((void(__thiscall*)(CRemotePlayer*, char, char))GetAddress(0x12AE0))(this, nOldState, nNewState);
}

int CRemotePlayer::GetStatus() {
    return ((int(__thiscall*)(CRemotePlayer*))GetAddress(0x12BA0))(this);
}

BOOL CRemotePlayer::Spawn(int a2, int nModel, CVector* pPosition, float fRotation, D3DCOLOR color, char nFightingStyle) {
    return ((BOOL(__thiscall*)(CRemotePlayer*, int, int, CVector*, float, D3DCOLOR, char))GetAddress(0x13890))(this, a2, nModel, pPosition, fRotation, color, nFightingStyle);
}

void CRemotePlayer::Update(Synchronization::OnfootData* pData, TICK timestamp) {
    ((void(__thiscall*)(CRemotePlayer*, Synchronization::OnfootData*, TICK))GetAddress(0x139A0))(this, pData, timestamp);
}

void CRemotePlayer::Update(Synchronization::IncarData* pData, TICK timestamp) {
    ((void(__thiscall*)(CRemotePlayer*, Synchronization::IncarData*, TICK))GetAddress(0x13A80))(this, pData, timestamp);
}

void CRemotePlayer::Update(Synchronization::PassengerData* pData, TICK timestamp) {
    ((void(__thiscall*)(CRemotePlayer*, Synchronization::PassengerData*, TICK))GetAddress(0x13B70))(this, pData, timestamp);
}

void CRemotePlayer::Remove() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x13C60))(this);
}

void CRemotePlayer::Kill() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x13CA0))(this);
}

void CRemotePlayer::Chat(const char* szText) {
    ((void(__thiscall*)(CRemotePlayer*, const char*))GetAddress(0x13D30))(this, szText);
}

float CRemotePlayer::GetDistanceToLocalPlayer() {
    return ((float(__thiscall*)(CRemotePlayer*))GetAddress(0x129A0))(this);
}

void CRemotePlayer::ExitVehicle() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x12AB0))(this);
}

void CRemotePlayer::EnterVehicle(ID nVehicle, BOOL bPassenger) {
    ((void(__thiscall*)(CRemotePlayer*, ID, BOOL))GetAddress(0x12A20))(this, nVehicle, bPassenger);
}

D3DCOLOR CRemotePlayer::GetColorAsARGB() {
    return ((D3DCOLOR(__thiscall*)(CRemotePlayer*))GetAddress(0x12A00))(this);
}

D3DCOLOR CRemotePlayer::GetColorAsRGBA() {
    return ((D3DCOLOR(__thiscall*)(CRemotePlayer*))GetAddress(0x129F0))(this);
}

void CRemotePlayer::SetColor(D3DCOLOR color) {
    ((void(__thiscall*)(CRemotePlayer*, D3DCOLOR))GetAddress(0x129D0))(this, color);
}

void CRemotePlayer::SetOnfootTargetSpeedAndPosition(CVector* pPosition, CVector* pSpeed) {
    ((void(__thiscall*)(CRemotePlayer*, CVector*, CVector*))GetAddress(0x11A60))(this, pPosition, pSpeed);
}

void CRemotePlayer::Update(Synchronization::BulletData* pData) {
    ((void(__thiscall*)(CRemotePlayer*, Synchronization::BulletData*))GetAddress(0x12BE0))(this, pData);
}

BOOL CRemotePlayer::DoesExist() {
    return ((BOOL(__thiscall*)(CRemotePlayer*))GetAddress(0x1080))(this);
}

void CRemotePlayer::UpdateOnfootRotation() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x11990))(this);
}

void CRemotePlayer::UpdateOnfootSpeedAndPosition() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x11840))(this);
}

void CRemotePlayer::UpdateIncarSpeedAndPosition() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x11AC0))(this);
}

void CRemotePlayer::UpdateIncarRotation() {
    ((void(__thiscall*)(CRemotePlayer*))GetAddress(0x11DA0))(this);
}

void CRemotePlayer::SetIncarTargetSpeedAndPosition(CMatrix* pMatrix, CVector* pPosition, CVector* pSpeed) {
    ((void(__thiscall*)(CRemotePlayer*, CMatrix*, CVector*, CVector*))GetAddress(0x11F10))(this, pMatrix, pPosition, pSpeed);
}

void CRemotePlayer::UpdateTrain(CMatrix* pMatrix, CVector* pSpeed, float fSpeed) {
    ((void(__thiscall*)(CRemotePlayer*, CMatrix*, CVector*, float))GetAddress(0x11F80))(this, pMatrix, pSpeed, fSpeed);
}

SAMPAPI_END
