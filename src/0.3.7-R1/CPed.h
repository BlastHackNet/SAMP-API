/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"
#include "AimStuff.h"
#include "CEntity.h"

class CPed;
class CEntity;
class CVehicle;
class CWeapon;

SAMP_BEGIN

enum eStuffType : unsigned int {
	STUFF_TYPE_NONE,
	STUFF_TYPE_BEER,
	STUFF_TYPE_DYN_BEER,
	STUFF_TYPE_PINT_GLASS,
	STUFF_TYPE_CIGGI
};

class SAMP_API CPed : public CEntity {
public:
	// void **m_lpVtbl = samp.dll+0xDAC2C;
	BOOL					m_bUsingCellphone;
	unsigned char		pad_4c[600];
	::CPed			  *m_pGamePed;
	unsigned int		pad_2a8[2];
	unsigned char		m_nPlayerNumber;
	unsigned int		pad_2b1[2];
	GTAREF				m_dwParachuteObject;
	GTAREF				m_dwUrinatingParticle;
	
	struct {
		eStuffType		m_nType;
		GTAREF			m_dwObjectHandle;
		unsigned int	m_nDrunkLevel;
	}						m_stuff;
	
	GTAREF				m_dwArrow;
	unsigned char		field_2de;
	BOOL					m_bIsDancing;
	unsigned int		m_nDanceStyle;
	unsigned int		m_nLastDanceMove;
	unsigned char		pad_2de[20];
	BOOL					m_bIsUrinating;
	unsigned char		pad[55];

	CPed(); // returns local player ped
	CPed(unsigned char nPlayerNumber, int nModel, CVector vPosition, float fRotation);

	virtual ~CPed() {}

	void ResetPointers();
	void SetInitialState();
	AimStuff::Aim *GetCurrentAim();
	void SetCurrentAim(AimStuff::Aim *pAim);
	unsigned char GetCurrentWeapon();
	int GetCurrentVehicleIdx(); // for the game vehicle pool
	void HideMarker();
	BOOL IsOnScreen();
	void SetImmunities(int BP, int FP, int EP, int CP, int MP);
	float GetHealth();
	void SetHealth(float fValue);
	float GetArmour();
	void SetArmour(float fValue);
	int GetFlags();
	void SetFlags(int nValue);
	BOOL IsDead();
	int GetState();
	void SetState(int nValue);
	void SetTargetRotation(float fValue);
	void ForceTargetRotation(float fValue);
	BOOL IsPassenger();
	::CVehicle *GetVehicle();
	void ClearAllWeapons();
	void SetArmedWeapon(int nWeapon, bool bGameFunc);
	float GetDistanceToEntity(CEntity *pEntity);
	int GetSeatIdx(); // returns the vehicle seat where this player is sitting
	void PutInVehicle(unsigned long hVehicle, int nSeatId);
	void EnterVehicle(unsigned long hVehicle, bool bPassenger);
	void ExitFromVehicle();
	void RemoveFromVehicleAndPutAt(CVector vPosition);
	void SetSpawn(CVector *pPos, float fRotation);
	void TogglePlayerControllable(bool bEnable);
	unsigned char FindDeathReasonAndResponsiblePlayer(ID *nPlayer);
	void HandsUp();
	BOOL DoesHandsUp();
	void HoldObject(int nModel);
	void StartJetpack();
	void StopJetpack();
	BOOL HasJetpack();
	BOOL StartPassengerDriveByMode();
	void ExtinguishFire();
	void SetWalkStyle(int nStyle);
	void SetMoney(int nCount);
	void ApplyAnim(const char *szAnim, const char *szIFP, float fFramedelta, int bLockA, int bLockX, int bLockY, int bLockF, int nTime);
	BOOL IsPerformingAnimation(const char *szAnim);
	void SetInterior(unsigned char nId, bool bRefresh);
	void CheckVehicleParachute();
	BOOL IsOnGround();
	void ResetDamageEntity();
	void SetWeaponModelIndex(int nModel);
	float GetAimZ();
	void SetAimZ(float fValue);
	::CEntity *GetContactEntity();
	::CVehicle *GetContactVehicle();
	int GetStat();
	BOOL IsPerformingCustomAnim();
	void StartDancing(int nStyle);
	void StopDancing();
	BOOL DoesDancing();
	const char *GetDanceAnimForMove(int nMove);
	void DropStuff();
	void ProcessDrunk();
	unsigned int GetDrunkLevel();
	void SetDrunkLevel(int nValue);
	void ToggleCellphone(bool bEnable);
	BOOL IsCellphoneEnabled();
	char GetFightingStyle();
	void SetFightingStyle(char nStyle);
	void StartUrinating();
	void StopUrinating();
	BOOL DoesUrinating();
	void GetBonePosition(int nBone, CVector *pPos); // bUpdateSkinBones = false
	void SetKeys(unsigned short nKeys, unsigned short lrAnalog, unsigned short udAnalog);
	void CreateMarker(D3DCOLOR dwColor);
	void GiveWeapon(int nWeapon, int nAmmo);
	void Kill();
	void GiveStuff(eStuffType nType);
	unsigned short GetKeys(short *pLeftStickX, short *pLeftStickY);
	BOOL IsInVehicle();
	BOOL Destroy();
	void ApplyCommandTask(const char *szTaskName, int p1, int p2, int p3, CVector *p4, int p5, float p6, int p7, int p8, int p9);
	CWeapon *GetCurrentWeaponSlot();
};

SAMP_END