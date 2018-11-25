/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"
#include "CEntity.h"
#include "CVector.h"

#define LICENSE_PLATE_TEXT_LEN 32

class CVehicle;

SAMP_BEGIN

class SAMP_API CVehicle : public CEntity {
public:
	// void **lpVtbl = samp.dll+0xDB1AC;
	CVehicle				  *m_pTrailer;
	::CVehicle			  *m_pGameVehicle;
	unsigned char			pad_50[8];
	BOOL						m_bIsInvulnerable;
	BOOL						m_bIsLightsOn;
	BOOL						m_bIsLocked;
	bool						m_bIsObjective;
	BOOL						m_bObjectiveBlipCreated;
	unsigned long			m_dwTimeSinceLastDriven;
	BOOL						m_bHasBeenDriven;
	unsigned char			pad_71[8];
	unsigned char			m_nPrimaryColor;
	unsigned char			m_nSecondaryColor;
	BOOL						m_bNeedsToUpdateColor;
	BOOL						m_bUnoccupiedSync;
	BOOL						m_bRemoteUnocSync;	
	BOOL						m_bKeepModelLoaded;
	int						field_8b; // it is something about audio stream
	IDirect3DTexture9	  *m_pLicensePlate;
	unsigned char			m_szLicensePlateText[LICENSE_PLATE_TEXT_LEN + 1];
	GTAREF					m_hMarker;

	CVehicle() { *(void **)this = (void *)SAMP_ADDROF(0xDB1AC); }
	CVehicle(int nModel, CVector vPos, float fRotation, BOOL bKeepModelLoaded, BOOL arg5); // field_8b = arg5

	virtual ~CVehicle() {}
	virtual void Add() {}
	virtual void Remove() {}

	void ResetPointers();
	void LinkToInterior(int nInterior);
	BOOL IsOccupied();
	void SetInvulnerable(BOOL bInv);
	void SetLocked(BOOL bLocked);
	float GetHealth();
	void SetHealth(float fValue);
	void SetColors(unsigned char nPrimary, unsigned char nSecondary);
	int GetSubtype();
	BOOL HasSunk();
	BOOL IsWrecked();
	BOOL DriverIsPlayerPed();
	BOOL IsTrainPart();
	void ProcessMarkers();
	void SetDoorState(BOOL bLocked);
	BOOL UpdateLastDrivenTime();
	char GetWheelDamageStatus();
	void UpdateDamageStatus(int nPanelDamage, int nDoorDamage, char nLightDamage);
	int GetBumperDamageStatus();
	int GetDoorDamageStatus();
	char GetLightDamageStatus();
	void AttachTrailer();
	void DetachTrailer();
	void SetTrailer(CVehicle *pTrailer);
	CVehicle *GetTrailer();
	void SetLicensePlateText(const char *szText);
	void SetZAngle(float fValue);
	void ConstructLicensePlate();
	void DestructLicensePlate();
};

SAMP_END