/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/Scripting.h"

SAMPAPI_BEGIN_V037R5_1

SAMPAPI_VAR CRunningScript*& Scripting::RefThread() {
    return *(CRunningScript**)GetAddress(0x26B558);
}

SAMPAPI_VAR unsigned char* Scripting::ArrayBuffer() {
    return (unsigned char*)GetAddress(0x26B458);
}

SAMPAPI_VAR unsigned long& Scripting::RefLastUsedOpcode() {
    return *(unsigned long*)GetAddress(0x26B55C);
}

SAMPAPI_VAR unsigned long** Scripting::ArrayThreadLocals() {
    return (unsigned long**)GetAddress(0x26B410);
}

SAMPAPI_VAR Scripting::ProcessOneCommandFn& Scripting::RefProcessOneCommand() {
    return *(Scripting::ProcessOneCommandFn*)GetAddress(0x1173B8);
}

SAMPAPI_VAR BOOL& Scripting::RefLocalDebug() {
    return *(BOOL*)GetAddress(0x26B560);
}

void Scripting::Initialize() {
    ((void(__cdecl*)())GetAddress(0xB2550))();
}

int Scripting::ExecBuffer() {
    return ((int(__cdecl*)())GetAddress(0xB22D0))();
}

int(__cdecl* Scripting::FunctionProcessCommand())(const Scripting::OpcodeInfo*, ...) {
    return (int(__cdecl*)(const OpcodeInfo*, ...))GetAddress(0xB2310);
}

SAMPAPI_END
