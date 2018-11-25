/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CRemotePlayer.h"

SAMP::CRemotePlayer::CRemotePlayer() {
	((void(__thiscall *)(CRemotePlayer *))SAMP_ADDROF(0x12E20))(this);
}

SAMP::CRemotePlayer::~CRemotePlayer() {
	((void(__thiscall *)(CRemotePlayer *))SAMP_ADDROF(0x12EA0))(this);
}

void SAMP::CRemotePlayer::Process() {
	((void(__thiscall *)(CRemotePlayer *))SAMP_ADDROF(0x12EF0))(this);
}

void SAMP::CRemotePlayer::ProcessHead() {
	((void(__thiscall *)(CRemotePlayer *))SAMP_ADDROF(0x10EA0))(this);
}

void SAMP::CRemotePlayer::SetMarkerState(int nState) {
	((void(__thiscall *)(CRemotePlayer *, int))SAMP_ADDROF(0x10FF0))(this, nState);
}

void SAMP::CRemotePlayer::CreateMarkerAt(CVector vPosition) {
	((void(__thiscall *)(CRemotePlayer *, CVector))SAMP_ADDROF(0x11030))(this, vPosition);
}

BOOL SAMP::CRemotePlayer::SurfingOrInTurretMode() {
	return ((BOOL(__thiscall *)(CRemotePlayer *))SAMP_ADDROF(0x110D0))(this);
}

void SAMP::CRemotePlayer::ProcessSurfing() {
	((void(__thiscall *)(CRemotePlayer *))SAMP_ADDROF(0x11130))(this);
}

void SAMP::CRemotePlayer::PutInVehicle() {
	((void(__thiscall *)(CRemotePlayer *))SAMP_ADDROF(0x112D0))(this);
}

void SAMP::CRemotePlayer::RemoveFromVehicle() {
	((void(__thiscall *)(CRemotePlayer *))SAMP_ADDROF(0x113A0))(this);
}

void SAMP::CRemotePlayer::ProcessSpecialActions() {
	((void(__thiscall *)(CRemotePlayer *))SAMP_ADDROF(0x113F0))(this);
}

void SAMP::CRemotePlayer::Synchronize(PACKET::AimData *pData) {
	((void(__thiscall *)(CRemotePlayer *, PACKET::AimData *))SAMP_ADDROF(0x12080))(this, pData);
}

void SAMP::CRemotePlayer::Synchronize(PACKET::UnoccupiedData *pData) {
	((void(__thiscall *)(CRemotePlayer *, PACKET::UnoccupiedData *))SAMP_ADDROF(0x121D0))(this, pData);
}

void SAMP::CRemotePlayer::Synchronize(PACKET::TrailerData *pData) {
	((void(__thiscall *)(CRemotePlayer *, PACKET::TrailerData *))SAMP_ADDROF(0x12520))(this, pData);
}

void SAMP::CRemotePlayer::ResetData() {
	((void(__thiscall *)(CRemotePlayer *))SAMP_ADDROF(0x12830))(this);
}

float SAMP::CRemotePlayer::GetDistanceToPlayer(CRemotePlayer *pPlayer) {
	return ((float(__thiscall *)(CRemotePlayer *, CRemotePlayer *))SAMP_ADDROF(0x12930))(this, pPlayer);
}

void SAMP::CRemotePlayer::ChangeState(int nOldState, int nNewState) {
	((void(__thiscall *)(CRemotePlayer *, int, int))SAMP_ADDROF(0x12AE0))(this, nOldState, nNewState);
}

int SAMP::CRemotePlayer::GetStatus() {
	return ((int(__thiscall *)(CRemotePlayer *))SAMP_ADDROF(0x12BA0))(this);
}

void SAMP::CRemotePlayer::SetState(int nState) {
	((void(__thiscall *)(CRemotePlayer *, int))SAMP_ADDROF(0x12E00))(this, nState);
}

BOOL SAMP::CRemotePlayer::Spawn(int nTeam, int nSkin, int nPlayerNumber, CVector *pPos, float fRotation, D3DCOLOR dwColor, char nFightingStyle) {
	return ((BOOL(__thiscall *)(CRemotePlayer *, int, int, int, CVector *, float, D3DCOLOR, char))SAMP_ADDROF(0x13890))(this, nTeam, nSkin, nPlayerNumber, pPos, fRotation, dwColor, nFightingStyle);
}

void SAMP::CRemotePlayer::Synchronize(PACKET::OnfootData *pData) {
	((void(__thiscall *)(CRemotePlayer *, PACKET::OnfootData *))SAMP_ADDROF(0x139A0))(this, pData);
}

void SAMP::CRemotePlayer::Synchronize(PACKET::IncarData *pData) {
	((void(__thiscall *)(CRemotePlayer *, PACKET::IncarData *))SAMP_ADDROF(0x13A80))(this, pData);
}

void SAMP::CRemotePlayer::Synchronize(PACKET::PassengerData *pData) {
	((void(__thiscall *)(CRemotePlayer *, PACKET::PassengerData *))SAMP_ADDROF(0x13B70))(this, pData);
}

void SAMP::CRemotePlayer::Reset() {
	((void(__thiscall *)(CRemotePlayer *))SAMP_ADDROF(0x13C60))(this);
}

void SAMP::CRemotePlayer::Kill() {
	((void(__thiscall *)(CRemotePlayer *))SAMP_ADDROF(0x13CA0))(this);
}

void SAMP::CRemotePlayer::Say(const char *szText) {
	((void(__thiscall *)(CRemotePlayer *, const char *))SAMP_ADDROF(0x13D30))(this, szText);
}

float SAMP::CRemotePlayer::GetDistanceToLocalPlayerPed() {
	return ((float(__thiscall *)(CRemotePlayer *))SAMP_ADDROF(0x129A0))(this);
}

void SAMP::CRemotePlayer::ExitVehicle() {
	((void(__thiscall *)(CRemotePlayer *))SAMP_ADDROF(0x12AB0))(this);
}

void SAMP::CRemotePlayer::EnterVehicle(ID nVehicle, BOOL bPassenger) {
	((void(__thiscall *)(CRemotePlayer *, ID, BOOL))SAMP_ADDROF(0x12A20))(this, nVehicle, bPassenger);
}

D3DCOLOR SAMP::CRemotePlayer::GetColorAsARGB() {
	return ((D3DCOLOR(__thiscall *)(CRemotePlayer *))SAMP_ADDROF(0x12A00))(this);
}

D3DCOLOR SAMP::CRemotePlayer::GetColorAsRGBA() {
	return ((D3DCOLOR(__thiscall *)(CRemotePlayer *))SAMP_ADDROF(0x129F0))(this);
}

void SAMP::CRemotePlayer::SetColor(D3DCOLOR dwColor) {
	((void(__thiscall *)(CRemotePlayer *, D3DCOLOR))SAMP_ADDROF(0x129D0))(this, dwColor);
}

void SAMP::CRemotePlayer::SetPositionAndSpeed(CVector *pPos, CVector *pSpeed) {
	((void(__thiscall *)(CRemotePlayer *, CVector *, CVector *))SAMP_ADDROF(0x11A60))(this, pPos, pSpeed);
}
