/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#undef GetObject

#include "common.h"
#include "CVector.h"
#include "CPlayerPool.h"
#include "CVehiclePool.h"
#include "CPickupPool.h"
#include "CGangZonePool.h"
#include "CTextDrawPool.h"
#include "CMenuPool.h"
#include "CObjectPool.h"
#include "CActorPool.h"
#include "CLabelPool.h"

#define NETMODE_STATS_UPDATE_DELAY 1000
#define NETMODE_INCAR_SENDRATE 30  // passenger/trailer/incar/unoccupied
#define NETMODE_ONFOOT_SENDRATE 30 // onfoot/unoccupied
#define NETMODE_FIRING_SENDRATE 30
#define LANMODE_INCAR_SENDRATE 15
#define LANMODE_ONFOOT_SENDRATE 15
#define NETMODE_SEND_MULTIPLIER 2
#define NETMODE_AIM_UPDATE_DELAY 500
#define NETMODE_HEAD_UPDATE_DELAY 1000
#define NETMODE_TARGET_UPDATE_DELAY 100
#define NETMODE_PLAYERS_UPDATE_DELAY 3000

struct Packet;
class RakClientInterface;

SAMP_BEGIN

enum MarkersMode {
	MARKERS_MODE_OFF,
	MARKERS_MODE_GLOBAL,
	MARKERS_MODE_STREAMED
};

class SAMP_API CNetGame {
public:
	struct SAMP_API Pools {
		CActorPool			*m_pActor;
		CObjectPool			*m_pObject;
		CGangZonePool		*m_pGangzone;
		CLabelPool			*m_pLabel;
		CTextDrawPool		*m_pTextdraw;
		CMenuPool			*m_pMenu;
		CPlayerPool			*m_pPlayer;
		CVehiclePool		*m_pVehicle;
		CPickupPool			*m_pPickup;
	};

	struct SAMP_API Settings {
		bool				m_bUseCJWalk;
		unsigned int	m_nDeadDropsMoney;
		float				m_fWorldBoundaries[4];
		bool				m_bAllowWeapons;
		float				m_fGravity;
		bool				m_bEnterExit;
		BOOL				m_bVehicleFriendlyFire;
		bool				m_bHoldTime;
  		bool				m_bInstagib;
  		bool				m_bZoneNames;
  		bool				m_bFriendlyFire;
		BOOL				m_bClassesAvailable;
		float				m_fNameTagsDrawDist;
		bool				m_bManualVehicleEngineAndLight;
		unsigned char	m_nWorldTimeHour;
		unsigned char	m_nWorldTimeMinute;
		unsigned char	m_nWeather;
		bool				m_bNoNametagsBehindWalls;
		int				m_nPlayerMarkersMode;
		float				m_fChatRadius;
		bool				m_bNameTags;
 		bool				m_bLtdChatRadius;
	};
	
	char pad_0[32];
	char							m_szHostAddress[257];
	char							m_szHostname[257];
	bool							m_bDisableCollision; // turns off interacting with any player in a vehicle
	bool							m_bUpdateCameraTarget;
	bool							m_bNametagStatus;
	int							m_nPort;
	BOOL							m_bLanMode;
	GTAREF						m_aMapIcons[100];
	int							m_nGameState;
	TICK							m_lastConnectAttempt;
	Settings					  *m_pSettings;
	RakClientInterface	  *m_pRakClient;
	Pools						  *m_pPools;
	
	enum { WaitConnect = 9, Connecting = 13, Connected, WaitJoin, Restarting = 18 };

	static int &nVehiclePoolProcessFlag;
	static int &nPickupPoolProcessFlag;
	static TICK &lastPlayersUpdateRequest;

	~CNetGame();

	CPickupPool *GetPickupPool();
	CMenuPool *GetMenuPool();
	void SetState(int nValue);
	void InitializePools();
	void InitialNotification();
	void InitializeGameLogic();
	void Connect();
	void SpawnScreen();
	void Packet_RSAPublicKeyMismatch(Packet *pPacket);
	void Packet_ConnectionBanned(Packet *pPacket);
	void Packet_ConnectionRequestAcepted(Packet *pPacket);
	void Packet_NoFreeIncomingConnections(Packet *pPacket);
	void Packet_DisconnectionNotification(Packet *pPacket);
	void Packet_InvalidPassword(Packet *pPacket);
	void Packet_ConnectionAttemptFailed(Packet *pPacket);
	void UpdatePlayers();
	void DeleteMarker(NUMBER nIndex);
	void ResetPlayerPool();
	void ResetVehiclePool();
	void ResetTextDrawPool();
	void ResetObjectPool(); 
	void ResetGangZonePool();
	void ResetPickupPool();
	void ResetMenuPool();
	void ResetLabelPool();
	void ResetActorPool();
	void Packet_UnoccupiedSync(Packet *pPacket);
	void Packet_BulletSync(Packet *pPacket);
	void Packet_AimSync(Packet *pPacket);
	void Packet_PassengerSync(Packet *pPacket);
	void Packet_TrailerSync(Packet *pPacket);
	void Packet_MarkersSync(Packet *pPacket);
	void Packet_AuthKey(Packet *pPacket);
	void ResetMarkers();
	void CreateMarker(NUMBER nIndex, CVector position, char nIcon, int nColor, int nType);
	void ResetPools();
	void ShutdownForRestart();
	void Packet_PlayerSync(Packet *pPacket);
	void Packet_VehicleSync(Packet *pPacket);
	void Packet_ConnectionLost(Packet *pPacket);
	void Packet_ConnectionSucceeded(Packet *pPacket);
	void UpdateNetwork();
	void Process();
	void ProcessGameStuff();
	CPlayerPool *GetPlayerPool();
	CObjectPool *GetObjectPool() { return m_pPools->m_pObject; }
	CActorPool *GetActorPool() { return m_pPools->m_pActor; }
	int GetState() { return m_nGameState; }
	BOOL LanMode() { return m_bLanMode; }
	CVehiclePool *GetVehiclePool();
	RakClientInterface *GetRakClient() { return m_pRakClient; }
	__int64 GetCounter();
};

extern CNetGame *&pNetGame;

SAMP_END