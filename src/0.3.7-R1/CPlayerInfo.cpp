/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CPlayerInfo.h"

SAMP::CPlayerInfo::CPlayerInfo(const char *szNickname, bool bIsNPC) {
	((void(__thiscall *)(CPlayerInfo *, const char *, bool))SAMP_ADDROF(0x10CB0))(this, szNickname, bIsNPC);
}

SAMP::CPlayerInfo::~CPlayerInfo() {
	((void(__thiscall *)(CPlayerInfo *))SAMP_ADDROF(0x10A50))(this);
}