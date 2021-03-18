/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CPlayerInfo.h"

SAMPAPI_BEGIN_V037R3_1

CPlayerInfo::CPlayerInfo(const char* szName, BOOL bIsNPC) {
    ((void(__thiscall*)(CPlayerInfo*, const char*, BOOL))GetAddress(0x13DE0))(this, szName, bIsNPC);
}

CPlayerInfo::~CPlayerInfo() {
    ((void(__thiscall*)(CPlayerInfo*))GetAddress(0x13B60))(this);
}

SAMPAPI_END
