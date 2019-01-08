/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CNetGame.h"

SAMP::CNetGame *&SAMP::pNetGame = *(SAMP::CNetGame **)SAMP_ADDROF(0x21A0F8);
int &SAMP::CNetGame::nVehiclePoolProcessFlag = *(int *)SAMP_ADDROF(0x10496C);
int &SAMP::CNetGame::nPickupPoolProcessFlag = *(int *)SAMP_ADDROF(0x104970);
TICK &SAMP::CNetGame::lastPlayersUpdateRequest = *(TICK *)SAMP_ADDROF(0x104978);

void SAMP::CNetGame::InitializeGameLogic() {
	((void(__thiscall *)(CNetGame *))SAMP_ADDROF(0x8510))(this);
}

void SAMP::CNetGame::Packet_DisconnectionNotification(Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, Packet *))SAMP_ADDROF(0x88E0))(this, pPacket);
}

void SAMP::CNetGame::DeleteMarker(NUMBER nIndex) {
	((void(__thiscall *)(CNetGame *, NUMBER))SAMP_ADDROF(0x8AB0))(this, nIndex);
}

void SAMP::CNetGame::ResetVehiclePool() {
	((void(__thiscall *)(CNetGame *))SAMP_ADDROF(0x8B80))(this);
}

void SAMP::CNetGame::ResetTextDrawPool() {
	((void(__thiscall *)(CNetGame *))SAMP_ADDROF(0x8C20))(this);
}

void SAMP::CNetGame::ResetObjectPool() {
	((void(__thiscall *)(CNetGame *))SAMP_ADDROF(0x8CC0))(this);
}

void SAMP::CNetGame::ResetGangZonePool() {
	((void(__thiscall *)(CNetGame *))SAMP_ADDROF(0x8D60))(this);
}

void SAMP::CNetGame::ResetPickupPool() {
	((void(__thiscall *)(CNetGame *))SAMP_ADDROF(0x8E00))(this);
}

void SAMP::CNetGame::ResetMenuPool() {
	((void(__thiscall *)(CNetGame *))SAMP_ADDROF(0x8E60))(this);
}

void SAMP::CNetGame::ResetLabelPool() {
	((void(__thiscall *)(CNetGame *))SAMP_ADDROF(0x8F00))(this);
}

void SAMP::CNetGame::ResetActorPool() {
	((void(__thiscall *)(CNetGame *))SAMP_ADDROF(0x8FA0))(this);
}

SAMP::CNetGame::~CNetGame() {
	((void(__thiscall *)(CNetGame *))SAMP_ADDROF(0x9380))(this);
}

void SAMP::CNetGame::Packet_UnoccupiedSync(Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, Packet *))SAMP_ADDROF(0x9550))(this, pPacket);
}

void SAMP::CNetGame::Packet_BulletSync(Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, Packet *))SAMP_ADDROF(0x9650))(this, pPacket);
}

void SAMP::CNetGame::Packet_AimSync(Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, Packet *))SAMP_ADDROF(0x9750))(this, pPacket);
}

void SAMP::CNetGame::Packet_PassengerSync(Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, Packet *))SAMP_ADDROF(0x9840))(this, pPacket);
}

void SAMP::CNetGame::Packet_TrailerSync(Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, Packet *))SAMP_ADDROF(0x9930))(this, pPacket);
}

void SAMP::CNetGame::Packet_MarkersSync(Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, Packet *))SAMP_ADDROF(0x9A20))(this, pPacket);
}

void SAMP::CNetGame::Packet_AuthKey(Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, Packet *))SAMP_ADDROF(0x9C10))(this, pPacket);
}

void SAMP::CNetGame::Packet_PlayerSync(Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, Packet *))SAMP_ADDROF(0xA250))(this, pPacket);
}

void SAMP::CNetGame::Packet_VehicleSync(Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, Packet *))SAMP_ADDROF(0xA520))(this, pPacket);
}

void SAMP::CNetGame::Packet_ConnectionLost(Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, Packet *))SAMP_ADDROF(0xA800))(this, pPacket);
}

void SAMP::CNetGame::Packet_ConnectionSucceeded(Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, Packet *))SAMP_ADDROF(0xA890))(this, pPacket);
}

void SAMP::CNetGame::UpdateNetwork() {
	((void(__thiscall *)(CNetGame *))SAMP_ADDROF(0xAD70))(this);
}

void SAMP::CNetGame::ShutdownForRestart() {
	((void(__thiscall *)(CNetGame *))SAMP_ADDROF(0xA060))(this);
}

void SAMP::CNetGame::CreateMarker(NUMBER nIndex, CVector position, char nIcon, int nColor, int nType) {
	((void(__thiscall *)(CNetGame *, NUMBER, CVector, char, int, int))SAMP_ADDROF(0x9E20))(this, nIndex, position, nIcon, nColor, nType);
}

void SAMP::CNetGame::ResetMarkers() {
	((void(__thiscall *)(CNetGame *))SAMP_ADDROF(0x9DE0))(this);
}

SAMP::CPlayerPool *SAMP::CNetGame::GetPlayerPool() {
	return ((CPlayerPool *(__thiscall *)(CNetGame *))SAMP_ADDROF(0x1160))(this);
}

SAMP::CVehiclePool *SAMP::CNetGame::GetVehiclePool() {
	return ((CVehiclePool *(__thiscall *)(CNetGame *))SAMP_ADDROF(0x1170))(this);
}

SAMP::CPickupPool *SAMP::CNetGame::GetPickupPool() {
	return ((CPickupPool *(__thiscall *)(CNetGame *))SAMP_ADDROF(0x8130))(this);
}

SAMP::CMenuPool *SAMP::CNetGame::GetMenuPool() {
	return ((CMenuPool *(__thiscall *)(CNetGame *))SAMP_ADDROF(0x8140))(this);
}

void SAMP::CNetGame::SetState(int nState) {
	((void(__thiscall *)(CNetGame *, int))SAMP_ADDROF(0x8150))(this, nState);
}

void SAMP::CNetGame::ProcessGameStuff() {
	((void(__thiscall *)(CNetGame *))SAMP_ADDROF(0x8680))(this);
}

void SAMP::CNetGame::Packet_RSAPublicKeyMismatch(Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, Packet *pPacket))SAMP_ADDROF(0x8850))(this, pPacket);
}

void SAMP::CNetGame::Packet_ConnectionBanned(Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, Packet *pPacket))SAMP_ADDROF(0x8870))(this, pPacket);
}

void SAMP::CNetGame::Packet_NoFreeIncomingConnections(Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, Packet *pPacket))SAMP_ADDROF(0x88B0))(this, pPacket);
}

void SAMP::CNetGame::Packet_InvalidPassword(Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, Packet *pPacket))SAMP_ADDROF(0x8920))(this, pPacket);
}

void SAMP::CNetGame::Packet_ConnectionAttemptFailed(Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, Packet *pPacket))SAMP_ADDROF(0x8960))(this, pPacket);
}

void SAMP::CNetGame::UpdatePlayers() {
	((void(__thiscall *)(CNetGame *))SAMP_ADDROF(0x8A10))(this);
}

void SAMP::CNetGame::InitializePools() {
	((void(__thiscall *)(CNetGame *))SAMP_ADDROF(0x8160))(this);
}

__int64 SAMP::CNetGame::GetCounter() {
	return ((__int64(__thiscall *)(CNetGame *))SAMP_ADDROF(0x8500))(this);
}

void SAMP::CNetGame::ResetPlayerPool() {
	((void(__thiscall *)(CNetGame *))SAMP_ADDROF(0x8AE0))(this);
}

void SAMP::CNetGame::Packet_ConnectionRequestAcepted(Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, Packet *))SAMP_ADDROF(0x8890))(this, pPacket);
}

void SAMP::CNetGame::ResetPools() {
	((void(__thiscall *)(CNetGame *))SAMP_ADDROF(0xA010))(this);
}