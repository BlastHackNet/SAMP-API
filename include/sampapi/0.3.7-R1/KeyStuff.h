/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"

class CPad;

SAMPAPI_BEGIN_V037R1

namespace KeyStuff {
    SAMPAPI_EXPORT SAMPAPI_VAR CPad& RefLocalPlayerKeys();
    SAMPAPI_EXPORT SAMPAPI_VAR CPad* ArrayPlayerKeys();
    SAMPAPI_EXPORT SAMPAPI_VAR CPad*& RefInternalKeys();
    SAMPAPI_EXPORT SAMPAPI_VAR bool*& RefDriveByLeft();
    SAMPAPI_EXPORT SAMPAPI_VAR bool*& RefDriveByRight();
    SAMPAPI_EXPORT SAMPAPI_VAR bool& RefSavedDriveByLeft();
    SAMPAPI_EXPORT SAMPAPI_VAR bool& RefSavedDriveByRight();

    SAMPAPI_EXPORT void Initialize();
    SAMPAPI_EXPORT void UpdateKeys();
    SAMPAPI_EXPORT void ApplyKeys();
    SAMPAPI_EXPORT void SetKeys(int nPlayer, const CPad* pKeys);
    SAMPAPI_EXPORT void ApplyKeys(int nPlayer);
    SAMPAPI_EXPORT CPad* GetInternalKeys();
    SAMPAPI_EXPORT CPad* GetKeys();
    SAMPAPI_EXPORT CPad* GetKeys(int nPlayer);
    SAMPAPI_EXPORT void  ResetKeys(int nPlayer);
    SAMPAPI_EXPORT void  ResetInternalKeys();
} // namespace KeyStuff

SAMPAPI_END
