/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "Scripting.h"

SAMPAPI_BEGIN

SAMPAPI_VAR CRunningScript*& Scripting::RefThread() {
    return *(CRunningScript**)GetAddress(0x216048);
}

SAMPAPI_VAR unsigned char* Scripting::ArrayBuffer() {
    return (unsigned char*)GetAddress(0x215F48);
}

SAMPAPI_VAR unsigned long& Scripting::RefLastUsedOpcode() {
    return *(unsigned long*)GetAddress(0x21604C);
}

SAMPAPI_VAR unsigned long** Scripting::ArrayThreadLocals() {
    return (unsigned long**)GetAddress(0x215F00);
}

SAMPAPI_VAR Scripting::ProcessOneCommandFn& Scripting::RefProcessOneCommand() {
    return *(Scripting::ProcessOneCommandFn*)GetAddress(0x1023C4);
}

int(__cdecl* Scripting::FunctionProcessCommand())(const Scripting::OpcodeInfo*, ...) {
    return (int(__cdecl*)(const OpcodeInfo*, ...))GetAddress(0xABCD0);
}

void Scripting::Initialize() {
    ((void(__cdecl*)())GetAddress(0xABF10))();
}

int Scripting::ExecBuffer() {
    return ((int(__cdecl*)())GetAddress(0xABC90))();
}

SAMPAPI_END
