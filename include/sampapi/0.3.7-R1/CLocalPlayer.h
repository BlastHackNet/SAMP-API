/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/0.3.7-R1/CPed.h"
#include "sampapi/0.3.7-R1/Synchronization.h"
#include "sampapi/0.3.7-R1/CVehicle.h"
#include "sampapi/0.3.7-R1/Animation.h"

SAMPAPI_BEGIN_PACKED_V037R1

enum SpectatingMode : unsigned char {
    SPECTATING_MODE_VEHICLE = 3,
    SPECTATING_MODE_PLAYER = 4,
    SPECTATING_MODE_FIXED = 15,
    SPECTATING_MODE_SIDE = 14
};

enum SpectatingType : unsigned char {
    SPEC_TYPE_NONE,
    SPEC_TYPE_PLAYER,
    SPEC_TYPE_VEHICLE
};

enum SurfingMode : unsigned int {
    SURF_MODE_NONE,
    SURF_MODE_UNFIXED,
    SURF_MODE_FIXED
};

class SAMPAPI_EXPORT CLocalPlayer {
public:
    CPed*     m_pPed;
    Animation m_animation;
    int       field_8;
    BOOL      m_bIsActive;
    BOOL      m_bIsWasted;
    ID        m_nCurrentVehicle;
    ID        m_nLastVehicle;

    Synchronization::OnfootData    m_onfootData;
    Synchronization::PassengerData m_passengerData;
    Synchronization::TrailerData   m_trailerData;
    Synchronization::IncarData     m_incarData;
    Synchronization::AimData       m_aimData;

    // used by RPC_SetSpawnInfo
    struct SAMPAPI_EXPORT SpawnInfo {
        NUMBER  m_nTeam;
        int     m_nSkin;
        char    field_c;
        CVector m_position;
        float   m_fRotation;
        int     m_aWeapon[3];
        int     m_aAmmo[3];
    } m_spawnInfo;

    BOOL   m_bHasSpawnInfo;
    BOOL   m_bClearedToSpawn;
    TICK   m_lastSelectionTick;
    TICK   m_initialSelectionTick;
    BOOL   m_bDoesSpectating;
    NUMBER m_nTeam;
    short  field_14b;
    TICK   m_lastUpdate;
    TICK   m_lastSpecUpdate;
    TICK   m_lastAimUpdate;
    TICK   m_lastStatsUpdate;
    TICK   m_lastWeaponsUpdate;

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

    struct SAMPAPI_EXPORT CameraTarget {
        ID m_nObject;
        ID m_nVehicle;
        ID m_nPlayer;
        ID m_nActor;
    } m_cameraTarget;

    struct SAMPAPI_EXPORT {
        CVector m_direction;
        TICK    m_lastUpdate;
        TICK    m_lastLook;
    } m_head;

    TICK m_lastHeadUpdate;
    TICK m_lastAnyUpdate;
    char m_szName[256];

    struct SAMPAPI_EXPORT {
        BOOL    m_bIsActive;
        CVector m_position;
        int     field_10;
        ID      m_nEntityId;
        TICK    m_lastUpdate;

        union SAMPAPI_EXPORT {
            CVehicle*      m_pVehicle;
            class CObject* m_pObject;
        };

        BOOL m_bStuck;
        int  m_nMode;
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
        int  m_nObject; // id
        BOOL m_bProcessed;
    } m_spectating;

    struct SAMPAPI_EXPORT {
        ID   m_nVehicleUpdating;
        int  m_nBumper;
        int  m_nDoor;
        char m_bLight;
        char m_bWheel;
    } m_damage;

    static SAMPAPI_EXPORT SAMPAPI_VAR unsigned long& RefTimeElapsedFromFPressed();
    static SAMPAPI_EXPORT SAMPAPI_VAR int& RefIncarSendrate();  // = NETMODE_INCAR_SENDRATE;
    static SAMPAPI_EXPORT SAMPAPI_VAR int& RefOnfootSendrate(); // = NETMODE_ONFOOT_SENDRATE;
    static SAMPAPI_EXPORT SAMPAPI_VAR int& RefFiringSendrate(); // = NETMODE_FIRING_SENDRATE;
    static SAMPAPI_EXPORT SAMPAPI_VAR int& RefSendMultiplier(); // = NETMODE_SEND_MULTIPLIER;
    static SAMPAPI_EXPORT SAMPAPI_VAR bool& RefDrawCameraTargetLabel();

    static void SendSpawnRequest();

    CLocalPlayer();

    CPed*    GetPed();
    void     ResetData();
    void     ProcessHead();
    void     SetSpecialAction(char nId);
    char     GetSpecialAction();
    void     UpdateSurfing();
    void     SetSurfing(CVehicle* pVehicle, BOOL bStuck);
    void     ProcessSurfing();
    void     EndSurfing();
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
