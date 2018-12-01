/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"
#include "CPed.h"
#include "CAudio.h"
#include "CCamera.h"
#include "CObject.h"

SAMP_BEGIN

enum eCursorMode : unsigned int {
	CMODE_DISABLED,  
	CMODE_LOCKKEYS_NOCURSOR, 
	CMODE_LOCKCAMANDCONTROL, 
	CMODE_LOCKCAM,
	CMODE_LOCKCAM_NOCURSOR
};

class SAMP_API CGame {
public:
	CAudio		  *m_pAudio;
	CCamera		  *m_pCamera;
	CPed			  *m_pPlayerPed;

	struct {
		CVector	m_vPos;
		CVector	m_vSize;
		BOOL		m_bEnabled;
		GTAREF	m_handle;
	}					m_checkpoint;

	struct {
		CVector			m_vCurrentPos;
		CVector			m_vNextPos;
		float				m_fSize;
		unsigned char	m_nType;
		BOOL				m_bEnabled;
		GTAREF			m_hMarker;
		GTAREF			m_handle;
	}					m_raceCheckpoint;

	eCursorMode		m_nCursorMode;
	unsigned int	m_nInputEnableWaitFrames;
	BOOL				m_bClockEnabled;
	unsigned int	field_61;
	BOOL				m_bHeadMove;
	unsigned int	m_nFPSLimit;
	unsigned char	field_6d;
	bool				m_aKeepLoadedVehicleModels[212];
	
	static char *&szGameTextMessage; // [256], temp buffer
	static bool *aUsedPlayerSlots; // [SAMP_MAX_PLAYER_PED_SLOTS]

	CGame();
	~CGame() {
		delete m_pAudio;
		delete m_pCamera;
		delete m_pPlayerPed;
		delete szGameTextMessage;
	}

	CPed *NewPlayer(int nSkin, CVector vPos, float fRotation, int arg4, int arg5);
	CVehicle *NewVehicle(int nType, CVector vPos, float fRotation, int arg4);
	CObject *NewObject(int nModel, CVector vPos, CVector vRot, float fDrawDistance);

	BOOL GetDoesHeadMoves();
	void *GetWindowHandle();
	CAudio *GetAudio();
	CCamera *GetCamera();
	CPed *FindPlayerPed();
	void SetCursorMode(eCursorMode nMode, bool bImmediatelyHideCursor = true);
	void ProcessInputEnabling();
	void LetTimeGo(bool bLet);
	void SetWorldWeather(unsigned char nWeather);
	void SetFPSLimit(unsigned int nValue);
	char GetActiveInterior();
	void ToggleClock(bool bEnable);
	void SetRequiredVehicleModels(unsigned char *pModelsCount);
	void MakeRaceCheckpoint();
	void UpdateCheckpoints();
	int IsUsingGamepad();
	int IsMenuActive();
	float FindGroundZ(CVector vPosition);
	int IsGameLoaded();
	void RequestModel(unsigned int nModelId, int nLoadingStream);
	void LoadRequestedModels();
	int IsModelLoaded(unsigned int nModelId);
	void ReleaseModel(unsigned int nModelId, bool bGameFunc);
	void SetWorldTime(int nHour, int nMinute);
	void GetWorldTime(int *pHour, int *pMinute);
	void SetMaxStats();
	void RefreshStreamingAt(float fX, float fY);
	void RequestAnimation(const char *szFilename);
	int IsAnimationLoaded(const char *szFilename);
	void DisplayGameText(const char *szText, int nTime, int nSize);
	GTAREF CreateRadarMarkerIcon(int nMarkerType, CVector vPosition, D3DCOLOR dwColor, int nType);
	void IncreasePlayerMoney(int nInc);
	int GetLocalMoney();
	const char *GetWeaponName(int nWeapon);
	GTAREF CreateWeaponPickup(unsigned int nModel, unsigned int nAmmo, CVector vPosition);
	void *GetD3DDevice();
	void *GetWeaponInfo(int nWeapon, int nSkill);
	void SetGravity(float fGravity);
	void SetWantedLevel(char nLevel);
	void EnableZoneNames(bool bEnable);
	void EnableStuntBonus(bool bEnable);
	void EnableHud(bool bEnable);
	void ResetPlayerMoney();
	void DisableMarker(unsigned long dwMarker);
	void DrawGangZone(float *pPos, D3DCOLOR dwColor);
	void LoadAnimsAndModels();
	void SetCheckpointInformation(CVector *pPosition, CVector *pSize);
	void SetRaceCheckpointInformation(int nType, CVector *pPos, CVector *pNextPos, float fSize);
	void InitGame();
	void StartGame();
	void DeleteRaceCheckpoint();
	void SetRaceCheckpointInformation(char nType, CVector *pCurrentPos, CVector *pNextPos, float fSize);
	void SetCheckpointInfomation(CVector *pPos, CVector *pSize);
};

extern CGame *&pGame;

SAMP_END