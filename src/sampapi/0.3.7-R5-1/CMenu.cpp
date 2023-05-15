/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CMenu.h"

SAMPAPI_BEGIN_V037R5_1

CMenu::CMenu(float fX, float fY, char nColumns, float fFirstColumnWidth, float fSecondColumnWidth, const Interaction* pInteraction) {
    ((void(__thiscall*)(CMenu*, float, float, char, float, float, const Interaction*))GetAddress(0xA7420))(this, fX, fY, nColumns, fFirstColumnWidth, fSecondColumnWidth, pInteraction);
}

void CMenu::SetTitle(const char* szText) {
    ((void(__thiscall*)(CMenu*, const char*))GetAddress(0xA7530))(this, szText);
}

void CMenu::AddItem(NUMBER nColumn, NUMBER nRow, const char* szText) {
    ((void(__thiscall*)(CMenu*, NUMBER, NUMBER, const char*))GetAddress(0xA7580))(this, nColumn, nRow, szText);
}

void CMenu::SetColumnTitle(NUMBER nColumn, const char* szText) {
    ((void(__thiscall*)(CMenu*, NUMBER, const char*))GetAddress(0xA7600))(this, nColumn, szText);
}

void CMenu::Hide() {
    ((void(__thiscall*)(CMenu*))GetAddress(0xA7670))(this);
}

char* CMenu::GetItem(NUMBER nColumn, NUMBER nRow) {
    return ((char*(__thiscall*)(CMenu*, NUMBER, NUMBER))GetAddress(0xA7690))(this, nColumn, nRow);
}

char* CMenu::GetTitle() {
    return ((char*(__thiscall*)(CMenu*))GetAddress(0xA76B0))(this);
}

char* CMenu::MS(NUMBER nColumn, NUMBER nRow) {
    return ((char*(__thiscall*)(CMenu*, NUMBER, NUMBER))GetAddress(0xA76E0))(this, nColumn, nRow);
}

char CMenu::GetActiveRow() {
    return ((char(__thiscall*)(CMenu*))GetAddress(0xA7710))(this);
}

void CMenu::Show() {
    ((void(__thiscall*)(CMenu*))GetAddress(0xA7740))(this);
}

SAMPAPI_END
