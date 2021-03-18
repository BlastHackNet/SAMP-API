/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CMenuPool.h"

SAMPAPI_BEGIN_V037R3_1

CMenuPool::CMenuPool() {
    ((void(__thiscall*)(CMenuPool*))GetAddress(0x7AE0))(this);
}

CMenuPool::~CMenuPool() {
    ((void(__thiscall*)(CMenuPool*))GetAddress(0x7E50))(this);
}

CMenu* CMenuPool::Create(NUMBER nId, const char* szTitle, float fX, float fY, char nColumns, float fFirstColumnWidth, float fSecondColumnWidth, const CMenu::Interaction* pInteraction) {
    return ((CMenu * (__thiscall*)(CMenuPool*, NUMBER, const char*, float, float, char, float, float, const CMenu::Interaction*)) GetAddress(0x7B30))(this, nId, szTitle, fX, fY, nColumns, fFirstColumnWidth, fSecondColumnWidth, pInteraction);
}

BOOL CMenuPool::Delete(NUMBER nId) {
    return ((BOOL(__thiscall*)(CMenuPool*, NUMBER))GetAddress(0x7C00))(this, nId);
}

void CMenuPool::Show(NUMBER nId) {
    ((void(__thiscall*)(CMenuPool*, NUMBER))GetAddress(0x7C50))(this, nId);
}

void CMenuPool::Hide(NUMBER nId) {
    ((void(__thiscall*)(CMenuPool*, NUMBER))GetAddress(0x7CB0))(this, nId);
}

char* CMenuPool::GetTextPointer(const char* szName) {
    return ((char*(__thiscall*)(CMenuPool*, const char*))GetAddress(0x7CF0))(this, szName);
}

void CMenuPool::Process() {
    ((void(__thiscall*)(CMenuPool*))GetAddress(0x7E90))(this);
}

SAMPAPI_END
