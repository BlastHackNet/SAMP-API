/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/CVector.h"
#include "sampapi/0.3.7-R3-1/CPed.h"
#include "sampapi/0.3.7-R3-1/CVehicle.h"
#include "sampapi/0.3.7-R3-1/Synchronization.h"

SAMPAPI_BEGIN_PACKED_V037R3_1

enum SpectatingMode {
    SPECTATING_MODE_VEHICLE = 3,
    SPECTATING_MODE_PLAYER = 4,
    SPECTATING_MODE_FIXED = 15,
    SPECTATING_MODE_SIDE = 14
};

enum SpectatingType {
    SPEC_TYPE_NONE,
    SPEC_TYPE_PLAYER,
    SPEC_TYPE_VEHICLE
};

enum SurfingMode {
    SURFING_MODE_NONE,
    SURFING_MODE_UNFIXED,
    SURFING_MODE_FIXED
};

class SAMPAPI_EXPORT CLocalPlayer {
public:
    CPed* m_pPed;

    Synchronization::IncarData     m_incarData;
    Synchronization::AimData       m_aimData;
    Synchronization::TrailerData   m_trailerData;
    Synchronization::OnfootData    m_onfootData;
    Synchronization::PassengerData m_passengerData;

    BOOL      m_bIsActive;
    BOOL      m_bIsWasted;
    ID        m_nCurrentVehicle;
    ID        m_nLastVehicle;
    Animation m_animation;
    int       field_1;
    BOOL      m_bDoesSpectating;
    NUMBER    m_nTeam;
    short     field_10d;
    TICK      m_lastUpdate;
    TICK      m_lastSpecUpdate;
    TICK      m_lastAimUpdate;
    TICK      m_lastStatsUpdate;

    struct SAMPAPI_EXPORT CameraTarget {
        ID m_nObject;
        ID m_nVehicle;
        ID m_nPlayer;
        ID m_nActor;
    } m_cameraTarget;

    TICK m_lastCameraTargetUpdate;

    struct SAMPAPI_EXPORT {
        CVector m_direction;
        TICK    m_lastUpdate;
        TICK    m_lastLook;
    } m_head;

    TICK m_lastAnyUpdate;
    BOOL m_bClearedToSpawn;
    TICK m_lastSelectionTick;
    TICK m_initialSelectionTick;

    struct SAMPAPI_EXPORT SpawnInfo {
        NUMBER  m_nTeam;
        int     m_nSkin;
        char    field_c;
        CVector m_position;
        float   m_fRotation;
        int     m_aWeapon[3];
        int     m_aAmmo[3];
    } m_spawnInfo;

    BOOL m_bHasSpawnInfo;
    TICK m_lastWeaponsUpdate;

    struct SAMPAPI_EXPORT {
        ID     m_nAimedPlayer;
        ID     m_nAimedActor;
        NUMBER m_nCurrentWeapon;
        NUMBER m_aLastWeapon[13];
        int    m_aLastWeaponAmmo[13];
    } m_weaponsData;

    BOOL m_bPassengerDriveBy;
    char m_nCurrentInterior;
    BOOL m_bInRCMode;
    char m_szName[256];

    struct SAMPAPI_EXPORT {
        ID   m_nEntityId; // vehicle 0 =< id < 2000; object 2000 <= id < 3000
        TICK m_lastUpdate;

        union SAMPAPI_EXPORT {
            CVehicle* m_pVehicle;
            CObject*  m_pObject;
        };

        BOOL    m_bStuck;
        BOOL    m_bIsActive;
        CVector m_position;
        int     field_;
        int     m_nMode;
    } m_surfing;

    struct SAMPAPI_EXPORT {
        BOOL m_bEnableAfterDeath;
        int  m_nSelected;
        BOOL m_bWaitingForSpawnRequestReply;
        BOOL m_bIsActive;
    } m_classSelection;

    TICK m_zoneDisplayingEnd;

    struct SAMPAPI_EXPORT {
        char m_nMode;
        char m_nType;
        int  m_nObject;
        BOOL m_bProcessed;
    } m_spectating;

    struct SAMPAPI_EXPORT {
        ID   m_nVehicleUpdating;
        int  m_nBumper;
        int  m_nDoor;
        bool m_bLight;
        bool m_bWheel;
    } m_damage;

    static SAMPAPI_EXPORT SAMPAPI_VAR int& RefIncarSendrate();  // = NETMODE_INCAR_SENDRATE;
    static SAMPAPI_EXPORT SAMPAPI_VAR int& RefOnfootSendrate(); // = NETMODE_ONFOOT_SENDRATE;
    static SAMPAPI_EXPORT SAMPAPI_VAR int& RefFiringSendrate(); // = NETMODE_FIRING_SENDRATE;
    static SAMPAPI_EXPORT SAMPAPI_VAR int& RefSendMultiplier(); // = NETMODE_SEND_MULTIPLIER;

    CLocalPlayer();

    CPed*    GetPed();
    void     ResetData();
    void     ProcessHead();
    void     SetSpecialAction(char nId);
    char     GetSpecialAction();
    void     UpdateSurfing();
    void     SetSurfing(CVehicle* pVehicle, BOOL bStuck);
    void     ProcessSurfing();
    BOOL     NeedsToUpdate(const void* pOld, const void* pNew, unsigned int nLen);
    int      GetIncarSendRate();
    int      GetOnfootSendRate();
    int      GetUnoccupiedSendRate();
    void     SetSpawnInfo(const SpawnInfo* pInfo);
    BOOL     Spawn();
    void     SetColor(D3DCOLOR color);
    D3DCOLOR GetColorAsRGBA();
    D3DCOLOR GetColorAsARGB();
    void     ProcessOnfootWorldBounds();
    void     ProcessIncarWorldBounds();
    void     RequestSpawn();
    void     PrepareForClassSelection();
    void     PrepareForClassSelection_Outcome(BOOL bOutcome);
    void     EnableSpectating(BOOL bEnable);
    void     SpectateForVehicle(ID nId);
    void     SpectateForPlayer(ID nId);
    BOOL     NeedsToSendOnfootData(short controllerState, short sLeftStickX, short sLeftStickY);
    BOOL     NeedsToSendIncarData(short controllerState, short sLeftStickX, short sLeftStickY);
    bool     DefineCameraTarget(CameraTarget* pInfo);
    void     UpdateCameraTarget();
    void     DrawCameraTargetLabel();
    void     SendUnoccupiedData(ID nVehicle, char arg4);
    void     SendOnfootData();
    void     SendAimData();
    void     SendTrailerData(ID nTrailer);
    void     SendPassengerData();
    void     WastedNotification();
    void     RequestClass(int nId);
    void     ChangeInterior(char nId);
    void     Chat(const char* szText);
    void     EnterVehicle(int nVehicle, BOOL bPassenger);
    void     ExitVehicle(int nVehicle);
    void     SendStats();
    void     UpdateVehicleDamage(ID nVehicle);
    void     NextClass();
    void     PrevClass();
    void     ProcessClassSelection();
    void     UpdateWeapons();
    void     ProcessSpectating();
    void     SendTakeDamage(int nId, float fDamage, int nWeapon, int nBodyPart);
    void     SendGiveDamage(int nId, float fDamage, int nWeapon, int nBodyPart);
    bool     ProcessUnoccupiedSync(ID nVehicle, CVehicle* pVehicle);
    void     EnterVehicleAsPassenger();
    void     SendIncarData();
    void     Process();
};

SAMPAPI_END_PACKED
