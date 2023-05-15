/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CNetGame.h"

SAMPAPI_BEGIN_V037R5_1

SAMPAPI_VAR CNetGame*& RefNetGame() {
    return *(CNetGame**)GetAddress(0x26EB94);
}

SAMPAPI_VAR TICK& CNetGame::RefLastPlayersUpdateRequest() {
    return *(TICK*)GetAddress(0x118A10);
}

CNetGame::CNetGame(const char* szHostAddress, int nPort, const char* szNick, const char* szPass) {
    ((void(__thiscall*)(CNetGame*, const char*, int, const char*, const char*))GetAddress(0xB930))(this, szHostAddress, nPort, szNick, szPass);
}

CNetGame::~CNetGame() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x9880))(this);
}

CPickupPool* CNetGame::GetPickupPool() {
    return ((CPickupPool * (__thiscall*)(CNetGame*)) GetAddress(0x84E0))(this);
}

CMenuPool* CNetGame::GetMenuPool() {
    return ((CMenuPool * (__thiscall*)(CNetGame*)) GetAddress(0x84F0))(this);
}

void CNetGame::SetState(int nValue) {
    ((void(__thiscall*)(CNetGame*, int))GetAddress(0x8500))(this, nValue);
}

void CNetGame::InitializePools() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8540))(this);
}

void CNetGame::InitialNotification() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8760))(this);
}

void CNetGame::InitializeGameLogic() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x88F0))(this);
}

void CNetGame::Connect() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8940))(this);
}

void CNetGame::SpawnScreen() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x89B0))(this);
}

void CNetGame::Packet_RSAPublicKeyMismatch(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x8D50))(this, pPacket);
}

void CNetGame::Packet_ConnectionBanned(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x8D70))(this, pPacket);
}

void CNetGame::Packet_ConnectionRequestAcepted(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x8D90))(this, pPacket);
}

void CNetGame::Packet_NoFreeIncomingConnections(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x8DB0))(this, pPacket);
}

void CNetGame::Packet_DisconnectionNotification(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x8DE0))(this, pPacket);
}

void CNetGame::Packet_InvalidPassword(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x8E20))(this, pPacket);
}

void CNetGame::Packet_ConnectionAttemptFailed(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x8E60))(this, pPacket);
}

void CNetGame::UpdatePlayers() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8F10))(this);
}

void CNetGame::DeleteMarker(NUMBER nIndex) {
    ((void(__thiscall*)(CNetGame*, NUMBER))GetAddress(0x8FB0))(this, nIndex);
}

void CNetGame::ResetPlayerPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8FE0))(this);
}

void CNetGame::ResetVehiclePool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x9080))(this);
}

void CNetGame::ResetTextDrawPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x9110))(this);
}

void CNetGame::ResetObjectPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x91B0))(this);
}

void CNetGame::ResetGangZonePool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x9250))(this);
}

void CNetGame::ResetPickupPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x92F0))(this);
}

void CNetGame::ResetMenuPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x9350))(this);
}

void CNetGame::ResetLabelPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x9490))(this);
}

void CNetGame::ResetActorPool() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x93F0))(this);
}

void CNetGame::Packet_UnoccupiedSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x9A40))(this, pPacket);
}

void CNetGame::Packet_BulletSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x9B40))(this, pPacket);
}

void CNetGame::Packet_AimSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x9C40))(this, pPacket);
}

void CNetGame::Packet_PassengerSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x9D30))(this, pPacket);
}

void CNetGame::Packet_TrailerSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x9E20))(this, pPacket);
}

void CNetGame::Packet_MarkersSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0x9F10))(this, pPacket);
}

void CNetGame::Packet_AuthKey(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0xA100))(this, pPacket);
}

void CNetGame::ResetMarkers() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0xA2C0))(this);
}

void CNetGame::CreateMarker(NUMBER nIndex, CVector position, char nIcon, int nColor, int nType) {
    ((void(__thiscall*)(CNetGame*, NUMBER, CVector, char, int, int))GetAddress(0xA300))(this, nIndex, position, nIcon, nColor, nType);
}

void CNetGame::ResetPools() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0xA4F0))(this);
}

void CNetGame::ShutdownForRestart() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0xA540))(this);
}

void CNetGame::Packet_PlayerSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0xA740))(this, pPacket);
}

void CNetGame::Packet_VehicleSync(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0xAA10))(this, pPacket);
}

void CNetGame::Packet_ConnectionLost(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0xACF0))(this, pPacket);
}

void CNetGame::Packet_ConnectionSucceeded(Packet* pPacket) {
    ((void(__thiscall*)(CNetGame*, Packet*))GetAddress(0xAD80))(this, pPacket);
}

void CNetGame::UpdateNetwork() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0xB260))(this);
}

void CNetGame::Process() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0xB5B0))(this);
}

void CNetGame::ProcessGameStuff() {
    ((void(__thiscall*)(CNetGame*))GetAddress(0x8B20))(this);
}

CPlayerPool* CNetGame::GetPlayerPool() {
    return ((CPlayerPool * (__thiscall*)(CNetGame*)) GetAddress(0x1170))(this);
}

CObjectPool* CNetGame::GetObjectPool() {
    return ((CObjectPool * (__thiscall*)(CNetGame*)) GetAddress(0x2E10))(this);
}

CActorPool* CNetGame::GetActorPool() {
    return ((CActorPool * (__thiscall*)(CNetGame*)) GetAddress(0x2E20))(this);
}

int CNetGame::GetState() {
    return ((int(__thiscall*)(CNetGame*))GetAddress(0x2E30))(this);
}

BOOL CNetGame::LanMode() {
    return ((BOOL(__thiscall*)(CNetGame*))GetAddress(0x2E40))(this);
}

CVehiclePool* CNetGame::GetVehiclePool() {
    return ((CVehiclePool * (__thiscall*)(CNetGame*)) GetAddress(0x1180))(this);
}

RakClientInterface* CNetGame::GetRakClient() {
    return ((RakClientInterface * (__thiscall*)(CNetGame*)) GetAddress(0xBBC0))(this);
}

__int64 CNetGame::GetCounter() {
    return ((__int64(__thiscall*)(CNetGame*))GetAddress(0x88E0))(this);
}

SAMPAPI_END
