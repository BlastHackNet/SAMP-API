/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "KeyStuff.h"

CPad *SAMP::KeyStuff::pLocalPlayerKeys = (CPad *)SAMP_ADDROF(0x152518);
CPad *SAMP::KeyStuff::aPlayerKeys = (CPad *)SAMP_ADDROF(0x152650);
CPad *&SAMP::KeyStuff::pInternalKeys = *(CPad **)SAMP_ADDROF(0x114AD0);
bool *&SAMP::KeyStuff::pDriveByLeft = *(bool **)SAMP_ADDROF(0x114AD4);
bool *&SAMP::KeyStuff::pDriveByRight = *(bool **)SAMP_ADDROF(0x114AD8);
bool &SAMP::KeyStuff::bSavedDriveByLeft = *(bool *)SAMP_ADDROF(0x1622F8);
bool &SAMP::KeyStuff::bSavedDriveByRight = *(bool *)SAMP_ADDROF(0x1622F9);

void SAMP::KeyStuff::Initialize() {
	((void(__cdecl *)())SAMP_ADDROF(0xA6B60))();
}

void SAMP::KeyStuff::UpdateKeys() {
	((void(__cdecl *)())SAMP_ADDROF(0xA6B80))();
}

void SAMP::KeyStuff::ApplyKeys() {
	((void(__cdecl *)())SAMP_ADDROF(0xA6BC0))();
}

void SAMP::KeyStuff::SetKeys(int nPlayer, const CPad *pKeys) {
	((void(__cdecl *)(int, const CPad *))SAMP_ADDROF(0xA6C00))(nPlayer, pKeys);
}

void SAMP::KeyStuff::ApplyKeys(int nPlayer) {
	((void(__cdecl *)(int))SAMP_ADDROF(0xA6C20))(nPlayer);
}

CPad *SAMP::KeyStuff::GetInternalKeys() {
	return ((::CPad *(__cdecl *)())SAMP_ADDROF(0xA6C70))();
}

CPad *SAMP::KeyStuff::GetKeys() {
	return ((::CPad *(__cdecl *)())SAMP_ADDROF(0xA6C80))();
}

CPad *SAMP::KeyStuff::GetKeys(int nPlayer) {
	return ((::CPad *(__cdecl *)(int))SAMP_ADDROF(0xA6C90))(nPlayer);
}

void SAMP::KeyStuff::ResetKeys(int nPlayer) {
	((void(__cdecl *)(int))SAMP_ADDROF(0xA6CA0))(nPlayer);
}

void SAMP::KeyStuff::ResetInternalKeys() {
	((void(__cdecl *)())SAMP_ADDROF(0xA6CC0))();
}