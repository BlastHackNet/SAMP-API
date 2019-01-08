/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "AimStuff.h"

float &SAMP::AimStuff::fLocalPlayerCameraExtZoom = *(float *)SAMP_ADDROF(0x12FBA0);
float &SAMP::AimStuff::fLocalPlayerAspectRatio = *(float *)SAMP_ADDROF(0x132758);
float *&SAMP::AimStuff::pInternalCameraExtZoom = *(float **)SAMP_ADDROF(0xF159C);
float *&SAMP::AimStuff::pInternalAspectRatio = *(float **)SAMP_ADDROF(0xF1598);
float *SAMP::AimStuff::aCameraExtZoom = (float *)SAMP_ADDROF(0x12FC80);
float *SAMP::AimStuff::aAspectRatio = (float *)SAMP_ADDROF(0x132788);
char *SAMP::AimStuff::aCameraMode = (char *)SAMP_ADDROF(0x12FBA8);
char *&SAMP::AimStuff::pInternalCameraMode = *(char **)SAMP_ADDROF(0x10153C);
SAMP::AimStuff::Aim &SAMP::AimStuff::localPlayerAim = *(SAMP::AimStuff::Aim *)SAMP_ADDROF(0x12FFC8);
SAMP::AimStuff::Aim *SAMP::AimStuff::aPlayerAim = (SAMP::AimStuff::Aim *)SAMP_ADDROF(0x12FFF8);
SAMP::AimStuff::Aim *&SAMP::AimStuff::pInternalAim = *(SAMP::AimStuff::Aim **)SAMP_ADDROF(0xF1590);

float SAMP::AimStuff::GetCameraExtZoom() {
	return ((float(__stdcall *)())SAMP_ADDROF(0x981D0))();
}

void SAMP::AimStuff::ApplyCameraExtZoomAndAspectRatio(NUMBER nPlayer) {
	((void(__stdcall *)(NUMBER))SAMP_ADDROF(0x981F0))(nPlayer);
}

void SAMP::AimStuff::SetCameraMode(char nMode, NUMBER nPlayer) {
	((void(__stdcall *)(char, NUMBER))SAMP_ADDROF(0x98230))(nMode, nPlayer);
}

char SAMP::AimStuff::GetCameraMode(NUMBER nPlayer) {
	return ((char(__stdcall *)(NUMBER))SAMP_ADDROF(0x98250))(nPlayer);
}

char SAMP::AimStuff::GetCameraMode() {
	return ((char(__stdcall *)())SAMP_ADDROF(0x98260))();
}

void SAMP::AimStuff::Initialize() {
	((void(__stdcall *)())SAMP_ADDROF(0x98270))();
}

void SAMP::AimStuff::UpdateAim() {
	((void(__stdcall *)())SAMP_ADDROF(0x982E0))();
}

void SAMP::AimStuff::ApplyAim() {
	((void(__stdcall *)())SAMP_ADDROF(0x98300))();
}

SAMP::AimStuff::Aim *SAMP::AimStuff::GetAim() {
	return ((Aim *(__stdcall *)())SAMP_ADDROF(0x98320))();
}

void SAMP::AimStuff::SetAim(int nPlayer, const Aim *pAim) {
	((void(__stdcall *)(int, const Aim *))SAMP_ADDROF(0x98330))(nPlayer, pAim);
}

void SAMP::AimStuff::ApplyAim(int nPlayer) {
	((void(__stdcall *)(int))SAMP_ADDROF(0x98360))(nPlayer);
}

SAMP::AimStuff::Aim *SAMP::AimStuff::GetAim(int nPlayer) {
	return ((Aim *(__stdcall *)(int))SAMP_ADDROF(0x98390))(nPlayer);
}

void SAMP::AimStuff::UpdateCameraExtZoomAndAspectRatio() {
	((void(__stdcall *)())SAMP_ADDROF(0x98160))();
}

void SAMP::AimStuff::ApplyCameraExtZoomAndAspectRatio() {
	((void(__stdcall *)())SAMP_ADDROF(0x98180))();
}

void SAMP::AimStuff::SetCameraExtZoomAndAspectRatio(NUMBER nPlayer, float fCameraExtZoom, float fAspectRatio) {
	((void(__stdcall *)(NUMBER, float, float))SAMP_ADDROF(0x981A0))(nPlayer, fCameraExtZoom, fAspectRatio);
}

float SAMP::AimStuff::GetAspectRatio() {
	return ((float(__stdcall *)())SAMP_ADDROF(0x981C0))();
}

