/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CMenuPool.h"

SAMPAPI_BEGIN_V03DL_1

CMenuPool::CMenuPool() {
    ((void(__thiscall*)(CMenuPool*))GetAddress(0x7B40))(this);
}

CMenuPool::~CMenuPool() {
    ((void(__thiscall*)(CMenuPool*))GetAddress(0x7EB0))(this);
}

CMenu* CMenuPool::Create(NUMBER nId, float fX, float fY, char nColumns, float fFirstColumnWidth, float fSecondColumnWidth, const CMenu::Interaction* pInteraction) {
    return ((CMenu * (__thiscall*)(CMenuPool*, NUMBER, float, float, char, float, float, const CMenu::Interaction*)) GetAddress(0x7B90))(this, nId, fX, fY, nColumns, fFirstColumnWidth, fSecondColumnWidth, pInteraction);
}

BOOL CMenuPool::Delete(NUMBER nId) {
    return ((BOOL(__thiscall*)(CMenuPool*, NUMBER))GetAddress(0x7C60))(this, nId);
}

void CMenuPool::Show(NUMBER nId) {
    ((void(__thiscall*)(CMenuPool*, NUMBER))GetAddress(0x7CB0))(this, nId);
}

void CMenuPool::Hide(NUMBER nId) {
    ((void(__thiscall*)(CMenuPool*, NUMBER))GetAddress(0x7D10))(this, nId);
}

char* CMenuPool::GetTextPointer(const char* szName) {
    return ((char*(__thiscall*)(CMenuPool*, const char*))GetAddress(0x7D50))(this, szName);
}

void CMenuPool::Process() {
    ((void(__thiscall*)(CMenuPool*))GetAddress(0x7EF0))(this);
}

SAMPAPI_END
