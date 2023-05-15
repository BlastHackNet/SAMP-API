/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/Settings.h"

SAMPAPI_BEGIN_V037R5_1

SAMPAPI_VAR Settings& RefSettings() {
    return *(Settings*)GetAddress(0x26DFE8);
}

void Settings::Initialize() {
    ((void(__cdecl*)())GetAddress(0xC45B0))();
}

void Settings::GetFromCommandLine(const char* szLine, char* szBuffer) {
    ((void(__cdecl*)(const char*, char*))GetAddress(0xC3EC0))(szLine, szBuffer);
}

void Settings::GetFromQuotes(const char* szLine, char* szBuffer) {
    ((void(__cdecl*)(const char*, char*))GetAddress(0xC3F10))(szLine, szBuffer);
}

SAMPAPI_END
