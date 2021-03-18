/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"

SAMPAPI_BEGIN_PACKED_V037R1

struct SAMPAPI_EXPORT Settings {
    enum { SETTINGS_STRING_LEN = 256 };

    BOOL m_bDebugMode;                             // -d
    BOOL m_bOnlineGame;                            // -c
    BOOL m_bWindowedMode;                          // unused
    char m_szPass[SETTINGS_STRING_LEN + 1];        // -z
    char m_szHost[SETTINGS_STRING_LEN + 1];        // -h
    char m_szPort[SETTINGS_STRING_LEN + 1];        // -p
    char m_szNick[SETTINGS_STRING_LEN + 1];        // -n
    char m_szDebugScript[SETTINGS_STRING_LEN + 1]; // -l

    static void Initialize();
    static void GetFromCommandLine(const char* szLine, char* szString);
    static void GetFromQuotes(const char* szLine, char* szString);
};

SAMPAPI_EXPORT SAMPAPI_VAR Settings& RefSettings();

SAMPAPI_END_PACKED
