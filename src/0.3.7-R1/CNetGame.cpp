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
unsigned long &SAMP::CNetGame::dwLastPlayersInfoUpdateTick = *(unsigned long *)SAMP_ADDROF(0x104978);

void SAMP::CNetGame::InitGameLogic() {
	((void(__thiscall *)(CNetGame *))SAMP_ADDROF(0x8510))(this);
}

void SAMP::CNetGame::Packet_DisconnectionNotification(::Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, ::Packet *))SAMP_ADDROF(0x88E0))(this, pPacket);
}

void SAMP::CNetGame::DeleteMapIcon(unsigned char nIdx) {
	((void(__thiscall *)(CNetGame *, unsigned char))SAMP_ADDROF(0x8AB0))(this, nIdx);
}

void SAMP::CNetGame::ResetVehiclePool() {
	((void(__thiscall *)(CNetGame *))SAMP_ADDROF(0x8B80))(this);
}

void SAMP::CNetGame::ResetTextdrawPool() {
	((void(__thiscall *)(CNetGame *))SAMP_ADDROF(0x8C20))(this);
}

void SAMP::CNetGame::ResetObjectPool() {
	((void(__thiscall *)(CNetGame *))SAMP_ADDROF(0x8CC0))(this);
}

void SAMP::CNetGame::ResetGangzonePool() {
	((void(__thiscall *)(CNetGame *))SAMP_ADDROF(0x8D60))(this);
}

void SAMP::CNetGame::ResetPickupPool() {
	((void(__thiscall *)(CNetGame *))SAMP_ADDROF(0x8E00))(this);
}

void SAMP::CNetGame::ResetMenuPool() {
	((void(__thiscall *)(CNetGame *))SAMP_ADDROF(0x8E60))(this);
}

void SAMP::CNetGame::ResetTextLabels() {
	((void(__thiscall *)(CNetGame *))SAMP_ADDROF(0x8F00))(this);
}

void SAMP::CNetGame::ResetActorPool() {
	((void(__thiscall *)(CNetGame *))SAMP_ADDROF(0x8FA0))(this);
}

SAMP::CNetGame::~CNetGame() {
	((void(__thiscall *)(CNetGame *))SAMP_ADDROF(0x9380))(this);
}

void SAMP::CNetGame::Packet_UnoccupiedSync(::Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, ::Packet *))SAMP_ADDROF(0x9550))(this, pPacket);
}

void SAMP::CNetGame::Packet_BulletSync(::Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, ::Packet *))SAMP_ADDROF(0x9650))(this, pPacket);
}

void SAMP::CNetGame::Packet_AimSync(::Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, ::Packet *))SAMP_ADDROF(0x9750))(this, pPacket);
}

void SAMP::CNetGame::Packet_PassengerSync(::Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, ::Packet *))SAMP_ADDROF(0x9840))(this, pPacket);
}

void SAMP::CNetGame::Packet_TrailerSync(::Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, ::Packet *))SAMP_ADDROF(0x9930))(this, pPacket);
}

void SAMP::CNetGame::Packet_MarkersSync(::Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, ::Packet *))SAMP_ADDROF(0x9A20))(this, pPacket);
}

void SAMP::CNetGame::Packet_AuthKey(::Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, ::Packet *))SAMP_ADDROF(0x9C10))(this, pPacket);
}

void SAMP::CNetGame::Packet_PlayerSync(::Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, ::Packet *))SAMP_ADDROF(0xA250))(this, pPacket);
}

void SAMP::CNetGame::Packet_VehicleSync(::Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, ::Packet *))SAMP_ADDROF(0xA520))(this, pPacket);
}

void SAMP::CNetGame::Packet_ConnectionLost(::Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, ::Packet *))SAMP_ADDROF(0xA800))(this, pPacket);
}

void SAMP::CNetGame::Packet_ConnectionSucceeded(::Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, ::Packet *))SAMP_ADDROF(0xA890))(this, pPacket);
}

void SAMP::CNetGame::UpdateNetwork() {
	((void(__thiscall *)(CNetGame *))SAMP_ADDROF(0xAD70))(this);
}

void SAMP::CNetGame::ShutdownForRestart() {
	((void(__thiscall *)(CNetGame *))SAMP_ADDROF(0xA060))(this);
}

void SAMP::CNetGame::CreateMapIcon(unsigned char nIdx, CVector vPos, unsigned char nMarkerType, D3DCOLOR dwColor, unsigned char nType) {
	((void(__thiscall *)(CNetGame *, unsigned char, CVector, unsigned char, D3DCOLOR, unsigned char))SAMP_ADDROF(0x9E20))(this, nIdx, vPos, nMarkerType, dwColor, nType);
}

void SAMP::CNetGame::ResetMapIcons() {
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

void SAMP::CNetGame::SetGameState(unsigned int nState) {
	((void(__thiscall *)(CNetGame *, unsigned int))SAMP_ADDROF(0x8150))(this, nState);
}

void SAMP::CNetGame::Process() {
	((void(__thiscall *)(CNetGame *))SAMP_ADDROF(0x8680))(this);
}

void SAMP::CNetGame::Packet_InitializeEncryption(::Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, ::Packet *pPacket))SAMP_ADDROF(0x8850))(this, pPacket);
}

void SAMP::CNetGame::Packet_ConnectionBanned(::Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, ::Packet *pPacket))SAMP_ADDROF(0x8870))(this, pPacket);
}

void SAMP::CNetGame::Packet_NoFreeIncomingConnections(::Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, ::Packet *pPacket))SAMP_ADDROF(0x88B0))(this, pPacket);
}

void SAMP::CNetGame::Packet_InvalidPassword(::Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, ::Packet *pPacket))SAMP_ADDROF(0x8920))(this, pPacket);
}

void SAMP::CNetGame::Packet_ConnectionAttemptFailed(::Packet *pPacket) {
	((void(__thiscall *)(CNetGame *, ::Packet *pPacket))SAMP_ADDROF(0x8960))(this, pPacket);
}

void SAMP::CNetGame::UpdatePlayersInfo() {
	((void(__thiscall *)(CNetGame *))SAMP_ADDROF(0x8A10))(this);
}