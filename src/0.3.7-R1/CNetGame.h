/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"
#include "CVector.h"
#include "CPlayerPool.h"
#include "CVehiclePool.h"
#include "CPickupPool.h"
#include "CGangzonePool.h"
#include "CTextdrawPool.h"
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
#define NETMODE_AIM_SENDRATE 100
#define NETMODE_HEAD_SYNC_DELAY 1000

struct Packet;
class RakClientInterface;

SAMP_BEGIN

enum eMarkersMode : unsigned int {
	PLAYER_MARKERS_MODE_OFF,
	PLAYER_MARKERS_MODE_GLOBAL,
	PLAYER_MARKERS_MODE_STREAMED,
};

enum eGameState : unsigned int {
	GAMESTATE_WAIT_CONNECT = 9,
	GAMESTATE_CONNECTING = 13,
	GAMESTATE_CONNECTED,
	GAMESTATE_AWAIT_JOIN,
	GAMESTATE_RESTARTING = 18
};

class SAMP_API CNetGame {
public:
	struct SAMP_API Pools {
		CActorPool			*m_pActor;
		CObjectPool			*m_pObject;
		CGangzonePool		*m_pGangzone;
		CLabelPool			*m_pLabel;
		CTextdrawPool		*m_pTextdraw;
		CMenuPool			*m_pMenu;
		CPlayerPool			*m_pPlayer;
		CVehiclePool		*m_pVehicle;
		CPickupPool			*m_pPickup;
	};

	struct SAMP_API ServerPresets {
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
		eMarkersMode	m_nPlayerMarkersMode;
		float				m_fChatRadius;
		bool				m_bNameTags;
 		bool				m_bLtdChatRadius;
	};

	struct SAMP_API ServerInfo {
		unsigned int m_nIp;
		unsigned short m_nPort;
	};
	
	int							field_0;
	ServerInfo				  *m_pServerInfo;
	unsigned char				pad_8[24];
	char							m_szHostAddress[257];
	char							m_szHostname[257];
	bool							m_bDisableCollision; // turns off interacting with any player in a vehicle
	bool							unknown;
	bool							m_bNametagStatus;
	unsigned int				m_nPort;
	BOOL							m_bLanMode;
	GTAREF						m_aMapIcons[100];
	eGameState					m_nGameState;
	unsigned long				m_dwLastConnectAttempt;
	ServerPresets			  *m_pSettings;
	RakClientInterface	  *m_pRakClient;
	Pools						  *m_pPools;

	static int &nVehiclePoolProcessFlag;
	static int &nPickupPoolProcessFlag;
	static unsigned long &dwLastPlayersInfoUpdateTick;

	~CNetGame();

	void InitGameLogic();
	void SetGameState(unsigned int nState);

	void DeleteMapIcon(unsigned char nIdx);
	void CreateMapIcon(unsigned char nIdx, CVector vPos, unsigned char nMarkerType, D3DCOLOR dwColor, unsigned char nType);
	void ResetMapIcons();

	CPickupPool *GetPickupPool();
	CPlayerPool *GetPlayerPool();
	CVehiclePool *GetVehiclePool();
	CMenuPool *GetMenuPool();

	void ResetVehiclePool();
	void ResetTextdrawPool();
	void ResetObjectPool();
	void ResetGangzonePool();
	void ResetPickupPool();
	void ResetMenuPool();
	void ResetTextLabels();
	void ResetActorPool();

	void Packet_UnoccupiedSync(Packet *pPacket);
	void Packet_BulletSync(Packet *pPacket);
	void Packet_AimSync(Packet *pPacket);
	void Packet_PassengerSync(Packet *pPacket);
	void Packet_TrailerSync(Packet *pPacket);
	void Packet_MarkersSync(Packet *pPacket);
	void Packet_AuthKey(Packet *pPacket);
	void Packet_DisconnectionNotification(Packet *pPacket);
	void Packet_PlayerSync(Packet *pPacket);
	void Packet_VehicleSync(Packet *pPacket);
	void Packet_ConnectionLost(Packet *pPacket);
	void Packet_ConnectionSucceeded(Packet *pPacket);
	void Packet_InitializeEncryption(Packet *pPacket);
	void Packet_ConnectionBanned(Packet *pPacket);
	void Packet_NoFreeIncomingConnections(Packet *pPacket);
	void Packet_InvalidPassword(Packet *pPacket);
	void Packet_ConnectionAttemptFailed(Packet *pPacket);

	void UpdateNetwork();
	void UpdatePlayersInfo(); // score & ping
	void ShutdownForRestart();

	void Process();
};

extern CNetGame *&pNetGame;

SAMP_END