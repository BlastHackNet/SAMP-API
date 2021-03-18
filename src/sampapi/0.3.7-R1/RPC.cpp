/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/RPC.h"

SAMPAPI_BEGIN_V037R1

int RPC::Outcoming::ClassRequest::ID = 128;
int RPC::Outcoming::DeathNotification::ID = 53;
int RPC::Outcoming::InteriorChangeNotification::ID = 118;
int RPC::Outcoming::Spawn::ID = 52;
int RPC::Outcoming::SpawnRequest::ID = 129;
int RPC::Outcoming::UpdateVehicleDamage::ID = 106;
int RPC::Outcoming::EnterVehicleNotification::ID = 26;
int RPC::Outcoming::ExitVehicleNotification::ID = 154;
int RPC::Outcoming::UpdatePlayersInfo::ID = 155;
int RPC::Outcoming::ClickPlayer::ID = 23;

SAMPAPI_END
