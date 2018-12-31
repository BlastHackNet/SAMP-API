/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"

SAMP_BEGIN

typedef void(__cdecl *CMDPROC)(const char *);

namespace Commands {
	extern CMDPROC Default;
	extern CMDPROC TestDeathWindow;
	extern CMDPROC ToggleCameraTargetLabels;
	extern CMDPROC SetChatPageSize;
	extern CMDPROC SetChatFontSize;
	extern CMDPROC DrawNameTagStatus;
	extern CMDPROC DrawChatTimestamps;
	extern CMDPROC ToggleAudioStreamMessages;
	extern CMDPROC ToggleURLMessages;
	extern CMDPROC ToggleHUDScaleFix;
	extern CMDPROC PrintMemory;
	extern CMDPROC SetFrameLimiter;
	extern CMDPROC ToggleHeadMoves;
	extern CMDPROC Quit;
	extern CMDPROC CmpStat;//dummy
	extern CMDPROC SavePosition;
	extern CMDPROC SavePositionOnly;
	extern CMDPROC PrintCurrentInterior;
	extern CMDPROC ToggleObjectsLight;
	extern CMDPROC ToggleDebugLabels;
	extern CMDPROC SendRconCommand;

	namespace Debug {
		extern CMDPROC SetPlayerSkin;
		extern CMDPROC CreateVehicle;
		extern CMDPROC EnableVehicleSelection;
		extern CMDPROC SetWorldWeather;
		extern CMDPROC SetWorldTime;
	}

	void Setup();
}

SAMP_END