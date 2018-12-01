/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"
#include "CVector.h"

#define AUDIOSTREAM_MAX_STRING 256

SAMP_BEGIN

class SAMP_API CAudioStream {
public:
	bool m_bInitialized;

	static unsigned long &hStream; // BASS HSTREAM
	static bool &bNeedsToDestroy;
	static CVector &vPosition;
	static bool &bIsPlaying;
	static char *szUrl;
	static bool &bIs3d;
	static char *szInfo; // "<artist> - <title>"
	static char *szIcyName;
	static char *szIcyUrl; // unused
	
	static void _ConstructInfo();
	static void Process(void *arglist); // thread

	BOOL Initialize();
	BOOL Stop(bool bWait);
	void ConstructInfo();
	BOOL Play(const char *szUrl, CVector vPosition, bool bIs3d);
	void ControlGameRadio();
	void DrawInfo();
};

extern CAudioStream *&pAudioStream;

SAMP_END