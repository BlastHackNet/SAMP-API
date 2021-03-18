/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/DebugScript.h"

SAMPAPI_BEGIN_V037R1

SAMPAPI_VAR CObjectPool*& DebugScript::RefPrivateObjectPool() {
    return *(CObjectPool**)GetAddress(0x13BB74);
}

SAMPAPI_VAR unsigned short& DebugScript::RefObjectCount() {
    return *(unsigned short*)GetAddress(0x13BB78);
}

SAMPAPI_VAR CVector& DebugScript::RefNewCameraPos() {
    return *(CVector*)GetAddress(0x13BB68);
}

void DebugScript::Initialize(const char* szFile) {
    ((void(__cdecl*)(const char*))GetAddress(0x99FF0))(szFile);
}

void DebugScript::ProcessLine(const char* szLine) {
    ((void(__cdecl*)(const char*))GetAddress(0x99EE0))(szLine);
}

char* DebugScript::GetCommandParams(char* szLine) {
    return ((char*(__cdecl*)(char*))GetAddress(0x99AF0))(szLine);
}

void DebugScript::CreateVehicle(const char* szParams) {
    ((void(__cdecl*)(const char*))GetAddress(0x99C50))(szParams);
}

SAMPAPI_END
