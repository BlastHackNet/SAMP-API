/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/0.3.7-R5-1/CPed.h"
#include "sampapi/CMatrix.h"
#include "sampapi/CVector.h"
#include "sampapi/0.3.7-R5-1/Synchronization.h"
#include "sampapi/0.3.7-R5-1/CVehicle.h"
#include "sampapi/0.3.7-R5-1/Animation.h"

SAMPAPI_BEGIN_PACKED_V037R5_1

class SAMPAPI_EXPORT CRemotePlayer {
public:
    enum PlayerState {
        PLAYER_STATE_NONE,
        PLAYER_STATE_ONFOOT = 17,
        PLAYER_STATE_DRIVER = 19,
        PLAYER_STATE_PASSENGER = 18,
        PLAYER_STATE_WASTED = 32,
        PLAYER_STATE_SPAWNED = 33,
    };
    enum UpdateType {
        UPDATE_TYPE_NONE,
        UPDATE_TYPE_ONFOOT = 16,
        UPDATE_TYPE_INCAR = 17,
        UPDATE_TYPE_PASSENGER = 18,
    };
    enum PlayerStatus { PLAYER_STATUS_TIMEOUT = 2 };

    int                            field_1;
    BOOL                           m_bDrawLabels;
    BOOL                           m_bHasJetpack;
    unsigned char                  m_nSpecialAction;
    char                           pad_2[12];
    Synchronization::IncarData     m_incarData;
    Synchronization::TrailerData   m_trailerData;
    Synchronization::AimData       m_aimData;
    Synchronization::PassengerData m_passengerData;
    Synchronization::OnfootData    m_onfootData;
    unsigned char                  m_nTeam;
    unsigned char                  m_nState;
    unsigned char                  m_nSeatId;
    int                            field_3;
    BOOL                           m_bPassengerDriveBy;
    char                           pad_1[76];
    CVector                        m_positionDifference;
    struct SAMPAPI_EXPORT {
        float   real;
        CVector imag;
    } m_incarTargetRotation;
    CVector                        m_onfootTargetPosition;
    CVector                        m_onfootTargetSpeed;
    CVector                        m_incarTargetPosition;
    CVector                        m_incarTargetSpeed;
    float                          m_fReportedArmour;
    float                          m_fReportedHealth;
    Animation                      m_animation;
    unsigned char                  m_nUpdateType;
    TICK                           m_lastUpdate;
    TICK                           m_lastTimestamp;
    BOOL                           m_bPerformingCustomAnimation;
    int                            m_nStatus;

    struct SAMPAPI_EXPORT {
        CVector m_direction;
        TICK    m_lastUpdate;
        TICK    m_lastLook;
    } m_head;

    CPed*                          m_pPed;
    CVehicle*                      m_pVehicle;
    ID                             m_nId;
    ID                             m_nVehicleId;

    BOOL m_bMarkerState;

    struct SAMPAPI_EXPORT {
        int x, y, z;
    } m_markerPosition;

    GTAREF m_marker;

    CRemotePlayer();
    ~CRemotePlayer();

    void     ProcessHead();
    void     SetMarkerState(BOOL bState);
    void     SetMarkerPosition(int x, int y, int z);
    BOOL     SurfingOnVehicle();
    BOOL     SurfingOnObject();
    void     ProcessSurfing();
    void     OnEnterVehicle();
    void     OnExitVehicle();
    void     ProcessSpecialAction();
    void     UpdateOnfootSpeedAndPosition();
    void     UpdateOnfootRotation();
    void     SetOnfootTargetSpeedAndPosition(CVector* pPosition, CVector* pSpeed);
    void     UpdateIncarSpeedAndPosition();
    void     UpdateIncarRotation();
    void     SetIncarTargetSpeedAndPosition(CMatrix* pMatrix, CVector* pPosition, CVector* pSpeed);
    void     UpdateTrain(CMatrix* pMatrix, CVector* pSpeed, float fSpeed);
    void     Update(Synchronization::AimData* pData);
    void     Update(Synchronization::UnoccupiedData* pData);
    void     Update(Synchronization::TrailerData* pData);
    void     ResetData();
    float    GetDistanceToPlayer(CRemotePlayer* pPlayer);
    float    GetDistanceToLocalPlayer();
    void     SetColor(D3DCOLOR color); // rgba
    D3DCOLOR GetColorAsRGBA();
    D3DCOLOR GetColorAsARGB();
    void     EnterVehicle(ID nId, BOOL bPassenger);
    void     ExitVehicle();
    void     ChangeState(char nOld, char nNew);
    int      GetStatus();
    void     Update(Synchronization::BulletData* pData);
    void     Process();
    BOOL     Spawn(/* unused */ int a2, int nModel, /* unused */ int a4, CVector* pPosition, float fRotation, D3DCOLOR color, char nFightingStyle);
    void     Update(Synchronization::OnfootData* pData, TICK timestamp);
    void     Update(Synchronization::IncarData* pData, TICK timestamp);
    void     Update(Synchronization::PassengerData* pData, TICK timestamp = SAMPAPI_UNUSED);
    void     Remove();
    void     Kill();
    void     Chat(const char* szText);
    BOOL     DoesExist();
};

SAMPAPI_END_PACKED
