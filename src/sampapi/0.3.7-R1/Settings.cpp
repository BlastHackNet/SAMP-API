/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/Settings.h"

SAMPAPI_BEGIN_V037R1

SAMPAPI_VAR Settings& RefSettings() {
    return *(Settings*)GetAddress(0x219760);
}

void Settings::Initialize() {
    ((void(__cdecl*)())GetAddress(0xB2FF0))();
}

void Settings::GetFromCommandLine(const char* szLine, char* szString) {
    ((void(__cdecl*)(const char*, char*))GetAddress(0xB28F0))(szLine, szString);
}

void Settings::GetFromQuotes(const char* szLine, char* szString) {
    ((void(__cdecl*)(const char*, char*))GetAddress(0xB2940))(szLine, szString);
}

SAMPAPI_END
