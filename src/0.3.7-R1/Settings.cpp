/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "Settings.h"

SAMP::Settings &SAMP::settings = *(SAMP::Settings *)SAMP_ADDROF(0x219760);

void SAMP::Settings::Initialize() {
	((void(__cdecl *)())SAMP_ADDROF(0xB2FF0))();
}

void SAMP::Settings::GetFromCommandLine(const char *szLine, char *szString) {
	((void(__cdecl *)(const char *, char *))SAMP_ADDROF(0xB28F0))(szLine, szString);
}

void SAMP::Settings::GetFromQuotes(const char *szLine, char *szString) {
	((void(__cdecl *)(const char *, char *))SAMP_ADDROF(0xB2940))(szLine, szString);
}