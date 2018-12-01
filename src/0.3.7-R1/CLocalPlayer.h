/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"
#include "CPed.h"
#include "Packets.h"
#include "CVehicle.h"

#define PUT_IN_VEHICLE_AFTER 5000

SAMP_BEGIN

enum eSpectatingMode : unsigned char {
	SPEC_MODE_VEHICLE = 3, 
	SPEC_MODE_PLAYER = 4,
	SPEC_MODE_FIXED = 15,
	SPEC_MODE_SIDE = 14
};

enum eSpectatingType : unsigned char {
	SPEC_TYPE_NONE,
	SPEC_TYPE_PLAYER,
	SPEC_TYPE_VEHICLE
};

enum eSurfingMode : unsigned int {
	SURF_MODE_NONE,
	SURF_MODE_UNFIXED,
	SURF_MODE_FIXED
};

class CLocalPlayer {
public:
	CPed						  *m_pPed;
	unsigned short				m_nCurrentAnim;
	unsigned short				m_nAnimFlags;
	unsigned int				field_8;
	BOOL							m_bIsActive;
	BOOL							m_bIsWasted;
	ID								m_nCurrentVehicle;
	ID								m_nLastVehicle;
	
	PACKET::OnfootData		m_onfootData;
	PACKET::PassengerData	m_passengerData;
	PACKET::TrailerData		m_trailerData;
	PACKET::IncarData			m_incarData;
	PACKET::AimData			m_aimData;
	
	// used by RPC_SetSpawnInfo
	struct SAMP_API SpawnInfo {
		unsigned char				m_nTeam;
		int							m_nSpawnSkin;
		unsigned char				field_c;
		CVector						m_vPosition;
		float							m_fRotation;
		int							m_aWeapon[3];
		int							m_aAmmo[3];
	}								m_spawnInfo;

	BOOL							m_bHasSpawnInfo;
	BOOL							m_bClearedToSpawn;
	unsigned int				m_dwLastSpawnSelectionTick;
	unsigned int				m_dwInitialSelectionTick;
	BOOL							m_bDoesSpectating;
	unsigned char				m_nTeam;
	short							field_14b;
	unsigned long				m_dwLastSendTick;
	unsigned long				m_dwLastSendSpecTick;
	unsigned long				m_dwLastAimSendTick;
	unsigned long				m_dwLastStatsUpdateTick;
	unsigned long				m_dwLastWeaponsUpdateTick;

	struct {
		ID								m_nAimedPlayer;
		ID								m_nAimedActor;
		unsigned char				m_nCurrentWeapon;
		unsigned char				m_aLastWeapon[13];
		int							m_aLastWeaponAmmo[13];
	}								m_weaponsData;

	BOOL							m_bPassengerDriveBy;
	unsigned char				m_nCurrentInterior;
	BOOL							m_bInRCMode;
	
	struct {
		ID	m_nObject;
		ID	m_nVehicle;
		ID	m_nPlayer;
		ID	m_nActor;
	}								m_cameraTarget;

	struct {
		CVector			m_vDirection;
		unsigned long	m_dwLastUpdateTick;
		unsigned long	m_dwLastLookTick;
	}								m_head;
	
	unsigned long				m_dwLastHeadUpdateTick; // wtf
	unsigned char				pad_1d0[260];
	
	struct {
		BOOL				m_bIsActive;
		CVector			m_vPosition;
		int				field_10;
		ID					m_nVehicle;
		unsigned long	m_dwTick;
		CVehicle		  *m_pVehicle;
		int				field_1A;
		eSurfingMode	m_nMode;
	}							m_surfing;
	
	struct {
		BOOL						m_bEnableAfterDeath;
		int						m_nSelected;
		BOOL						m_bWaitingForSpawnRequestReply;
		BOOL						m_bIsActive;
		unsigned long			m_dwDisplayZoneTick; // maybe
	}							m_classSelection;
	
	struct {
		eSpectatingMode m_nMode;
		eSpectatingType m_nType;
		int				 m_nObject; // id
		BOOL				 m_bProcessed;
	}							m_spectating;
	
	struct {
		ID		m_nVehicleUpdating;
		int	m_nBumper;
		int	m_nDoor;
		bool	m_bLight;
		bool	m_bWheel;
	}							m_vehicleDamage;

	static unsigned long &dwTimeElapsedFromFPressed;
	static int &nIncarSendrate;  // = NETMODE_INCAR_SENDRATE;
	static int &nOnfootSendrate; // = NETMODE_ONFOOT_SENDRATE;
	static int &nFiringSendrate; // = NETMODE_FIRING_SENDRATE;
	static int &nSendMultiplier; // = NETMODE_SEND_MULTIPLIER;
	static bool &bDrawCameraTargetLabel;

	static void SendSpawnRequest();

	CLocalPlayer();

	CPed *GetPed();
	void ResetData();
	void ProcessHead();
	void SetSpecialAction(char nAction);
	char GetSpecialAction();
	void SetSpawnInfo(const SpawnInfo *pInfo);
	BOOL Spawn();
	void SetColor(D3DCOLOR dwColor);
	D3DCOLOR GetColorAsARGB();
	D3DCOLOR GetColorAsRGBA();
	void ProcessWorldBoundsOnfoot();
	void ProcessWorldBoundsIncar();
	void RequestSpawn();
	void HandleClassSelection(); // close & handle input ("Enter" button)
	void HandleClassSelectionOutcome(BOOL bOutcome);
	void ToggleSpectating(BOOL bEnable);
	void SpectateForVehicle(ID nId);
	void SpectateForPlayer(ID nId);
	ID GetAimedPlayer();
	ID GetAimedActor();
	void SendUnoccupiedData(ID nVehicle, int arg2);
	void SendAimData();
	void SendWastedNotification();
	void RequestClass(int nClass);
	void SendInteriorChange(char nInterior);
	void Say(const char *szText);
	void SendEnterVehicleNotification(ID nVehicle, BOOL bPassenger);
	void SendExitVehicleNotification(ID nVehicle);
	void SendStats();
	void UpdateVehicleDamage(ID nId);
	void NextClass(); // the ">>" button in the class selection window
	void PrevClass(); // "<<"
	void SendWeapons();
	void EnterNearestVehicleAsPassenger();
	void SendIncarData();
	void Process();
	void EndSurfing();
	int GetNumberOfPlayersInLocalRange();
	void SendOnfootData();
	void SendTrailerData(ID nTrailer);
	void SendPassengerData();
	int GetUndrivenSendrate();
	int GetOnfootSendrate();
	int GetIncarSendrate();
	void DrawCameraTargetLabel();
	void ProcessSpectating();
	void SendTakeDamage(ID nPlayer, float fDamage, int nWeapon, int nBodyPart);
	void SendGiveDamage(ID nPlayer, float fDamage, int nWeapon, int nBodyPart);
	void ProcessSurfing();
};

SAMP_END