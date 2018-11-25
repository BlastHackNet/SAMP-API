/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "KeyStuff.h"

CPad *&SAMP::KeyStuff::pInternalKeys = *(CPad **)SAMP_ADDROF(0x1016E8);
CPad *SAMP::KeyStuff::pLocalPlayerKeys = (CPad *)SAMP_ADDROF(0x13D2C0);
CPad *SAMP::KeyStuff::aRemotePlayerKeys = (CPad *)SAMP_ADDROF(0x13D3F8);
bool *&SAMP::KeyStuff::bDriveByLeft = *(bool **)SAMP_ADDROF(0x1016EC);
bool *&SAMP::KeyStuff::bDriveByRight = *(bool **)SAMP_ADDROF(0x1016F0);
bool &SAMP::KeyStuff::bDriveByLeftPrevValue = *(bool *)SAMP_ADDROF(0x14D0A0);
bool &SAMP::KeyStuff::bDriveByRightPrevValue = *(bool *)SAMP_ADDROF(0x14D0A1);

void SAMP::KeyStuff::Initialize() {
	((void(__cdecl *)())SAMP_ADDROF(0xA2240))();
}

void SAMP::KeyStuff::ApplyLocalPlayerKeys() {
	((void(__cdecl *)())SAMP_ADDROF(0xA2260))();
}

void SAMP::KeyStuff::UpdateLocalPlayerKeys() {
	((void(__cdecl *)())SAMP_ADDROF(0xA22A0))();
}

void SAMP::KeyStuff::SetPlayerKeys(int nPlayerNumber, const CPad *pPad) {
	((void(__cdecl *)(int, const CPad *))SAMP_ADDROF(0xA22E0))(nPlayerNumber, pPad);
}

void SAMP::KeyStuff::SynchronizeWithRemotePlayer(int nPlayerNumber) {
	((void(__cdecl *)(int))SAMP_ADDROF(0xA2300))(nPlayerNumber);
}

CPad *SAMP::KeyStuff::GetInternalKeys() {
	return ((CPad *(__cdecl *)())SAMP_ADDROF(0xA2350))();
}

CPad *SAMP::KeyStuff::GetPlayerKeys(int nPlayerNumber) {
	return ((CPad *(__cdecl *)(int))SAMP_ADDROF(0xA2370))(nPlayerNumber);
}

void SAMP::KeyStuff::ResetPlayerKeys(int nPlayerNumber) {
	((void(__cdecl *)(int))SAMP_ADDROF(0xA2380))(nPlayerNumber);
}

void SAMP::KeyStuff::ResetInternalKeys() {
	((void(__cdecl *)())SAMP_ADDROF(0xA23A0))();
}