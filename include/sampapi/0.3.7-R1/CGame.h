/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/0.3.7-R1/CPed.h"
#include "sampapi/0.3.7-R1/CAudio.h"
#include "sampapi/0.3.7-R1/CCamera.h"
#include "sampapi/0.3.7-R1/CObject.h"

class CWeaponInfo;

SAMPAPI_BEGIN_PACKED_V037R1

enum CursorMode {
    CURSOR_NONE,
    CURSOR_LOCKKEYS_NOCURSOR,
    CURSOR_LOCKCAMANDCONTROL,
    CURSOR_LOCKCAM,
    CURSOR_LOCKCAM_NOCURSOR
};

class SAMPAPI_EXPORT CGame {
public:
    CAudio*  m_pAudio;
    CCamera* m_pCamera;
    CPed*    m_pPlayerPed;

    struct SAMPAPI_EXPORT {
        CVector m_position;
        CVector m_size;
        BOOL    m_bEnabled;
        GTAREF  m_handle;
    } m_checkpoint;

    struct SAMPAPI_EXPORT {
        CVector m_currentPosition;
        CVector m_nextPosition;
        float   m_fSize;
        char    m_nType;
        BOOL    m_bEnabled;
        GTAREF  m_marker;
        GTAREF  m_handle;
    } m_racingCheckpoint;

    int          m_nCursorMode;
    unsigned int m_nInputEnableWaitFrames;
    BOOL         m_bClockEnabled;
    int          field_61;
    BOOL         m_bHeadMove;
    int          m_nFrameLimiter;
    char         field_6d;
    bool         m_aKeepLoadedVehicleModels[212];

    static SAMPAPI_EXPORT SAMPAPI_VAR char*& RefGameTextMessage();  // [256], temp buffer
    static SAMPAPI_EXPORT SAMPAPI_VAR BOOL* ArrayUsedPlayerSlots(); // [SAMP_MAX_PLAYER_PED_SLOTS]

    CGame();

    CPed*             GetPlayerPed();
    float             FindGroundZ(CVector point);
    void              SetCursorMode(int nMode, BOOL bImmediatelyHideCursor);
    void              InitGame();
    void              StartGame();
    BOOL              IsMenuVisible();
    BOOL              IsStarted();
    void              RequestModel(int nModel, int nLoadingStream = SAMPAPI_UNUSED);
    void              LoadRequestedModels();
    BOOL              IsModelAvailable(int nModel);
    void              ReleaseModel(int nModel, bool bGameFunc = true);
    void              SetWorldTime(char nHour, char nMinute);
    void              GetWorldTime(char* nHour, char* nMinute);
    void              LetTimeGo(bool blet);
    void              SetWorldWeather(char nWeather);
    void              SetFrameLimiter(int nValue);
    void              SetMaxStats();
    void              DisableTrainTraffic();
    void              RefreshRenderer(float fX, float fY);
    void              RequestAnimation(const char* szFile);
    BOOL              IsAnimationLoaded(const char* szFile);
    void              ReleaseAnimation(const char* szFile);
    void              DisplayGameText(const char* szText, int nType, int nSize);
    void              DeleteRacingCheckpoint();
    GTAREF            CreateMarker(int nIcon, CVector position, int nColor, int nType);
    void              DeleteMarker(GTAREF handle);
    char              GetCurrentInterior();
    void              UpdateFarClippingPlane();
    void              IncreasePlayerMoney(int nInc);
    int               GetPlayerMoney();
    const char*       GetWeaponName(int nWeapon);
    void              CreatePickup(int nModel, int nType, CVector position, GTAREF* handle);
    GTAREF            CreateWeaponPickup(int nModel, int nAmmo, CVector position);
    IDirect3DDevice9* GetDevice();
    void              Restart();
    CWeaponInfo*      GetWeaponInfo(int nWeapon, int nSkill);
    void              SetWorldGravity(float fValue);
    void              SetWantedLevel(char nLevel);
    void              SetNumberOfIntroTextLinesThisFrame(unsigned short nValue);
    void              DrawGangZone(float* pPos, char nColor);
    void              EnableZoneDisplaying(bool bEnable);
    void              EnableStuntBonus(bool bEnable);
    void              LoadScene(const char* szFile);
    int               GetUsedMemory();
    int               GetStreamingMemory();
    void              SetRequiredVehicleModels(unsigned char* pModelCount);
    int               GetTimer();
    void              LoadAnimationsAndModels();
    void              LoadCollisionFile(const char* szFile);
    void              LoadCullZone(const char* szLine);
    BOOL              UsingGamepad();
    void              DisableAutoAiming();
    void              EnableHUD(BOOL bEnable);
    void              SetCheckpoint(CVector* pPos, CVector* pSize);
    void              CreateRacingCheckpoint();
    void              ProcessCheckpoints();
    void              ResetMoney();
    void              SetRacingCheckpoint(int nType, CVector* pCurrentPos, CVector* pNextPos, float fSize);
    void              EnableRadar(BOOL bEnable);
    void*             GetWindowHandle();
    CAudio*           GetAudio();
    CCamera*          GetCamera();
    BOOL              DoesHeadMoves();
    void              EnableClock(bool bEnable);
    void              Sleep(int elapsed, int fpsLimit);
    CPed*             CreatePed(int nModel, CVector position, float fRotation, int a6, int a7);
    BOOL              RemovePed(CPed* pPed);
    CVehicle*         CreateVehicle(int nModel, CVector position, float fRotation, BOOL bHasSiren);
    CObject*          CreateObject(int nModel, CVector position, CVector rotation, float fDrawDistance);
    void              ProcessInputEnabling();
    void              ProcessFrameLimiter();
};

SAMPAPI_EXPORT SAMPAPI_VAR CGame*& RefGame();

SAMPAPI_END_PACKED
