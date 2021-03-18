/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CMenuPool.h"

SAMPAPI_BEGIN_V037R1

CMenuPool::CMenuPool() {
    ((void(__thiscall*)(CMenuPool*))GetAddress(0x7AB0))(this);
}

CMenuPool::~CMenuPool() {
    ((void(__thiscall*)(CMenuPool*))GetAddress(0x7E20))(this);
}

CMenu* CMenuPool::Create(NUMBER nId, const char* szTitle, float fX, float fY, char nColumns, float fFirstColumnWidth, float fSecondColumnWidth, const CMenu::Interaction* pInteraction) {
    return ((CMenu * (__thiscall*)(CMenuPool*, NUMBER, const char*, float, float, char, float, float, const CMenu::Interaction*)) GetAddress(0x7B00))(this, nId, szTitle, fX, fY, nColumns, fFirstColumnWidth, fSecondColumnWidth, pInteraction);
}

BOOL CMenuPool::Delete(NUMBER nId) {
    return ((BOOL(__thiscall*)(CMenuPool*, NUMBER))GetAddress(0x7BD0))(this, nId);
}

void CMenuPool::Show(NUMBER nId) {
    ((void(__thiscall*)(CMenuPool*, NUMBER))GetAddress(0x7C20))(this, nId);
}

void CMenuPool::Hide(NUMBER nId) {
    ((void(__thiscall*)(CMenuPool*, NUMBER))GetAddress(0x7C80))(this, nId);
}

char* CMenuPool::GetTextPointer(const char* szName) {
    return ((char*(__thiscall*)(CMenuPool*, const char*))GetAddress(0x7CC0))(this, szName);
}

void CMenuPool::Process() {
    ((void(__thiscall*)(CMenuPool*))GetAddress(0x7E60))(this);
}

SAMPAPI_END
