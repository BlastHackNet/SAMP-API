/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"

class CPad;

SAMP_BEGIN_NP

namespace KeyStuff {	
	extern CPad *&pInternalKeys; // gta CPad class object (0xB73458)
	extern CPad *pLocalPlayerKeys;
	extern CPad *aRemotePlayerKeys; // [SAMP_PLAYER_PED_SLOTS]

	extern bool *&bDriveByLeft;
	extern bool *&bDriveByRight;
	extern bool &bDriveByLeftPrevValue;
	extern bool &bDriveByRightPrevValue;

	void Initialize();
	void ApplyLocalPlayerKeys();
	void UpdateLocalPlayerKeys();
	void SetPlayerKeys(int nPlayerNumber, const CPad *pPad);
	void SynchronizeWithRemotePlayer(int nPlayerNumber);
	CPad *GetInternalKeys();
	CPad *GetPlayerKeys(int nPlayerNumber);
	void ResetPlayerKeys(int nPlayerNumeber);
	void ResetInternalKeys();
}

SAMP_END_NP