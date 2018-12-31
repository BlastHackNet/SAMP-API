/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"

class CPad;

SAMP_BEGIN

namespace KeyStuff {
	extern CPad *pLocalPlayerKeys;
	extern CPad *aPlayerKeys;
	extern CPad *&pInternalKeys;
	extern bool *&pDriveByLeft;
	extern bool *&pDriveByRight;
	extern bool &bSavedDriveByLeft;
	extern bool &bSavedDriveByRight;

	void Initialize();
	void UpdateKeys();
	void ApplyKeys();
	void SetKeys(int nPlayer, const CPad *pKeys);
	void ApplyKeys(int nPlayer);
	CPad *GetInternalKeys();
	CPad *GetKeys();
	CPad *GetKeys(int nPlayer);
	void ResetKeys(int nPlayer);
	void ResetInternalKeys();
}

SAMP_END