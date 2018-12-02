/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"
#include "CVector.h"
#include "CVehicle.h"
#include "Packets.h"
#include "CPed.h"

SAMP_BEGIN

enum eSpecialAction : unsigned char {
	SPECIAL_ACTION_NONE,
	SPECIAL_ACTION_DUCK,
	SPECIAL_ACTION_USEJETPACK,
	SPECIAL_ACTION_ENTER_VEHICLE,
	SPECIAL_ACTION_EXIT_VEHICLE,
	SPECIAL_ACTION_DANCE1,
	SPECIAL_ACTION_DANCE2,
	SPECIAL_ACTION_DANCE3,
	SPECIAL_ACTION_DANCE4,
	SPECIAL_ACTION_HANDSUP,
	SPECIAL_ACTION_USECELLPHONE,
	SPECIAL_ACTION_SITTING,
	SPECIAL_ACTION_STOPUSECELLPHONE,
	SPECIAL_ACTION_DRINK_BEER = 20,
	SPECIAL_ACTION_SMOKE_CIGGY,
	SPECIAL_ACTION_DRINK_WINE,
	SPECIAL_ACTION_DRINK_SPRUNK,
	SPECIAL_ACTION_CUFFED,
	SPECIAL_ACTION_CARRY,
	SPECIAL_ACTION_URINATING = 68
};

enum ePlayerState : unsigned char {
	PLAYER_STATE_NONE,
	PLAYER_STATE_ONFOOT = 17,
	PLAYER_STATE_DRIVER = 19,
	PLAYER_STATE_PASSENGER = 18,
	// PLAYER_STATE_EXIT_VEHICLE,
	// PLAYER_STATE_ENTER_VEHICLE_DRIVER,
	// PLAYER_STATE_ENTER_VEHICLE_PASSENGER,
	PLAYER_STATE_WASTED = 32,
	PLAYER_STATE_SPAWNED = 33,
	// PLAYER_STATE_SPECTATING
};

enum eUpdateType : unsigned char {
	UPDATE_TYPE_NONE,
	UPDATE_TYPE_ONFOOT = 16,
	UPDATE_TYPE_DRIVER = 17,
	UPDATE_TYPE_PASSENGER = 18,
};

// wtf
enum ePlayerStatus {
	PLAYER_STATUS_NONE = 1, 
	PLAYER_STATUS_PLAYING = 0,
	PLAYER_STATUS_TIMEOUT = 2
};

class CRemotePlayer {
public:
	CPed						  *m_pPed;
	CVehicle					  *m_pVehicle;
	unsigned char				m_nTeam;
	ePlayerState				m_nPlayerState;
	unsigned char				m_nSeat;
	int							field_b;
	BOOL							m_bPassengerDriveBy;
	int							field_13;
	unsigned char				pad_17[60];
	CVector						m_vPosnDiff; // target pos - current pos
	float							m_fVehicleRoll[4];
	unsigned int				pad_6f[3];
	CVector						m_vOnfootTargetPos;
	CVector						m_vOnfootTargetSpeed;
	CVector						m_vIncarTargetPos;
	CVector						m_vIncarTargetSpeed;
	ID								m_nPlayer;
	ID								m_nVehicle;
	unsigned int				field_af;
	BOOL							m_bShowNameTag;
	BOOL							m_bHasJetPack;
	eSpecialAction				m_nSpecialAction;
	unsigned int				pad_bc[3];
	
	PACKET::OnfootData		m_onfootData;
	PACKET::IncarData			m_incarData;
	PACKET::TrailerData		m_trailerData;
	PACKET::PassengerData	m_passengerData;
	PACKET::AimData			m_aimData;
	
	float							m_fReportedArmor;
	float							m_fReportedHealth;
	unsigned int				field_1c0;
	eUpdateType					m_nUpdateFromNetwork;
	unsigned int				m_dwTick;
	unsigned int				m_dwLastStreamedInTick;
	unsigned int				field_1cd;
	ePlayerStatus				m_nPlayerStatus;
	
	struct {
		CVector			m_vDirection;
		unsigned long	m_dwLastUpdateTick;
		unsigned long	m_dwLastLookTick;
	}								m_head;
	
	BOOL							m_bMarkerState;
	CVector						m_vMarkerPosn;
	GTAREF						m_hMarker;

	CRemotePlayer();
	~CRemotePlayer();
	
	// the 1st parameter is unused
	BOOL Spawn(int nTeam, int nSkin, int nPlayerNumber, CVector *pPos, float fRotation, D3DCOLOR dwColor, char nFightingStyle);
	void SetMarkerState(int nState);
	void CreateMarkerAt(CVector vPos);
	BOOL SurfingOrInTurretMode();
	void ProcessHead();
	void ProcessSurfing();
	void Process();
	void PutInVehicle();
	void RemoveFromVehicle();
	void ProcessSpecialActions();
	
	void Synchronize(PACKET::AimData *pData);
	void Synchronize(PACKET::UnoccupiedData *pData);
	void Synchronize(PACKET::TrailerData *pData);
	void Synchronize(PACKET::OnfootData *pData);
	void Synchronize(PACKET::IncarData *pData);
	void Synchronize(PACKET::PassengerData *pData);

	float GetDistanceToPlayer(CRemotePlayer *pPlayer);
	float GetDistanceToLocalPlayerPed();
	void ChangeState(int nOldState, int nNewState);
	void SetState(int nState);
	int GetStatus();
	void ResetData();
	void Reset();
	void Kill();
	void Say(const char *szText);
	void ExitVehicle();
	void EnterVehicle(ID nVehicle, BOOL bPassenger);
	
	D3DCOLOR GetColorAsARGB();
	D3DCOLOR GetColorAsRGBA();
	void SetColor(D3DCOLOR dwColor);

	void SetPositionAndSpeed(CVector *pPos, CVector *pSpeed);
};

SAMP_END