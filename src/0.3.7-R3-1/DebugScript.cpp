/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "DebugScript.h"

SAMP::CObjectPool *&SAMP::DebugScript::pPrivateObjectPool = *(SAMP::CObjectPool **)SAMP_ADDROF(0x14FCFC);
unsigned short &SAMP::DebugScript::nObjectCount = *(unsigned short *)SAMP_ADDROF(0x14FD00);
SAMP::CVector &SAMP::DebugScript::vNewCameraPos = *(SAMP::CVector *)SAMP_ADDROF(0x14FCF0);

void SAMP::DebugScript::Initialize(const char *szFile) {
	((void(__cdecl *)(const char *))SAMP_ADDROF(0x9E2A0))(szFile);
}

void SAMP::DebugScript::ProcessLine(const char *szLine) {
	((void(__cdecl *)(const char *))SAMP_ADDROF(0x9E190))(szLine);
}

char *SAMP::DebugScript::GetCommandParams(char *szLine) {
	return ((char *(__cdecl *)(char *))SAMP_ADDROF(0x9DDA0))(szLine);
}

void SAMP::DebugScript::CreateVehicle(const char *szParams) {
	((void(__cdecl *)(const char *))SAMP_ADDROF(0x9DF00))(szParams);
}