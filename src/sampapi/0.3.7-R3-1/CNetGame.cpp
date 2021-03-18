/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CNetGame.h"

SAMPAPI_BEGIN_V037R3_1

SAMPAPI_VAR CNetGame*& RefNetGame() {
    return *(CNetGame**)GetAddress(0x26E8DC);
}

SAMPAPI_VAR TICK& CNetGame::RefLastPlayersUpdateRequest() {
    return *(TICK*)GetAddress(0x1189F0);
}

CNetGame::CNetGame(const char* szHostAddress, int nPort, const char* szNick, const char* szPass) {
    ((void(__thiscall*)(CNetGame*, const char*, int, const char*, const char*))GetAddress(0xB5F0))(this, szHostAddress, nPort, szNick, szPass);
}

CNetGame::~CNetGame() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x9510))(this);
}

CPickupPool* CNetGame::GetPickupPool() {
    return ((CPickupPool * (__thiscall*)(CNetGame*)) GetAddress(0x8170))(this);
}

CMenuPool* CNetGame::GetMenuPool() {
    return ((CMenuPool * (__thiscall*)(CNetGame*)) GetAddress(0x8180))(this);
}

void CNetGame::SetState(int nValue) {
    ((void(__thiscall*)(CNetGame*, int))GetAddress(0x8190))(this, nValue);
}

void CNetGame::InitializePools() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x81D0))(this);
}

void CNetGame::InitialNotification() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x83F0))(this);
}

void CNetGame::InitializeGameLogic() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8580))(this);
}

void CNetGame::Connect() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x85D0))(this);
}

void CNetGame::SpawnScreen() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8640))(this);
}

void CNetGame::Packet_RSAPublicKeyMismatch(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x89E0))(this, pPacket);
}

void CNetGame::Packet_ConnectionBanned(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x8A00))(this, pPacket);
}

void CNetGame::Packet_ConnectionRequestAcepted(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x8A20))(this, pPacket);
}

void CNetGame::Packet_NoFreeIncomingConnections(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x8A40))(this, pPacket);
}

void CNetGame::Packet_DisconnectionNotification(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x8A70))(this, pPacket);
}

void CNetGame::Packet_InvalidPassword(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x8AB0))(this, pPacket);
}

void CNetGame::Packet_ConnectionAttemptFailed(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x8AF0))(this, pPacket);
}

void CNetGame::UpdatePlayers() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8BA0))(this);
}

void CNetGame::DeleteMarker(NUMBER nIndex) {
    ((void(__thiscall*)(CNetGame*, NUMBER))GetAddress(0x8C40))(this, nIndex);
}

void CNetGame::ResetPlayerPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8C70))(this);
}

void CNetGame::ResetVehiclePool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8D10))(this);
}

void CNetGame::ResetTextDrawPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8DB0))(this);
}

void CNetGame::ResetObjectPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8E50))(this);
}

void CNetGame::ResetGangZonePool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8EF0))(this);
}

void CNetGame::ResetPickupPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8F90))(this);
}

void CNetGame::ResetMenuPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8FF0))(this);
}

void CNetGame::ResetLabelPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x9080))(this);
}

void CNetGame::ResetActorPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x9120))(this);
}

void CNetGame::Packet_UnoccupiedSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x96D0))(this, pPacket);
}

void CNetGame::Packet_BulletSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x97D0))(this, pPacket);
}

void CNetGame::Packet_AimSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x98D0))(this, pPacket);
}

void CNetGame::Packet_PassengerSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x99C0))(this, pPacket);
}

void CNetGame::Packet_TrailerSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x9AB0))(this, pPacket);
}

void CNetGame::Packet_MarkersSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x9BA0))(this, pPacket);
}

void CNetGame::Packet_AuthKey(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x9D90))(this, pPacket);
}

void CNetGame::ResetMarkers() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x9F50))(this);
}

void CNetGame::CreateMarker(NUMBER nIndex, CVector position, char nIcon, int nColor, int nType) {
    ((void(__thiscall*)(CNetGame*, NUMBER, CVector, char, int, int))GetAddress(0x9F90))(this, nIndex, position, nIcon, nColor, nType);
}

void CNetGame::ResetPools() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0xA190))(this);
}

void CNetGame::ShutdownForRestart() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0xA1E0))(this);
}

void CNetGame::Packet_PlayerSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0xA3E0))(this, pPacket);
}

void CNetGame::Packet_VehicleSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0xA6B0))(this, pPacket);
}

void CNetGame::Packet_ConnectionLost(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0xA990))(this, pPacket);
}

void CNetGame::Packet_ConnectionSucceeded(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0xAA20))(this, pPacket);
}

void CNetGame::UpdateNetwork() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0xAF20))(this);
}

void CNetGame::Process() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0xB270))(this);
}

void CNetGame::ProcessGameStuff() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x87B0))(this);
}

CPlayerPool* CNetGame::GetPlayerPool() {
    return ((CPlayerPool * (__thiscall*)(CNetGame*)) GetAddress(0x1160))(this);
}

CObjectPool* CNetGame::GetObjectPool() {
    return ((CObjectPool * (__thiscall*)(CNetGame*)) GetAddress(0x2DF0))(this);
}

CActorPool* CNetGame::GetActorPool() {
    return ((CActorPool * (__thiscall*)(CNetGame*)) GetAddress(0x2E00))(this);
}

int CNetGame::GetState() {
    return ((int(__thiscall*)(CNetGame*))GetAddress(0x2E10))(this);
}

BOOL CNetGame::LanMode() {
    return ((BOOL(__thiscall*)(CNetGame*))GetAddress(0x2E20))(this);
}

CVehiclePool* CNetGame::GetVehiclePool() {
    return ((CVehiclePool * (__thiscall*)(CNetGame*)) GetAddress(0x1170))(this);
}

RakClientInterface* CNetGame::GetRakClient() {
    return ((RakClientInterface * (__thiscall*)(CNetGame*)) GetAddress(0x1A40))(this);
}

__int64 CNetGame::GetCounter() {
    return ((__int64(__thiscall*)(CNetGame*))GetAddress(0x8570))(this);
}

SAMPAPI_END
