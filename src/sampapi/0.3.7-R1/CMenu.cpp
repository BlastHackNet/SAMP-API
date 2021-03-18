/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CMenu.h"

SAMPAPI_BEGIN_V037R1

CMenu::CMenu(const char* szTitle, float fX, float fY, float fFirstColumnWidth, float fSecondColumnWidth, const Interaction* pInteraction) {
    ((void(__thiscall*)(CMenu*, const char*, float, float, float, float, const Interaction*))GetAddress(0xA23C0))(this, szTitle, fX, fY, fFirstColumnWidth, fSecondColumnWidth, pInteraction);
}

void CMenu::Show() {
    ((void(__thiscall*)(CMenu*))GetAddress(0xA2590))(this);
}

void CMenu::Hide() {
    ((void(__thiscall*)(CMenu*))GetAddress(0xA24C0))(this);
}

void CMenu::AddItem(NUMBER nColumn, NUMBER nRow, const char* szText) {
    ((void(__thiscall*)(CMenu*, NUMBER, NUMBER, const char*))GetAddress(0xA2460))(this, nColumn, nRow, szText);
}

void CMenu::SetColumnTitle(NUMBER nColumn, const char* szText) {
    ((void(__thiscall*)(CMenu*, NUMBER, const char*))GetAddress(0xA2490))(this, nColumn, szText);
}

char* CMenu::GetItem(NUMBER nColumn, NUMBER nRow) {
    return ((char*(__thiscall*)(CMenu*, NUMBER, NUMBER))GetAddress(0xA24E0))(this, nColumn, nRow);
}

char* CMenu::GetTitle() {
    return ((char*(__thiscall*)(CMenu*))GetAddress(0xA2500))(this);
}

char* CMenu::MS(NUMBER nColumn, NUMBER nRow) {
    return ((char*(__thiscall*)(CMenu*, NUMBER, NUMBER))GetAddress(0xA2530))(this, nColumn, nRow);
}

char CMenu::GetActiveRow() {
    return ((char(__thiscall*)(CMenu*))GetAddress(0xA2560))(this);
}

SAMPAPI_END
