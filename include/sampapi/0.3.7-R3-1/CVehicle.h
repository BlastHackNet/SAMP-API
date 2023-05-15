/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/CVector.h"
#include "sampapi/0.3.7-R3-1/CEntity.h"

class CVehicle;

SAMPAPI_BEGIN_PACKED_V037R3_1

class SAMPAPI_EXPORT CVehicle : public CEntity {
public:
    enum { MAX_LICENSE_PLATE_TEXT = 32 };

    // void **m_lpVtbl = 0xED6E8;
    CVehicle*          m_pTrailer;
    ::CVehicle*        m_pGameVehicle;
    BOOL               m_bEngineOn;
    BOOL               m_bIsLightsOn;
    BOOL               m_bIsInvulnerable;
    int                pad_5c;
    BOOL               m_bIsLocked;
    bool               m_bIsObjective;
    BOOL               m_bObjectiveBlipCreated;
    TICK               m_timeSinceLastDriven;
    BOOL               m_bHasBeenDriven;
    int                pad_71;
    BOOL               m_bEngineState;
    unsigned char      m_nPrimaryColor;
    unsigned char      m_nSecondaryColor;
    BOOL               m_bNeedsToUpdateColor;
    BOOL               m_bUnoccupiedSync;
    BOOL               m_bRemoteUnocSync;
    BOOL               m_bKeepModelLoaded;
    BOOL               m_bHasSiren;
    IDirect3DTexture9* m_pLicensePlate;
    char               m_szLicensePlateText[MAX_LICENSE_PLATE_TEXT + 1];
    GTAREF             m_marker;

    CVehicle(int nModel, CVector position, float fRotation, BOOL bKeepModelLoaded, BOOL bHasSiren);

    virtual ~CVehicle() = 0;
    virtual void Add() = 0;
    virtual void Remove() = 0;

    void      ChangeInterior(int nId);
    void      ResetPointers();
    BOOL      HasDriver();
    BOOL      IsOccupied();
    void      SetInvulnerable(BOOL bInv);
    void      SetLocked(BOOL block);
    float     GetHealth();
    void      SetHealth(float fValue);
    void      SetColor(NUMBER nPrimary, NUMBER nSecondary);
    void      UpdateColor();
    int       GetSubtype();
    BOOL      IsSunk();
    BOOL      IsWrecked();
    BOOL      DriverIsPlayerPed();
    BOOL      HasPlayerPed();
    BOOL      IsTrainPart();
    BOOL      HasTurret();
    void      EnableSiren(bool bEnable);
    BOOL      SirenEnabled();
    void      SetLandingGearState(BOOL bHide);
    BOOL      GetLandingGearState();
    void      SetHydraThrusters(int nDirection);
    int       GetHydraThrusters();
    void      ProcessMarkers();
    void      Lock(BOOL bLock);
    BOOL      UpdateLastDrivenTime();
    float     GetTrainSpeed();
    void      SetTrainSpeed(float fValue);
    void      SetTires(char nState);
    char      GetTires();
    void      UpdateDamage(int nPanels, int nDoors, char nLights);
    int       GetPanelsDamage();
    int       GetDoorsDamage();
    char      GetLightsDamage();
    void      AttachTrailer();
    void      DetachTrailer();
    void      SetTrailer(CVehicle* pVehicle);
    CVehicle* GetTrailer();
    CVehicle* GetTractor();
    BOOL      IsTrailer();
    BOOL      IsTowtruck();
    BOOL      IsRC();
    void      EnableLights(bool bEnable);
    void      RemovePassengers();
    BOOL      AddComponent(unsigned short nId);
    BOOL      RemoveComponent(unsigned short nId);
    void      SetPaintjob(NUMBER nId);
    BOOL      DoesExist();
    void      SetLicensePlateText(const char* szText);
    void      SetRotation(float fValue);
    void      ConstructLicensePlate();
    void      ShutdownLicensePlate();
    BOOL      HasSiren();
    char      GetMaxPassengers();
    void      SetWindowOpenFlag(NUMBER nDoorId);
    void      ClearWindowOpenFlag(NUMBER nDoorId);
    void      EnableEngine(BOOL bEnable);
};

SAMPAPI_END_PACKED
