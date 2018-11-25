/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"

class CRunningScript;

SAMP_BEGIN_NP

namespace Scripting {
	struct OpcodeInfo {
		unsigned short m_wOpCode;
		char m_szParams[16]; // i - int, f - float, v - var, s - string
	};

	typedef int(__thiscall *PROCESSOR)(CRunningScript *);

	extern CRunningScript *&pThread;
	extern unsigned char *aScriptBuffer; // [256]
	extern unsigned long &dwLastUsedOpCode;
	extern unsigned long *&apThreadLocals; // [18]
	extern unsigned int &bLocalScmDebug;
	extern PROCESSOR &ProcessOneCommand;

	void Init();
	int ExecScriptBuffer();
	template<typename... Args> 
	int ProcessCommand(const OpcodeInfo *pOpcodeInfo, Args... args) {
		return ((int(__cdecl *)(const OpcodeInfo *, Args...))SAMP_ADDROF(0xABCD0))(pOpcodeInfo, args...);
	}
}

SAMP_END_NP