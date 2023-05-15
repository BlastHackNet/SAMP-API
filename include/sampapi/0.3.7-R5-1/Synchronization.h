/*
	This is a SAMP (0.3.7-R1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/CVector.h"
#include "sampapi/0.3.7-R5-1/Animation.h"
#include "sampapi/0.3.7-R5-1/ControllerState.h"

SAMPAPI_BEGIN_PACKED_V037R5_1

namespace Synchronization {
    struct SAMPAPI_EXPORT OnfootData {
        ControllerState m_controllerState;
        CVector         m_position;
        float           m_fQuaternion[4];
        unsigned char   m_nHealth;
        unsigned char   m_nArmor;
        unsigned char   m_nCurrentWeapon;
        unsigned char   m_nSpecialAction;
        CVector         m_speed;
        CVector         m_surfingOffset;
        ID              m_nSurfingVehicleId;
        Animation       m_animation;
    };

    struct SAMPAPI_EXPORT IncarData {
        ID              m_nVehicle;
        ControllerState m_controllerState;
        float           m_fQuaternion[4];
        CVector         m_position;
        CVector         m_speed;
        float           m_fHealth;
        unsigned char   m_nDriverHealth;
        unsigned char   m_nDriverArmor;
        unsigned char   m_nCurrentWeapon;
        bool            m_bSirenEnabled;
        bool            m_bLandingGear;
        ID              m_nTrailerId;
        union {
            unsigned short m_aHydraThrustAngle[2];
            float          m_fTrainSpeed;
        };
    };

    struct SAMPAPI_EXPORT AimData {
        enum WeaponState {
            WS_NO_BULLETS = 0,
            WS_LAST_BULLET = 1,
            WS_MORE_BULLETS = 2,
            WS_RELOADING = 3,
        };

        unsigned char m_nCameraMode;
        CVector       m_aimf1;
        CVector       m_aimPos;
        float         m_fAimZ;
        unsigned char m_nCameraExtZoom : 6;
        unsigned char m_nWeaponState : 2;
        char          m_nAspectRatio;
    };

    struct SAMPAPI_EXPORT TrailerData {
        ID      m_nId;
        CVector m_position;
        float   m_fQuaternion[4];
        CVector m_speed;
        CVector m_turnSpeed;
    };

    struct SAMPAPI_EXPORT PassengerData {
        ID              m_nVehicleId;
        unsigned char   m_nSeatId; // flags
        unsigned char   m_nCurrentWeapon;
        unsigned char   m_nHealth;
        unsigned char   m_nArmor;
        ControllerState m_controllerState;
        CVector         m_position;
    };

    struct SAMPAPI_EXPORT UnoccupiedData {
        ID            m_nVehicleId;
        unsigned char m_nSeatId;
        CVector       m_roll;
        CVector       m_direction;
        CVector       m_position;
        CVector       m_speed;
        CVector       m_turnSpeed;
        float         m_fHealth;
    };

    struct SAMPAPI_EXPORT BulletData {
        unsigned char m_nTargetType;
        ID            m_nTargetId;
        CVector       m_origin;
        CVector       m_target;
        CVector       m_center;
        unsigned char m_nWeapon;
    };

    struct SAMPAPI_EXPORT SpectatorData {
        ControllerState m_controllerState;
        CVector         m_position;
    };

    struct SAMPAPI_EXPORT StatsData {
        int m_nMoney;
        int m_nDrunkLevel;
    };

    inline char CompressAspectRatio(float v) {
        return static_cast<char>(v * 255.0f);
    }

    inline float DecompressAspectRatio(char v) {
        return v / 255.0f;
    }

    inline unsigned char CompressCameraExtZoom(float v) {
        return static_cast<unsigned char>(v * 63.0f) & 63;
    }

    inline float DecompressCameraExtZoom(unsigned char v) {
        return (v & 63) / 63.0f;
    }

    /*
		a structure in this block has dynamic size
		
		struct SAMPAPI_EXPORT WeaponsData {
			ID m_nAimedPlayer;
			ID m_nAimedActor;

			struct {
				char m_nSlot;
				char m_nWeapon;
				unsigned short m_nAmmo;
			} m_aWeapons[n]; // 0 < n < 14
		};

		struct SAMPAPI_EXPORT RconCommand {
			unsigned long m_nTextLen;
			char m_szText[m_nTextLen];
		};

		struct SAMPAPI_EXPORT MarkersData {
			bool m_bCreate; // create(1)/remove(0)
			int m_nCount;

			struct {
				ID m_nPlayer;
				VectorCompressed m_vPos;
			} m_aMarkers[m_nCount];
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
} // namespace Synchronization

SAMPAPI_END_PACKED
