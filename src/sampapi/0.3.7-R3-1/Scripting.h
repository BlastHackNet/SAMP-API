/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"

class CRunningScript;

SAMPAPI_BEGIN_V037R3_1

namespace Scripting {
    struct SAMPAPI_EXPORT OpcodeInfo {
        unsigned short m_wOpCode;
        char           m_szParams[16]; // i - int, f - float, v - var, s - string, z - zero terminating
    };

    typedef int(__thiscall* ProcessOneCommandFn)(CRunningScript*);

    SAMPAPI_EXPORT SAMPAPI_VAR CRunningScript*& RefThread();
    SAMPAPI_EXPORT SAMPAPI_VAR unsigned char* ArrayBuffer(); // [256]
    SAMPAPI_EXPORT SAMPAPI_VAR unsigned long& RefLastUsedOpcode();
    SAMPAPI_EXPORT SAMPAPI_VAR unsigned long** ArrayThreadLocals(); // [18]
    SAMPAPI_EXPORT SAMPAPI_VAR BOOL& RefLocalDebug();
    SAMPAPI_EXPORT SAMPAPI_VAR ProcessOneCommandFn& RefProcessOneCommand();

    SAMPAPI_EXPORT void Initialize();
    SAMPAPI_EXPORT int  ExecBuffer();
    static SAMPAPI_EXPORT int(__cdecl* FunctionProcessCommand())(const OpcodeInfo*, ...);
    template<typename... Args>
    int ProcessCommand(const OpcodeInfo* pOpcodeInfo, Args... args) {
        return FunctionProcessCommand()(pOpcodeInfo, args...);
    }
} // namespace Scripting

SAMPAPI_END
