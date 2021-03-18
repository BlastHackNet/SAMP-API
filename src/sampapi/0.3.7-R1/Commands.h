/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"

SAMPAPI_BEGIN_V037R1

namespace Commands {
    SAMPAPI_EXPORT void Default(const char*);
    SAMPAPI_EXPORT void TestDeathWindow(const char*);
    SAMPAPI_EXPORT void ToggleCameraTargetLabels(const char*);
    SAMPAPI_EXPORT void SetChatPageSize(const char*);
    SAMPAPI_EXPORT void SetChatFontSize(const char*);
    SAMPAPI_EXPORT void DrawNameTagStatus(const char*);
    SAMPAPI_EXPORT void DrawChatTimestamps(const char*);
    SAMPAPI_EXPORT void ToggleAudioStreamMessages(const char*);
    SAMPAPI_EXPORT void PrintMemory(const char*);
    SAMPAPI_EXPORT void SetFrameLimiter(const char*);
    SAMPAPI_EXPORT void ToggleHeadMoves(const char*);
    SAMPAPI_EXPORT void Quit(const char*);
    SAMPAPI_EXPORT void CmpStat(const char*); //dummy
    SAMPAPI_EXPORT void SavePosition(const char*);
    SAMPAPI_EXPORT void SavePositionOnly(const char*);
    SAMPAPI_EXPORT void PrintCurrentInterior(const char*);
    SAMPAPI_EXPORT void ToggleObjectsLight(const char*);
    SAMPAPI_EXPORT void ToggleDebugLabels(const char*);
    SAMPAPI_EXPORT void SendRconCommand(const char*);

    namespace Debug {
        SAMPAPI_EXPORT void SetPlayerSkin(const char*);
        SAMPAPI_EXPORT void CreateVehicle(const char*);
        SAMPAPI_EXPORT void EnableVehicleSelection(const char*);
        SAMPAPI_EXPORT void SetWorldWeather(const char*);
        SAMPAPI_EXPORT void SetWorldTime(const char*);
    } // namespace Debug

    SAMPAPI_EXPORT void Setup();
} // namespace Commands

SAMPAPI_END
