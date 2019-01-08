/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "Scripting.h"

CRunningScript *&SAMP::Scripting::pThread = *(CRunningScript **)SAMP_ADDROF(0x216048);
unsigned char *SAMP::Scripting::aBuffer = (unsigned char *)SAMP_ADDROF(0x215F48);
unsigned long &SAMP::Scripting::nLastUsedOpcode = *(unsigned long *)SAMP_ADDROF(0x21604C);
unsigned long *&SAMP::Scripting::apThreadLocals = *(unsigned long **)SAMP_ADDROF(0x215F00);
SAMP::Scripting::PROCESSOR &SAMP::Scripting::ProcessOneCommand = *(SAMP::Scripting::PROCESSOR *)SAMP_ADDROF(0x1023C4);

void SAMP::Scripting::Initialize() {
	((void(__cdecl *)())SAMP_ADDROF(0xABF10))();
}

int SAMP::Scripting::ExecBuffer() {
	return ((int(__cdecl *)())SAMP_ADDROF(0xABC90))();
}
