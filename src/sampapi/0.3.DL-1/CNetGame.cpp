/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CNetGame.h"

SAMPAPI_BEGIN_V03DL_1

SAMPAPI_VAR CNetGame*& RefNetGame() {
    return *(CNetGame**)GetAddress(0x2ACA24);
}

SAMPAPI_VAR TICK& CNetGame::RefLastPlayersUpdateRequest() {
    return *(TICK*)GetAddress(0x156B30);
}

CNetGame::CNetGame(const char* szHostAddress, int nPort, const char* szNick, const char* szPass) {
    ((void(__thiscall*)(CNetGame*, const char*, int, const char*, const char*))GetAddress(0xB610))(this, szHostAddress, nPort, szNick, szPass);
}

CNetGame::~CNetGame() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x9570))(this);
}

CPickupPool* CNetGame::GetPickupPool() {
    return ((CPickupPool * (__thiscall*)(CNetGame*)) GetAddress(0x81D0))(this);
}

CMenuPool* CNetGame::GetMenuPool() {
    return ((CMenuPool * (__thiscall*)(CNetGame*)) GetAddress(0x81E0))(this);
}

void CNetGame::SetState(int nValue) {
    ((void(__thiscall*)(CNetGame*, int))GetAddress(0x81F0))(this, nValue);
}

void CNetGame::InitializePools() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8230))(this);
}

void CNetGame::InitialNotification() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8450))(this);
}

void CNetGame::InitializeGameLogic() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x85E0))(this);
}

void CNetGame::Connect() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8630))(this);
}

void CNetGame::SpawnScreen() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x86A0))(this);
}

void CNetGame::Packet_RSAPublicKeyMismatch(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x8A40))(this, pPacket);
}

void CNetGame::Packet_ConnectionBanned(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x8A60))(this, pPacket);
}

void CNetGame::Packet_ConnectionRequestAcepted(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x8A80))(this, pPacket);
}

void CNetGame::Packet_NoFreeIncomingConnections(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x8AA0))(this, pPacket);
}

void CNetGame::Packet_DisconnectionNotification(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x8AD0))(this, pPacket);
}

void CNetGame::Packet_InvalidPassword(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x8B10))(this, pPacket);
}

void CNetGame::Packet_ConnectionAttemptFailed(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x8B50))(this, pPacket);
}

void CNetGame::UpdatePlayers() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8C00))(this);
}

void CNetGame::DeleteMarker(NUMBER nIndex) {
    ((void(__thiscall*)(CNetGame*, NUMBER))GetAddress(0x8CA0))(this, nIndex);
}

void CNetGame::ResetPlayerPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8CD0))(this);
}

void CNetGame::ResetVehiclePool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8D70))(this);
}

void CNetGame::ResetTextDrawPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8E10))(this);
}

void CNetGame::ResetObjectPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8EB0))(this);
}

void CNetGame::ResetGangZonePool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8F50))(this);
}

void CNetGame::ResetPickupPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8FF0))(this);
}

void CNetGame::ResetMenuPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x9050))(this);
}

void CNetGame::ResetLabelPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x90E0))(this);
}

void CNetGame::ResetActorPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x9180))(this);
}

void CNetGame::Packet_UnoccupiedSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x9730))(this, pPacket);
}

void CNetGame::Packet_BulletSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x9830))(this, pPacket);
}

void CNetGame::Packet_AimSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x9930))(this, pPacket);
}

void CNetGame::Packet_PassengerSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x9A20))(this, pPacket);
}

void CNetGame::Packet_TrailerSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x9B10))(this, pPacket);
}

void CNetGame::Packet_MarkersSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x9C00))(this, pPacket);
}

void CNetGame::Packet_AuthKey(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x9DF0))(this, pPacket);
}

void CNetGame::ResetMarkers() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x9FB0))(this);
}

void CNetGame::CreateMarker(NUMBER nIndex, CVector position, char nIcon, int nColor, int nType) {
    ((void(__thiscall*)(CNetGame*, NUMBER, CVector, char, int, int))GetAddress(0x9FF0))(this, nIndex, position, nIcon, nColor, nType);
}

void CNetGame::ResetPools() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0xA1E0))(this);
}

void CNetGame::ShutdownForRestart() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0xA230))(this);
}

void CNetGame::Packet_PlayerSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0xA420))(this, pPacket);
}

void CNetGame::Packet_VehicleSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0xA6F0))(this, pPacket);
}

void CNetGame::Packet_ConnectionLost(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0xA9D0))(this, pPacket);
}

void CNetGame::Packet_ConnectionSucceeded(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0xAA60))(this, pPacket);
}

void CNetGame::UpdateNetwork() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0xAF40))(this);
}

void CNetGame::Process() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0xB290))(this);
}

void CNetGame::ProcessGameStuff() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8810))(this);
}

CPlayerPool* CNetGame::GetPlayerPool() {
    return ((CPlayerPool * (__thiscall*)(CNetGame*)) GetAddress(0x1170))(this);
}

CObjectPool* CNetGame::GetObjectPool() {
    return ((CObjectPool * (__thiscall*)(CNetGame*)) GetAddress(0x2E40))(this);
}

CActorPool* CNetGame::GetActorPool() {
    return ((CActorPool * (__thiscall*)(CNetGame*)) GetAddress(0x2E50))(this);
}

int CNetGame::GetState() {
    return ((int(__thiscall*)(CNetGame*))GetAddress(0x2E60))(this);
}

BOOL CNetGame::LanMode() {
    return ((BOOL(__thiscall*)(CNetGame*))GetAddress(0x2E70))(this);
}

CVehiclePool* CNetGame::GetVehiclePool() {
    return ((CVehiclePool * (__thiscall*)(CNetGame*)) GetAddress(0x1180))(this);
}

RakClientInterface* CNetGame::GetRakClient() {
    return this->m_pRakClient;
}

__int64 CNetGame::GetCounter() {
    return ((__int64(__thiscall*)(CNetGame*))GetAddress(0x85D0))(this);
}

SAMPAPI_END
