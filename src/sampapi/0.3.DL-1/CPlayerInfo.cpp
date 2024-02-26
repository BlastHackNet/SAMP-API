/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CPlayerInfo.h"

SAMPAPI_BEGIN_V03DL_1

CPlayerInfo::CPlayerInfo(const char* szName, BOOL bIsNPC) {
    ((void(__thiscall*)(CPlayerInfo*, const char*, BOOL))GetAddress(0x14060))(this, szName, bIsNPC);
}

CPlayerInfo::~CPlayerInfo() {
    ((void(__thiscall*)(CPlayerInfo*))GetAddress(0x13E10))(this);
}

SAMPAPI_END
