/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CTextdrawSelection.h"

SAMP::CTextdrawSelection *&SAMP::pTextdrawSelection = *(SAMP::CTextdrawSelection **)SAMP_ADDROF(0x21A0CC);

BOOL SAMP::CTextdrawSelection::MsgProc(int uMsg, int wParam, int lParam) {
	return ((BOOL(__thiscall *)(CTextdrawSelection *, int, int, int))SAMP_ADDROF(0x6CF90))(this, uMsg, wParam, lParam);
}

void SAMP::CTextdrawSelection::Disable() {
	((void(__thiscall *)(CTextdrawSelection *))SAMP_ADDROF(0x6CF40))(this);
}

void SAMP::CTextdrawSelection::SendNotification() {
	((void(__thiscall *)(CTextdrawSelection *))SAMP_ADDROF(0x6CEA0))(this);
}

void SAMP::CTextdrawSelection::Enable(D3DCOLOR dwHoveredColor) {
	((void(__thiscall *)(CTextdrawSelection *, D3DCOLOR))SAMP_ADDROF(0x6CE60))(this, dwHoveredColor);
}