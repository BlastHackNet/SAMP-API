/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi.h"
#include "CVehicle.h"
#include "CCamera.h"
#include "KeyStuff.h"

SAMPAPI_BEGIN_PACKED_V037R1

namespace VehicleSelection {
    SAMPAPI_EXPORT SAMPAPI_VAR CCamera*& RefCamera();
    SAMPAPI_EXPORT SAMPAPI_VAR CVehicle*& RefVehicle();
    SAMPAPI_EXPORT SAMPAPI_VAR CPad*& RefControls();
    SAMPAPI_EXPORT SAMPAPI_VAR BOOL& RefInitialized();
    SAMPAPI_EXPORT SAMPAPI_VAR int& RefSelectedModel();

    SAMPAPI_EXPORT void ResetVehicle();
    SAMPAPI_EXPORT void Process();
} // namespace VehicleSelection

SAMPAPI_END_PACKED
