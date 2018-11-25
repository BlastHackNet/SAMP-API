/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "AimStuff.h"

SAMP::AimStuff::Aim &SAMP::AimStuff::localPlayerAim = *(SAMP::AimStuff::Aim *)SAMP_ADDROF(0x12FFC8);
SAMP::AimStuff::Aim *SAMP::AimStuff::aPlayerAim = (SAMP::AimStuff::Aim *)SAMP_ADDROF(0x12FFF8);
char *SAMP::AimStuff::aCameraMode = (char *)SAMP_ADDROF(0x12FBA8);
float *SAMP::AimStuff::aCameraExtZoom = (float *)SAMP_ADDROF(0x12FC80);
SAMP::AimStuff::Aim *&SAMP::AimStuff::pInternalAim = *(SAMP::AimStuff::Aim **)SAMP_ADDROF(0xF1590);
float *&SAMP::AimStuff::pCameraExtZoom = *(float **)SAMP_ADDROF(0xF159C);
char *&SAMP::AimStuff::pCameraMode = *(char **)SAMP_ADDROF(0x10153C);
float *&SAMP::AimStuff::pAspectRatio = *(float **)SAMP_ADDROF(0xF1598);

float SAMP::AimStuff::GetLocalPlayerCameraExtZoom() {
	return ((float(__stdcall *)())SAMP_ADDROF(0x981D0))();
}

void SAMP::AimStuff::ApplyPlayerCameraExtZoom(int nPlayerNumber) {
	((void(__stdcall *)(int))SAMP_ADDROF(0x981F0))(nPlayerNumber);
}

void SAMP::AimStuff::SetPlayerCameraMode(char nMode, int nPlayerNumber) {
	((void(__stdcall *)(char, int))SAMP_ADDROF(0x98230))(nMode, nPlayerNumber);
}

char SAMP::AimStuff::GetPlayerCameraMode(int nPlayerNumber) {
	return ((char(__stdcall *)(int))SAMP_ADDROF(0x98250))(nPlayerNumber);
}

char SAMP::AimStuff::GetLocalPlayerCameraMode() {
	return ((char(__stdcall *)())SAMP_ADDROF(0x98260))();
}

void SAMP::AimStuff::Initialise() {
	((void(__stdcall *)())SAMP_ADDROF(0x98270))();
}

void SAMP::AimStuff::UpdateLocalPlayerAim() {
	((void(__stdcall *)())SAMP_ADDROF(0x982E0))();
}

void SAMP::AimStuff::ApplyLocalPlayerAim() {
	((void(__stdcall *)())SAMP_ADDROF(0x98300))();
}

SAMP::AimStuff::Aim *SAMP::AimStuff::GetInternalAim() {
	return ((Aim *(__stdcall *)())SAMP_ADDROF(0x98320))();
}

void SAMP::AimStuff::CopyPlayerAim(int nPlayerNumber, Aim *pDest) {
	((void(__stdcall *)(int, Aim *))SAMP_ADDROF(0x98330))(nPlayerNumber, pDest);
}

void SAMP::AimStuff::ApplyPlayerAim(int nPlayerNumber) {
	((void(__stdcall *)(int))SAMP_ADDROF(0x98360))(nPlayerNumber);
}

SAMP::AimStuff::Aim *SAMP::AimStuff::GetPlayerAim(int nPlayerNumber) {
	return ((Aim *(__stdcall *)(int))SAMP_ADDROF(0x98390))(nPlayerNumber);
}
