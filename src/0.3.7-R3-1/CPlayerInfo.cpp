/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CPlayerInfo.h"

SAMP::CPlayerInfo::CPlayerInfo(const char *szName, BOOL bIsNPC) {
	((void(__thiscall *)(CPlayerInfo *, const char *, BOOL))SAMP_ADDROF(0x13DE0))(this, szName, bIsNPC);
}

SAMP::CPlayerInfo::~CPlayerInfo() {
	((void(__thiscall *)(CPlayerInfo *))SAMP_ADDROF(0x13B60))(this);
}