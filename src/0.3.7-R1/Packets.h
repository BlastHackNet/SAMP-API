/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"
#include "CVector.h"
//#include "CNetGame.h"

#define _DEFAULT_CTOR(_TYPE) inline _TYPE() { for (int i = 0; i < sizeof(*this); i++) ((unsigned char *)this)[i] = 0; }
#define _ID(_ID) static const unsigned char ID = _ID;

SAMP_BEGIN

enum eWeaponState : unsigned char {
	WS_NO_BULLETS,
	WS_LAST_BULLET,
	WS_MORE_BULLETS,
	WS_RELOADING
};

struct SAMP_API ControllerState {
	short m_sLeftStickX; // move/steer left = -128, right = 128
	short m_sLeftStickY; // move back = 128, forwards = -128
	union {
		struct {
			unsigned char m_bLeftShoulder1 : 1; // fire weapon alt
			unsigned char m_bShockButtonL : 1; // crouch
			unsigned char m_bButtonCircle : 1; // fire weapon
			unsigned char m_bButtonCross : 1; // sprint, accelerate
			unsigned char m_bButtonTriangle : 1; // enter/exit vehicle
			unsigned char m_bButtonSquare : 1; // jump, reverse
			unsigned char m_bRightShoulder2 : 1; // look right (incar)
			unsigned char m_bRightShoulder1 : 1; // hand brake, target
				
			unsigned char m_bLeftShoulder2 : 1; // look left
			unsigned char m_bShockButtonR : 1; // look behind
			unsigned char m_bPedWalk : 1; // walking
			unsigned char m_bRightStickDown : 1; 
			unsigned char m_bRightStickUp : 1;
			unsigned char m_bRightStickRight : 1; // num 4
			unsigned char m_bRightStickLeft : 1; // num 6
			// 16th bit is unused
		};
		unsigned short m_value;
	};

	_DEFAULT_CTOR(ControllerState)
};

namespace PACKET {
	struct SAMP_API OnfootData {
		ControllerState	m_controllerState;
		CVector				m_vPosition;
		float					m_fQuaternion[4];
		unsigned char		m_nHealth;
		unsigned char		m_nArmor;
		unsigned char		m_nCurrentWeapon;
		unsigned char		m_nSpecialAction;
		CVector				m_vMoveSpeed;
		CVector				m_vSurfingOffset;
		ID						m_nSurfingVehicleId;
		short					m_nCurrentAnimationID;
		short					m_nAnimFlags;

		_ID(207)

		_DEFAULT_CTOR(OnfootData)
	};

	struct SAMP_API IncarData {
		ID						m_nVehicle;
		ControllerState	m_controllerState;
		float					m_fQuaternion[4];
		CVector				m_vPosition;
		CVector				m_vMoveSpeed;
		float					m_fVehicleHealth;
		unsigned char		m_nDriverHealth;
		unsigned char		m_nDriverArmor;
		unsigned char		m_nCurrentWeapon;
		unsigned char		m_bSiren;
		unsigned char		m_bLandingGear;
		ID						m_nTrailer;
		union {
			unsigned short	m_aHydraThrustAngle[2];
			float				m_fTrainSpeed;
		};

		_ID(200)

		_DEFAULT_CTOR(IncarData)
	};

	struct SAMP_API AimData {
		unsigned char	m_nCameraMode;
		CVector			m_vAimf1;
		CVector			m_vAimPos;
		float				m_fAimZ;
		unsigned char	m_nCameraExtZoom : 6; // 0-63 normalized
		eWeaponState	m_nWeaponState : 2;
		unsigned char	field_;
	
		_ID(203)

		_DEFAULT_CTOR(AimData)
	};

	struct SAMP_API TrailerData {
		ID			m_nTrailer;
		CVector	m_vPosition;
		float		m_fQuaternion[4];
		CVector	m_vSpeed;
		CVector	m_vSpin;

		_ID(210)

		_DEFAULT_CTOR(TrailerData)
	};

	struct SAMP_API PassengerData {
		ID						m_nVehicle;
		unsigned char		m_nSeatId;
		unsigned char		m_nCurrentWeapon;
		unsigned char		m_nHealth;
		unsigned char		m_nArmor;
		ControllerState	m_controllerState;
		CVector				m_vPosition;

		_ID(211)

		_DEFAULT_CTOR(PassengerData)
	};

	struct SAMP_API UnoccupiedData {
		ID					m_nVehicle;
		unsigned char	m_nSeatID;
		CVector			m_vRoll;
		CVector			m_vDirection;
		CVector			m_vPosition;
		CVector			m_vMoveSpeed;
		CVector			m_vTurnSpeed;
		float				m_fHealth;
		
		_ID(209)

		_DEFAULT_CTOR(UnoccupiedData)
	};

	struct SAMP_API BulletData {
		unsigned char	m_nTargetType;
		ID					m_nTarget;
		CVector			m_vOrigin;
		CVector			m_vTarget;
		CVector			m_vCenter;
		unsigned char	m_nWeapon;

		_ID(206)

		_DEFAULT_CTOR(BulletData)
	};

	struct SAMP_API SpectatorData {
		ControllerState m_controllerState;
		CVector			 m_vPosition;

		_ID(212)

		_DEFAULT_CTOR(SpectatorData)
	};

	struct SAMP_API StatsData {
		int m_nMoney;
		int m_nDrunkLevel;

		_ID(205)

		_DEFAULT_CTOR(StatsData)
	};

	/*
		a structure in this block has dynamic size
		
		struct SAMP_API WeaponsData {
			ID m_nAimedPlayer;
			ID m_nAimedActor;

			struct {
				char m_nSlot;
				char m_nWeapon;
				unsigned short m_nAmmo;
			} m_aWeapons[n]; // 0 < n < 14

			_ID(204)
			_DEFAULT_CTOR(WeaponsData)
		};

		struct SAMP_API RconCommand {
			unsigned long m_nTextLen;
			char m_szText[m_nTextLen];

			_ID(201)
			_DEFAULT_CTOR(RconCommand)
		};

		struct SAMP_API MarkersData {
			bool m_bCreate; // create(1)/remove(0)
			int m_nCount;

			struct {
				ID m_nPlayer;
				VectorCompressed m_vPos;
			} m_aMarkers[m_nCount];

			_ID(208)
			_DEFAULT_CTOR(MarkersData)
		};
	*/

#if defined(__RAK_CLIENT_H)
	template<class T>
	void Send(T packet) {
		RakNet::BitStream bs;

		bs.Write(T::ID);
		bs.Write(packet);
	
		pNetGame->m_pRakClient->Send(&bs, HIGH_PRIORITY, RELIABLE, 0);
	}
#endif
}

SAMP_END
