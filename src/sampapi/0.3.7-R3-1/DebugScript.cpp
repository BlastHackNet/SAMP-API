/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/DebugScript.h"

SAMPAPI_BEGIN_V037R3_1

SAMPAPI_VAR CObjectPool*& DebugScript::RefPrivateObjectPool() {
    return *(CObjectPool**)GetAddress(0x14FCFC);
}

SAMPAPI_VAR unsigned short& DebugScript::RefObjectCount() {
    return *(unsigned short*)GetAddress(0x14FD00);
}

SAMPAPI_VAR CVector& DebugScript::RefNewCameraPos() {
    return *(CVector*)GetAddress(0x14FCF0);
}

void DebugScript::Initialize(const char* szFile) {
    ((void(__cdecl*)(const char*))GetAddress(0x9E2A0))(szFile);
}

void DebugScript::ProcessLine(const char* szLine) {
    ((void(__cdecl*)(const char*))GetAddress(0x9E190))(szLine);
}

char* DebugScript::GetCommandParams(char* szLine) {
    return ((char*(__cdecl*)(char*))GetAddress(0x9DDA0))(szLine);
}

void DebugScript::CreateVehicle(const char* szParams) {
    ((void(__cdecl*)(const char*))GetAddress(0x9DF00))(szParams);
}

void DebugScript::CreateObject(const char* szParams) {
    ((void(__cdecl*)(const char*))GetAddress(0x9DDF0))(szParams);
}

SAMPAPI_END
