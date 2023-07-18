/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>

	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CNetGame.h"

SAMPAPI_BEGIN_V037R1

SAMPAPI_VAR CNetGame*& RefNetGame() {
    return *(CNetGame**)GetAddress(0x21A0F8);
}

SAMPAPI_VAR int& CNetGame::RefVehiclePoolProcessFlag() {
    return *(int*)GetAddress(0x10496C);
}

SAMPAPI_VAR int& CNetGame::RefPickupPoolProcessFlag() {
    return *(int*)GetAddress(0x104970);
}

SAMPAPI_VAR TICK& CNetGame::RefLastPlayersUpdateRequest() {
    return *(TICK*)GetAddress(0x104978);
}

void CNetGame::InitializeGameLogic() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8510))(this);
}

void CNetGame::Packet_DisconnectionNotification(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x88E0))(this, pPacket);
}

void CNetGame::DeleteMarker(NUMBER nIndex) {
    ((void(__thiscall*)(CNetGame*, NUMBER))GetAddress(0x8AB0))(this, nIndex);
}

void CNetGame::ResetVehiclePool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8B80))(this);
}

void CNetGame::ResetTextDrawPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8C20))(this);
}

void CNetGame::ResetObjectPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8CC0))(this);
}

void CNetGame::ResetGangZonePool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8D60))(this);
}

void CNetGame::ResetPickupPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8E00))(this);
}

void CNetGame::ResetMenuPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8E60))(this);
}

void CNetGame::ResetLabelPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8F00))(this);
}

void CNetGame::ResetActorPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8FA0))(this);
}

CNetGame::~CNetGame() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x9380))(this);
}

void CNetGame::Packet_UnoccupiedSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x9550))(this, pPacket);
}

void CNetGame::Packet_BulletSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x9650))(this, pPacket);
}

void CNetGame::Packet_AimSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x9750))(this, pPacket);
}

void CNetGame::Packet_PassengerSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x9840))(this, pPacket);
}

void CNetGame::Packet_TrailerSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x9930))(this, pPacket);
}

void CNetGame::Packet_MarkersSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x9A20))(this, pPacket);
}

void CNetGame::Packet_AuthKey(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x9C10))(this, pPacket);
}

void CNetGame::Packet_PlayerSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0xA250))(this, pPacket);
}

void CNetGame::Packet_VehicleSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0xA520))(this, pPacket);
}

void CNetGame::Packet_ConnectionLost(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0xA800))(this, pPacket);
}

void CNetGame::Packet_ConnectionSucceeded(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0xA890))(this, pPacket);
}

void CNetGame::UpdateNetwork() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0xAD70))(this);
}

void CNetGame::ShutdownForRestart() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0xA060))(this);
}

void CNetGame::CreateMarker(NUMBER nIndex, CVector position, char nIcon, int nColor, int nType) {
    ((void(__thiscall*)(CNetGame*, NUMBER, CVector, char, int, int))GetAddress(0x9E20))(this, nIndex, position, nIcon, nColor, nType);
}

void CNetGame::ResetMarkers() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x9DE0))(this);
}

CPlayerPool* CNetGame::GetPlayerPool() {
    return ((CPlayerPool * (__thiscall*)(CNetGame*)) GetAddress(0x1160))(this);
}

CObjectPool* CNetGame::GetObjectPool() {
    return ((CObjectPool * (__thiscall*)(CNetGame*)) GetAddress(0x2E00))(this);
}

CActorPool* CNetGame::GetActorPool() {
    return ((CActorPool * (__thiscall*)(CNetGame*)) GetAddress(0x2E10))(this);
}

CVehiclePool* CNetGame::GetVehiclePool() {
    return ((CVehiclePool * (__thiscall*)(CNetGame*)) GetAddress(0x1170))(this);
}

CPickupPool* CNetGame::GetPickupPool() {
    return ((CPickupPool * (__thiscall*)(CNetGame*)) GetAddress(0x8130))(this);
}

CMenuPool* CNetGame::GetMenuPool() {
    return ((CMenuPool * (__thiscall*)(CNetGame*)) GetAddress(0x8140))(this);
}

void CNetGame::SetState(int nState) {
    ((void(__thiscall*)(CNetGame*, int))GetAddress(0x8150))(this, nState);
}

int CNetGame::GetState() {
    return ((int(__thiscall*)(CNetGame*))GetAddress(0x2E20))(this);
}

BOOL CNetGame::LanMode() {
    return ((BOOL(__thiscall*)(CNetGame*))GetAddress(0x2E30))(this);
}

void CNetGame::ProcessGameStuff() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8680))(this);
}

void CNetGame::Packet_RSAPublicKeyMismatch(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet * pPacket)) GetAddress(0x8850))(this, pPacket);
}

void CNetGame::Packet_ConnectionBanned(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet * pPacket)) GetAddress(0x8870))(this, pPacket);
}

void CNetGame::Packet_NoFreeIncomingConnections(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet * pPacket)) GetAddress(0x88B0))(this, pPacket);
}

void CNetGame::Packet_InvalidPassword(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet * pPacket)) GetAddress(0x8920))(this, pPacket);
}

void CNetGame::Packet_ConnectionAttemptFailed(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet * pPacket)) GetAddress(0x8960))(this, pPacket);
}

void CNetGame::UpdatePlayers() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8A10))(this);
}

void CNetGame::InitializePools() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8160))(this);
}

void CNetGame::InitialNotification() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8380))(this);
}

RakClientInterface* CNetGame::GetRakClient() {
    return ((RakClientInterface * (__thiscall*)(CNetGame*)) GetAddress(0x1A40))(this);
}

__int64 CNetGame::GetCounter() {
    return ((__int64(__thiscall*)(CNetGame*))GetAddress(0x8500))(this);
}

void CNetGame::ResetPlayerPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8AE0))(this);
}

void CNetGame::Packet_ConnectionRequestAcepted(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x8890))(this, pPacket);
}

void CNetGame::ResetPools() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0xA010))(this);
}

SAMPAPI_END
