/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/0.3.7-R1/CNetGame.h"

//void Chat(RPCParameters *pParams); // {ID playerId; BYTE textLen; char text[];}, 0xEEA0
//void Message(RPCParameters *pParams); // {D3DCOLOR color; BYTE textLen; char text[];}, 0xC050
//void SetWeather(RPCParameters *pParams); // {BYTE weather}, 0xC430
//void ExitVehicle(RPCParameters *pParams); // {ID playerId; ID vehicleId; (unused)}, 0xE770
//void EnterVehicle(RPCParameters *pParams); // {ID playerId; ID vehicleId; bool passenger;}, 0xE650
//void SetLocalTime(RPCParameters *pParams); // {BYTE hour; BYTE min;}, 0xC4E0
//void HoldTime(RPCParameters *pParams); // {bool hold}, 0xC5C0
//void UpdateGlobalTimer(RPCParameters *pParams); // {int time;}, 0xCFE0
//void RequestClass(RPCParameters *pParams); // {bool requestOutcome; CLocalPlayer::SpawnInfo spawnInfo; }, 0xD080
//void RequestSpawn(RPCParameters *pParams); // {bool byteRequestOutcome;}, 0xD150
//void CreateCheckpoint(RPCParameters *pParams); // {CVector pos; float size;}, 0xD220
//void CreateRaceCheckpoint(RPCParameters *pParams); // {BYTE type; CVector pos; CVector nextPos; float fSize;}, 0xD330
//void UpdatePlayerScoreAndPing(RPCParameters *pParams); // {ID playerId; int score; int ping;}, 0xD490

SAMPAPI_BEGIN_PACKED_V037R1

namespace RPC {
    namespace Incoming {

    }
    namespace Outcoming {
        struct SAMPAPI_EXPORT DeathNotification {
            unsigned char  m_nReason;
            unsigned short m_nKiller;

            static int ID;
        };

        struct SAMPAPI_EXPORT Spawn {
            static int ID;
        };

        struct SAMPAPI_EXPORT UpdateVehicleDamage {
            unsigned short m_nVehicle;
            unsigned int   m_nPanels;
            unsigned int   m_nDoors;
            unsigned char  m_nLights;
            unsigned char  m_nTyres;

            static int ID;
        };

        struct SAMPAPI_EXPORT ClassRequest {
            int m_nClass;

            static int ID;
        };

        struct SAMPAPI_EXPORT SpawnRequest {
            static int ID;
        };

        struct SAMPAPI_EXPORT InteriorChangeNotification {
            unsigned char m_nId;

            static int ID;
        };

        struct SAMPAPI_EXPORT EnterVehicleNotification {
            unsigned short m_nVehicle;
            bool           m_bPassenger;

            static int ID;
        };

        struct SAMPAPI_EXPORT ExitVehicleNotification {
            unsigned short m_nVehicle;

            static int ID;
        };

        struct SAMPAPI_EXPORT UpdatePlayersInfo {
            static int ID;
        };

        struct SAMPAPI_EXPORT ClickPlayer {
            unsigned short m_nPlayer;
            char           m_nSource; // wtf

            static int ID;
        };
    } // namespace Outcoming

#if defined(__RAK_CLIENT_H)
    template<class T>
    void Send(T params, bool bEmptyBs = false, PacketPriority nPriority = HIGH_PRIORITY, PacketReliability nReliability = RELIABLE_ORDERED, char nOrderingChannel = 0, bool bShiftTimestamp = false, NetworkID networkId = UNASSIGNED_NETWORK_ID, RakNet::BitStream* pReplyFromTarget = nullptr) {
        RakNet::BitStream bs;

        if (!bEmptyBs)
            bs.Write(params);

        pNetGame->m_pRakClient->RPC(&T::ID, &bs, nPriority, nReliability, nOrderingChannel, bShiftTimestamp, networkId, pReplyFromTarget);
    }

    template<class T>
    T Read(RPCParameters* pParams) {
        RakNet::BitStream bs(pParams->input, pParams->numberOfBitsOfData / 8 + 1, false);
        T                 params;

        bs.Read(params);

        return params;
    }
#endif
} // namespace RPC

SAMPAPI_END_PACKED
