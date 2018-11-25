/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "common.h"

SAMP_BEGIN_NP

namespace Commands {
	void Setup();

	void DefaultHandler(char *pParam);
	void Discon(char *pParam); // unused
	void SetChatPageSize(char *pParam);
	void SetChatFontSize(char *pParam);
	void SetNametagStatus(char *pParam);
	void ToggleEnabledTimestamps(char *pParam);
	void AudioMessage(char *pParam);
	void Memory(char *pParam);
	void SetFPSLimit(char *pParam);
	void TogglePlayersHeadMoves(char *pParam);
	void Quit(char *pParam);
	void CmpStat(char *pParam); // dummy
	void SavePosition(char *pParam);
	void SaveRawPosition(char *pParam);
	
	// will be registered if debug mode was enabled (samp.dll+219760) 
	namespace Debug {
		void SetPlayerSkin(char *pParam);
		void CreateVehicle(char *pParam);
		void SelectVehicle(char *pParam);
		void SetWorldWeather(char *pParam);
		void SetWorldTime(char *pParam);
	}

	void ShowInterior(char *pParam);
	void ToggleObjectsLight(char *pParam);
	void DebugLabels(char *pParam);
	void Rcon(char *pParam);
}

SAMP_END_NP