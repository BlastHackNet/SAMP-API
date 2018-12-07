/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"
#include "CVehicle.h"
#include "CCamera.h"
#include "KeyStuff.h"

SAMP_BEGIN

namespace VehicleSelection {
	extern CCamera *&pCamera;
	extern CVehicle *&pVehicle;
	extern CPad *&pControls;
	extern BOOL &bInitialized;
	extern int &nSelectedModel;

	void ResetVehicle();
	void Process();
}

SAMP_END