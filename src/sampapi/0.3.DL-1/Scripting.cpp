/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/Scripting.h"

SAMPAPI_BEGIN_V03DL_1

SAMPAPI_VAR CRunningScript*& Scripting::RefThread() {
    return *(CRunningScript**)GetAddress(0x2A93F0);
}

SAMPAPI_VAR unsigned char* Scripting::ArrayBuffer() {
    return (unsigned char*)GetAddress(0x2A92F0);
}

SAMPAPI_VAR unsigned long& Scripting::RefLastUsedOpcode() {
    return *(unsigned long*)GetAddress(0x2A93F4);
}

SAMPAPI_VAR unsigned long** Scripting::ArrayThreadLocals() {
    return (unsigned long**)GetAddress(0x2A92A8);
}

SAMPAPI_VAR Scripting::ProcessOneCommandFn& Scripting::RefProcessOneCommand() {
    return *(Scripting::ProcessOneCommandFn*)GetAddress(0x155390);
}

SAMPAPI_VAR BOOL& Scripting::RefLocalDebug() {
    return *(BOOL*)GetAddress(0x2A93F8);
}

void Scripting::Initialize() {
    ((void(__cdecl*)())GetAddress(0xB2150))();
}

int Scripting::ExecBuffer() {
    return ((int(__cdecl*)())GetAddress(0xB1ED0))();
}

int(__cdecl* Scripting::FunctionProcessCommand())(const Scripting::OpcodeInfo*, ...) {
    return (int(__cdecl*)(const OpcodeInfo*, ...))GetAddress(0xB1F10);
}

SAMPAPI_END
