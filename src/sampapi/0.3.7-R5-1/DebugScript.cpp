/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/DebugScript.h"

SAMPAPI_BEGIN_V037R5_1

SAMPAPI_VAR CObjectPool*& DebugScript::RefPrivateObjectPool() {
    return *(CObjectPool**)GetAddress(0x14FFAC);
}

SAMPAPI_VAR unsigned short& DebugScript::RefObjectCount() {
    return *(unsigned short*)GetAddress(0x14FFB0);
}

SAMPAPI_VAR CVector& DebugScript::RefNewCameraPos() {
    return *(CVector*)GetAddress(0x14FFA0);
}

void DebugScript::Initialize(const char* szFile) {
    ((void(__cdecl*)(const char*))GetAddress(0x9E9B0))(szFile);
}

void DebugScript::ProcessLine(const char* szLine) {
    ((void(__cdecl*)(const char*))GetAddress(0x9E8A0))(szLine);
}

char* DebugScript::GetCommandParams(char* szLine) {
    return ((char*(__cdecl*)(char*))GetAddress(0x9E4B0))(szLine);
}

void DebugScript::CreateVehicle(const char* szParams) {
    ((void(__cdecl*)(const char*))GetAddress(0x9E610))(szParams);
}

void DebugScript::CreateObject(const char* szParams) {
    ((void(__cdecl*)(const char*))GetAddress(0x9E500))(szParams);
}

SAMPAPI_END
