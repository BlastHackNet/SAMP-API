/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"

SAMPAPI_BEGIN_PACKED_V037R1

namespace Debug {
    enum { DEBUG_MODE_VEHICLE_SELECTION = 10 };

    SAMPAPI_EXPORT SAMPAPI_VAR int& RefMode();
    SAMPAPI_EXPORT SAMPAPI_VAR void*& RefFirstEntity();
    SAMPAPI_EXPORT SAMPAPI_VAR void*& RefSecondEntity();

    SAMPAPI_EXPORT void SetProperties(void* pFirstEntity, void* pSecondEntity, int nMode);
    SAMPAPI_EXPORT void Disable();
} // namespace Debug

SAMPAPI_END_PACKED
