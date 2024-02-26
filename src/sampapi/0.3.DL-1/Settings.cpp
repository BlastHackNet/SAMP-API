/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/Settings.h"

SAMPAPI_BEGIN_V03DL_1

SAMPAPI_VAR Settings& RefSettings() {
    return *(Settings*)GetAddress(0x2ABE78);
}

void Settings::Initialize() {
    ((void(__cdecl*)())GetAddress(0xC5C90))();
}

void Settings::GetFromCommandLine(const char* szLine, char* szBuffer) {
    ((void(__cdecl*)(const char*, char*))GetAddress(0xC5590))(szLine, szBuffer);
}

void Settings::GetFromQuotes(const char* szLine, char* szBuffer) {
    ((void(__cdecl*)(const char*, char*))GetAddress(0xC55E0))(szLine, szBuffer);
}

SAMPAPI_END
