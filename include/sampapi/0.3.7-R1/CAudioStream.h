/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/CVector.h"

SAMPAPI_BEGIN_PACKED_V037R1

class SAMPAPI_EXPORT CAudioStream {
public:
    enum { AUDIOSTREAM_MAX_STRING = 256 };

    bool m_bInitialized;

    static SAMPAPI_EXPORT SAMPAPI_VAR int& RefStream();
    static SAMPAPI_EXPORT SAMPAPI_VAR bool& RefIsPlaying();
    static SAMPAPI_EXPORT SAMPAPI_VAR CVector& RefPosition();
    static SAMPAPI_EXPORT SAMPAPI_VAR bool& RefIs3d();
    static SAMPAPI_EXPORT SAMPAPI_VAR char* ArrayIcyUrl();
    static SAMPAPI_EXPORT SAMPAPI_VAR char* ArrayInfo();
    static SAMPAPI_EXPORT SAMPAPI_VAR char* ArrayUrl();
    static SAMPAPI_EXPORT SAMPAPI_VAR bool& RefNeedsToDestroy();
    static SAMPAPI_EXPORT SAMPAPI_VAR float& RefRadius();
    static SAMPAPI_EXPORT SAMPAPI_VAR char* ArrayIcyName();

    static void ConstructInfo();
    static void SyncProc(int handle, int channel, int data, void* user);
    static void Process(void* arglist);

    BOOL Reset();
    BOOL Stop(bool bWait);
    BOOL Play(const char* szUrl, CVector position, float fRadius, bool bIs3d);
    void ControlGameRadio();
    void DrawInfo();
};

SAMPAPI_EXPORT SAMPAPI_VAR CAudioStream*& RefAudioStream();

SAMPAPI_END_PACKED
