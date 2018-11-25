/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"
#include "CVector.h"

SAMP_BEGIN_NP

namespace AimStuff {
	// chunk of gta CCamera class? wtf
	struct Aim {
		CVector f1;
		CVector pos1;
		CVector pos2;
		CVector f2;
	};

	extern Aim &localPlayerAim;

	extern Aim *aPlayerAim; // [SAMP_PLAYER_PED_SLOTS]
	extern char *aCameraMode; // [SAMP_PLAYER_PED_SLOTS]
	extern float *aCameraExtZoom; // [SAMP_PLAYER_PED_SLOTS]

	extern Aim *&pInternalAim; // ref to 0xB6F32C
	extern float *&pCameraExtZoom; // ref to 0xB6F250
	extern char *&pCameraMode; // ref to 0xB6F1A8
	extern float *&pAspectRatio; // ref to 0xC3EFA4

	float GetLocalPlayerCameraExtZoom();
	void ApplyPlayerCameraExtZoom(int nPlayerNumber);
	void SetPlayerCameraMode(char nMode, int nPlayerNumber);
	char GetPlayerCameraMode(int nPlayerNumber);
	char GetLocalPlayerCameraMode();
	void Initialise();
	void UpdateLocalPlayerAim();
	void ApplyLocalPlayerAim();
	Aim *GetInternalAim();
	void CopyPlayerAim(int nPlayerNumber, Aim *pDest);
	void ApplyPlayerAim(int nPlayerNumber);
	Aim *GetPlayerAim(int nPlayerNumber);
}

SAMP_END_NP