/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/DebugScript.h"

SAMPAPI_BEGIN_V03DL_1

SAMPAPI_VAR CObjectPool*& DebugScript::RefPrivateObjectPool() {
    return *(CObjectPool**)GetAddress(0x18DE44);
}

SAMPAPI_VAR unsigned short& DebugScript::RefObjectCount() {
    return *(unsigned short*)GetAddress(0x18DE48);
}

SAMPAPI_VAR CVector& DebugScript::RefNewCameraPos() {
    return *(CVector*)GetAddress(0x18DE38);
}

void DebugScript::Initialize(const char* szFile) {
    ((void(__cdecl*)(const char*))GetAddress(0x9E7F0))(szFile);
}

void DebugScript::ProcessLine(const char* szLine) {
    ((void(__cdecl*)(const char*))GetAddress(0x9E6E0))(szLine);
}

char* DebugScript::GetCommandParams(char* szLine) {
    return ((char*(__cdecl*)(char*))GetAddress(0x9E2F0))(szLine);
}

void DebugScript::CreateVehicle(const char* szParams) {
    ((void(__cdecl*)(const char*))GetAddress(0x9E450))(szParams);
}

void DebugScript::CreateObject(const char* szParams) {
    ((void(__cdecl*)(const char*))GetAddress(0x9E340))(szParams);
}

SAMPAPI_END
