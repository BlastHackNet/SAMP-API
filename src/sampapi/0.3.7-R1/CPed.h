/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/0.3.7-R1/AimStuff.h"
#include "sampapi/0.3.7-R1/CEntity.h"

class CPed;
class CWeapon;
class CEntity;
class CVehicle;
class CWeaponInfo;

SAMPAPI_BEGIN_PACKED_V037R1

class SAMPAPI_EXPORT CPed : public CEntity {
public:
    enum { MAX_ACCESSORIES = 10 };

    struct SAMPAPI_EXPORT Accessory {
        int      m_nModel;
        int      m_nBone;
        CVector  m_offset;
        CVector  m_rotation;
        CVector  m_scale;
        D3DCOLOR m_firstMaterialColor;
        D3DCOLOR m_secondMaterialColor;
    };

    enum StuffType {
        STUFF_TYPE_NONE,
        STUFF_TYPE_BEER,
        STUFF_TYPE_DYN_BEER,
        STUFF_TYPE_PINT_GLASS,
        STUFF_TYPE_CIGGI
    };

    // void **m_lpVtbl = 0xDAC2C;
    BOOL m_bUsingCellphone;

    struct SAMPAPI_EXPORT {
        BOOL           m_bNotEmpty[MAX_ACCESSORIES];
        Accessory      m_info[MAX_ACCESSORIES];
        class CObject* m_pObject[MAX_ACCESSORIES];
    } m_accessories;

    ::CPed* m_pGamePed;
    int     pad_2a8[2];
    NUMBER  m_nPlayerNumber;
    int     pad_2b1[2];
    GTAREF  m_parachuteObject;
    GTAREF  m_urinatingParticle;

    struct SAMPAPI_EXPORT {
        int    m_nType;
        GTAREF m_object;
        int    m_nDrunkLevel;
    } m_stuff;

    GTAREF m_arrow;
    char   field_2de;
    BOOL   m_bIsDancing;
    int    m_nDanceStyle;
    int    m_nLastDanceMove;
    char   pad_2de[20];
    BOOL   m_bIsUrinating;
    char   pad[55];

    CPed(); // returns local player ped
    CPed(unsigned char nPlayerNumber, int nModel, CVector position, float fRotation);

    virtual ~CPed() = 0;

    void           ResetPointers();
    void           SetInitialState();
    AimStuff::Aim* GetAim();
    void           SetAim(const AimStuff::Aim* pAim);
    char           GetCurrentWeapon();
    GTAREF         GetVehicleRef();
    void           DeleteArrow();
    BOOL           IsOnScreen();
    void           SetImmunities(BOOL BP, BOOL FP, BOOL EP, BOOL CP, BOOL MP);
    float          GetHealth();
    void           SetHealth(float fValue);
    float          GetArmour();
    void           SetArmour(float fValue);
    int            GetFlags();
    void           SetFlags(int nValue);
    BOOL           IsDead();
    char           GetState();
    void           SetState(char nValue);
    float          GetRotation();
    void           ForceRotation(float fValue);
    void           SetRotation(float fValue);
    BOOL           IsPassenger();
    ::CVehicle*    GetVehicle();
    void           ClearWeapons();
    void           SetArmedWeapon(int nWeapon, bool bGameFunc = true);
    void           RemoveWeaponWhenEnteringVehicle();
    ::CWeapon*     GetCurrentWeaponSlot();
    BOOL           CurrentWeaponHasAmmo();
    float          GetDistanceToEntity(const CEntity* pEntity);
    int            GetVehicleSeatIndex();
    void           PutIntoVehicle(GTAREF vehicle, int nSeat);
    void           EnterVehicle(GTAREF vehicle, BOOL bAsPassenger);
    void           ExitVehicle();
    void           WarpFromVehicle(CVector putAt);
    void           SetSpawnInfo(const CVector* pPosition, float fRotation);
    void           SetControllable(BOOL bEnable);
    char           GetDeathInfo(ID* pKiller);
    ::CEntity*     GetFloor();
    ::CWeaponInfo* GetCurrentWeaponInfo();
    void           HandsUp();
    BOOL           DoesHandsUp();
    void           HoldObject(int nModel);
    void           EnableJetpack();
    void           DisableJetpack();
    BOOL           HasJetpack();
    BOOL           EnablePassengerDrivebyMode();
    void           Extinguish();
    unsigned short GetCurrentWeaponAmmo();
    ::CWeapon*     GetWeaponSlot(int nWeapon);
    void           SetWalkStyle(const char* szName);
    void           PerformAnimation(const char* szName, const char* szFile, float fFramedelta, int loopa, int nLockX, int nLockY, int nLockF, int nTime);
    void           LinkToInterior(char nId, BOOL bRefresh);
    void           DestroyParachute();
    BOOL           OpenParachute(); // create
    void           ProcessParachuteEvent(const char* szName);
    BOOL           IsOnGround();
    void           ResetDamageEntity();
    void           RemoveWeaponModel(int nWeapon);
    float          GetAimZ();
    void           SetAimZ(float fValue);
    ::CEntity*     GetContactEntity();
    ::CVehicle*    GetContactVehicle();
    int            GetStat();
    BOOL           PerformingCustomAnimation();
    void           StartDancing(int nStyle);
    void           StopDancing();
    BOOL           DoesDancing();
    const char*    GetAnimationForDance(int nMove);
    void           DropStuff();
    int            GetStuff(); // type
    BOOL           ApplyStuff();
    void           ProcessDrunk();
    int            GetDrunkLevel();
    void           SetDrunkLevel(int nValue);
    void           ApplyCommandTask(const char* szName, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
    void           DestroyCommandTask();
    void           EnableCellphone(BOOL bEnable);
    BOOL           UsingCellphone();
    void           SetFightingStyle(int nStyle);
    void           StartUrinating();
    void           StopUrinating();
    BOOL           DoesUrinating();
    const char*    GetLoadedShoppingDataSubsection();
    void           LoadShoppingDataSubsection(const char* szName);
    ::CPed*        GetAimedPed();
    void           SetKeys(short controllerState, short sLeftStickX, short sLeftStickY);
    short          GetKeys(short* pLeftStickX, short* pLeftStickY);
    void           CreateArrow(int nColor);
    void           SetModelIndex(int nModel);
    void           Kill();
    void           SetWeaponAmmo(unsigned char nWeapon, unsigned short nAmmo);
    void           ProcessDancing();
    void           GiveStuff(int nType);
    void           Destroy();
    void           SetCameraMode(char nMode);
    void           SetCameraExtZoomAndAspectRatio(float fExtZoom, float fAspectRatio);
    BOOL           HasAccessory();
    void           DeleteAccessory(int nSlot);
    BOOL           GetAccessoryState(int nSlot);
    void           DeleteAllAccessories();
    void           AddAccessory(int nSlot, const Accessory* pInfo);
    CObject*       GetAccessory(int nSlot);
    void           GetBonePosition(int nBone, CVector* pPosition);
    void           GiveWeapon(int nWeapon, int nAmmo);
    BOOL           IsInVehicle();
};

SAMPAPI_END_PACKED
