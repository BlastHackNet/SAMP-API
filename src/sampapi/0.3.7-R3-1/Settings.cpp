/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/Settings.h"

SAMPAPI_BEGIN_V037R3_1

SAMPAPI_VAR Settings& RefSettings() {
    return *(Settings*)GetAddress(0x26DD30);
}

void Settings::Initialize() {
    ((void(__cdecl*)())GetAddress(0xC4E40))();
}

void Settings::GetFromCommandLine(const char* szLine, char* szBuffer) {
    ((void(__cdecl*)(const char*, char*))GetAddress(0xC4740))(szLine, szBuffer);
}

void Settings::GetFromQuotes(const char* szLine, char* szBuffer) {
    ((void(__cdecl*)(const char*, char*))GetAddress(0xC4790))(szLine, szBuffer);
}

SAMPAPI_END
