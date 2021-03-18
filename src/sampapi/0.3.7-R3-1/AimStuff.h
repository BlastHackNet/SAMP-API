/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/CVector.h"

SAMPAPI_BEGIN_PACKED_V037R3_1

namespace AimStuff {
    struct SAMPAPI_EXPORT Aim {
        CVector front;
        CVector source;
        CVector sourceBeforeLookBehind;
        CVector up;
    };

    SAMPAPI_EXPORT SAMPAPI_VAR float& RefLocalPlayerCameraExtZoom();
    SAMPAPI_EXPORT SAMPAPI_VAR float& RefLocalPlayerAspectRatio();
    SAMPAPI_EXPORT SAMPAPI_VAR float*& RefInternalCameraExtZoom();
    SAMPAPI_EXPORT SAMPAPI_VAR float*& RefInternalAspectRatio();
    SAMPAPI_EXPORT SAMPAPI_VAR float* ArrayCameraExtZoom();
    SAMPAPI_EXPORT SAMPAPI_VAR float* ArrayAspectRatio();
    SAMPAPI_EXPORT SAMPAPI_VAR char* ArrayCameraMode();
    SAMPAPI_EXPORT SAMPAPI_VAR char*& RefInternalCameraMode();
    SAMPAPI_EXPORT SAMPAPI_VAR Aim& RefLocalPlayerAim();
    SAMPAPI_EXPORT SAMPAPI_VAR Aim* ArrayPlayerAim();
    SAMPAPI_EXPORT SAMPAPI_VAR Aim*& RefInternalAim();

    SAMPAPI_EXPORT void  UpdateCameraExtZoomAndAspectRatio();
    SAMPAPI_EXPORT void  ApplyCameraExtZoomAndAspectRatio();
    SAMPAPI_EXPORT void  SetCameraExtZoomAndAspectRatio(NUMBER nPlayer, float fCameraExtZoom, float fAspectRatio);
    SAMPAPI_EXPORT float GetAspectRatio();
    SAMPAPI_EXPORT float GetCameraExtZoom();
    SAMPAPI_EXPORT void  ApplyCameraExtZoomAndAspectRatio(NUMBER nPlayer);
    SAMPAPI_EXPORT void  SetCameraMode(char nMode, NUMBER nPlayer);
    SAMPAPI_EXPORT char  GetCameraMode(NUMBER nPlayer);
    SAMPAPI_EXPORT char  GetCameraMode();
    SAMPAPI_EXPORT void  Initialize();
    SAMPAPI_EXPORT void  UpdateAim();
    SAMPAPI_EXPORT void  ApplyAim();
    SAMPAPI_EXPORT Aim* GetAim();
    SAMPAPI_EXPORT void SetAim(int nPlayer, const Aim* pAim);
    SAMPAPI_EXPORT void ApplyAim(int nPlayer);
    SAMPAPI_EXPORT Aim* GetAim(int nPlayer);
} // namespace AimStuff

SAMPAPI_END_PACKED
