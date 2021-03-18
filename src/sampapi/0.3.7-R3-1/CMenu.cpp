/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CMenu.h"

SAMPAPI_BEGIN_V037R3_1

CMenu::CMenu(const char* szTitle, float fX, float fY, char nColumns, float fFirstColumnWidth, float fSecondColumnWidth, const Interaction* pInteraction) {
    ((void(__thiscall*)(CMenu*, const char*, float, float, char, float, float, const Interaction*))GetAddress(0xA6CE0))(this, szTitle, fX, fY, nColumns, fFirstColumnWidth, fSecondColumnWidth, pInteraction);
}

void CMenu::AddItem(NUMBER nColumn, NUMBER nRow, const char* szText) {
    ((void(__thiscall*)(CMenu*, NUMBER, NUMBER, const char*))GetAddress(0xA6D80))(this, nColumn, nRow, szText);
}

void CMenu::SetColumnTitle(NUMBER nColumn, const char* szText) {
    ((void(__thiscall*)(CMenu*, NUMBER, const char*))GetAddress(0xA6DB0))(this, nColumn, szText);
}

void CMenu::Hide() {
    ((void(__thiscall*)(CMenu*))GetAddress(0xA6DE0))(this);
}

char* CMenu::GetItem(NUMBER nColumn, NUMBER nRow) {
    return ((char*(__thiscall*)(CMenu*, NUMBER, NUMBER))GetAddress(0xA6E00))(this, nColumn, nRow);
}

char* CMenu::GetTitle() {
    return ((char*(__thiscall*)(CMenu*))GetAddress(0xA6E20))(this);
}

char* CMenu::MS(NUMBER nColumn, NUMBER nRow) {
    return ((char*(__thiscall*)(CMenu*, NUMBER, NUMBER))GetAddress(0xA6E50))(this, nColumn, nRow);
}

char CMenu::GetActiveRow() {
    return ((char(__thiscall*)(CMenu*))GetAddress(0xA6E80))(this);
}

void CMenu::Show() {
    ((void(__thiscall*)(CMenu*))GetAddress(0xA6EB0))(this);
}

SAMPAPI_END
