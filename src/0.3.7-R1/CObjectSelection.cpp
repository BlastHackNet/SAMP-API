/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CObjectSelection.h"

SAMP::CObjectSelection *&SAMP::pObjectEditor = *(SAMP::CObjectSelection **)SAMP_ADDROF(0x21A0C8);

SAMP::CObjectSelection::CObjectSelection() {
	((void(__thiscall *)(CObjectSelection *))SAMP_ADDROF(0x69320))(this);
}

SAMP::ID SAMP::CObjectSelection::DefineObject() {
	return ((ID(__thiscall *)(CObjectSelection *))SAMP_ADDROF(0x69330))(this);
}

void SAMP::CObjectSelection::DrawLabels() {
	((void(__thiscall *)(CObjectSelection *))SAMP_ADDROF(0x69380))(this);
}

void SAMP::CObjectSelection::ToggleEnabled(BOOL bEnable) {
	((void(__thiscall *)(CObjectSelection *, BOOL))SAMP_ADDROF(0x694A0))(this, bEnable);
}

void SAMP::CObjectSelection::Draw() {
	((void(__thiscall *)(CObjectSelection *))SAMP_ADDROF(0x69520))(this);
}

void SAMP::CObjectSelection::SendEnterNotification() {
	((void(__thiscall *)(CObjectSelection *))SAMP_ADDROF(0x695F0))(this);
}

BOOL SAMP::CObjectSelection::MsgProc(int uMsg, int wParam, int lParam) {
	return ((BOOL(__thiscall *)(CObjectSelection *, int, int, int))SAMP_ADDROF(0x69760))(this, uMsg, wParam, lParam);
}