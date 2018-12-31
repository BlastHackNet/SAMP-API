/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CObjectSelection.h"

SAMP::CObjectSelection *&SAMP::pObjectSelection = *(SAMP::CObjectSelection **)SAMP_ADDROF(0x26E8AC);

SAMP::CObjectSelection::CObjectSelection() {
	((void(__thiscall *)(CObjectSelection *))SAMP_ADDROF(0x6D290))(this);
}

SAMP::ID SAMP::CObjectSelection::DefineObject() {
	return ((ID(__thiscall *)(CObjectSelection *))SAMP_ADDROF(0x6D2A0))(this);
}

void SAMP::CObjectSelection::DrawLabels() {
	((void(__thiscall *)(CObjectSelection *))SAMP_ADDROF(0x6D2F0))(this);
}

void SAMP::CObjectSelection::Enable(BOOL bEnable) {
	((void(__thiscall *)(CObjectSelection *, BOOL))SAMP_ADDROF(0x6D410))(this, bEnable);
}

void SAMP::CObjectSelection::Draw() {
	((void(__thiscall *)(CObjectSelection *))SAMP_ADDROF(0x6D490))(this);
}

void SAMP::CObjectSelection::SendNotification() {
	((void(__thiscall *)(CObjectSelection *))SAMP_ADDROF(0x6D560))(this);
}

BOOL SAMP::CObjectSelection::MsgProc(int uMsg, int wParam, int lParam) {
	return ((BOOL(__thiscall *)(CObjectSelection *, int, int, int))SAMP_ADDROF(0x6D6D0))(this, uMsg, wParam, lParam);
}