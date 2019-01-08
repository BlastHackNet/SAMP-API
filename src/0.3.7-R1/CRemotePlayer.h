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
#include "Animation.h"
#include "SpecialAction.h"

SAMP_BEGIN

enum PlayerState {
	PLAYER_STATE_NONE,
	PLAYER_STATE_ONFOOT = 17,
	PLAYER_STATE_DRIVER = 19,
	PLAYER_STATE_PASSENGER = 18,
	PLAYER_STATE_WASTED = 32,
	PLAYER_STATE_SPAWNED = 33
};

enum UpdateType {
	UPDATE_TYPE_NONE,
	UPDATE_TYPE_ONFOOT = 16,
	UPDATE_TYPE_DRIVER = 17,
	UPDATE_TYPE_PASSENGER = 18,
};

enum PlayerStatus { PLAYER_STATUS_TIMEOUT = 2 };

class CRemotePlayer {
public:
	CPed						  *m_pPed;
	CVehicle					  *m_pVehicle;
	NUMBER						m_nTeam;
	NUMBER						m_nState;
	NUMBER						m_nSeatId;
	int field_b;
	BOOL							m_bPassengerDriveBy;
	char pad_13[64];
	CVector						m_positionDifference; // target pos - current pos
	
	struct SAMP_API {
		float		real;
		CVector	imag;
	}								m_incarTargetRotation;
	
	int pad_6f[3];
	CVector						m_onfootTargetPosition;
	CVector						m_onfootTargetSpeed;
	CVector						m_incarTargetPosition;
	CVector						m_incarTargetSpeed;
	ID								m_nId;
	ID								m_nVehicleId;
	int field_af;
	BOOL							m_bDrawLabels;
	BOOL							m_bHasJetPack;
	NUMBER						m_nSpecialAction;
	int pad_bc[3];
	
	PACKET::OnfootData		m_onfootData;
	PACKET::IncarData			m_incarData;
	PACKET::TrailerData		m_trailerData;
	PACKET::PassengerData	m_passengerData;
	PACKET::AimData			m_aimData;
	
	float							m_fReportedArmour;
	float							m_fReportedHealth;
	Animation					m_animation;
	NUMBER						m_nUpdateType;
	TICK							m_lastUpdate;
	TICK							m_lastTimestamp;
	BOOL                    m_bPerformingCustomAnimation;
	int							m_nStatus;
	
	struct SAMP_API {
		CVector	m_direction;
		TICK		m_lastUpdate;
		TICK		m_lastLook;
	}								m_head;
	
	BOOL							m_bMarkerState;
	
	struct SAMP_API {
		int x, y, z;
	}								m_markerPosition;

	GTAREF						m_marker;

	CRemotePlayer();
	~CRemotePlayer();
	
	BOOL Spawn(/* unused */ int a2, int nModel, CVector *pPosition, float fRotation, D3DCOLOR color, char nFightingStyle);
	void ProcessHead();
	void SetMarkerState(BOOL bState);
	void SetMarkerPosition(int x, int y, int z);
	BOOL Surfing();
	BOOL SurfingOnObject();
	void ProcessSurfing();
	void OnEnterVehicle();
	void OnExitVehicle();
	void ProcessSpecialAction();
	void UpdateOnfootSpeedAndPosition();
	void UpdateOnfootRotation();
	void SetOnfootTargetSpeedAndPosition(CVector *pPosition, CVector *pSpeed);
	void UpdateIncarSpeedAndPosition();
	void UpdateIncarRotation();
	void SetIncarTargetSpeedAndPosition(CMatrix *pMatrix, CVector *pPosition, CVector *pSpeed);
	void UpdateTrain(CMatrix *pMatrix, CVector *pSpeed, float fSpeed);
	void Update(PACKET::AimData *pData);
	void Update(PACKET::UnoccupiedData *pData);
	void Update(PACKET::TrailerData *pData);
	void ResetData();
	float GetDistanceToPlayer(CRemotePlayer *pPlayer);
	float GetDistanceToLocalPlayer();
	void SetColor(D3DCOLOR color); // rgba
	D3DCOLOR GetColorAsRGBA();
	D3DCOLOR GetColorAsARGB();
	void EnterVehicle(ID nId, BOOL bPassenger);
	void ExitVehicle();
	void ChangeState(char nOld, char nNew);
	int GetStatus();
	void Update(PACKET::BulletData *pData);
	void Process();
	void Update(PACKET::OnfootData *pData, TICK timestamp);
	void Update(PACKET::IncarData *pData, TICK timestamp);
	void Update(PACKET::PassengerData *pData, TICK timestamp = SAMP_UNUSED);
	void Remove();
	void Kill();
	void Chat(const char *szText);
	BOOL DoesExist();
};

SAMP_END