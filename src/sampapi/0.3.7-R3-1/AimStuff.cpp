/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/AimStuff.h"

SAMPAPI_BEGIN_V037R3_1

SAMPAPI_VAR float& AimStuff::RefLocalPlayerCameraExtZoom() {
    return *(float*)GetAddress(0x143D20);
}

SAMPAPI_VAR float& AimStuff::RefLocalPlayerAspectRatio() {
    return *(float*)GetAddress(0x1468D8);
}

SAMPAPI_VAR float*& AimStuff::RefInternalCameraExtZoom() {
    return *(float**)GetAddress(0x1039BC);
}

SAMPAPI_VAR float*& AimStuff::RefInternalAspectRatio() {
    return *(float**)GetAddress(0x1039B8);
}

SAMPAPI_VAR float* AimStuff::ArrayCameraExtZoom() {
    return (float*)GetAddress(0x143E00);
}

SAMPAPI_VAR float* AimStuff::ArrayAspectRatio() {
    return (float*)GetAddress(0x146908);
}

SAMPAPI_VAR char* AimStuff::ArrayCameraMode() {
    return (char*)GetAddress(0x143D28);
}

SAMPAPI_VAR char*& AimStuff::RefInternalCameraMode() {
    return *(char**)GetAddress(0x11395C);
}

SAMPAPI_VAR AimStuff::Aim& AimStuff::RefLocalPlayerAim() {
    return *(AimStuff::Aim*)GetAddress(0x144148);
}

SAMPAPI_VAR AimStuff::Aim* AimStuff::ArrayPlayerAim() {
    return (AimStuff::Aim*)GetAddress(0x144178);
}

SAMPAPI_VAR AimStuff::Aim*& AimStuff::RefInternalAim() {
    return *(AimStuff::Aim**)GetAddress(0x1039B0);
}

void AimStuff::UpdateCameraExtZoomAndAspectRatio() {
    ((void(__stdcall*)())GetAddress(0x9C0B0))();
}

void AimStuff::ApplyCameraExtZoomAndAspectRatio() {
    ((void(__stdcall*)())GetAddress(0x9C0D0))();
}

void AimStuff::SetCameraExtZoomAndAspectRatio(NUMBER nPlayer, float fCameraExtZoom, float fAspectRatio) {
    ((void(__stdcall*)(NUMBER, float, float))GetAddress(0x9C0F0))(nPlayer, fCameraExtZoom, fAspectRatio);
}

float AimStuff::GetAspectRatio() {
    return ((float(__stdcall*)())GetAddress(0x9C110))();
}

float AimStuff::GetCameraExtZoom() {
    return ((float(__stdcall*)())GetAddress(0x9C120))();
}

void AimStuff::ApplyCameraExtZoomAndAspectRatio(NUMBER nPlayer) {
    ((void(__stdcall*)(NUMBER))GetAddress(0x9C140))(nPlayer);
}

void AimStuff::SetCameraMode(char nMode, NUMBER nPlayer) {
    ((void(__stdcall*)(char, NUMBER))GetAddress(0x9C180))(nMode, nPlayer);
}

char AimStuff::GetCameraMode(NUMBER nPlayer) {
    return ((char(__stdcall*)(NUMBER))GetAddress(0x9C1A0))(nPlayer);
}

char AimStuff::GetCameraMode() {
    return ((char(__stdcall*)())GetAddress(0x9C1B0))();
}

void AimStuff::Initialize() {
    ((void(__stdcall*)())GetAddress(0x9C1C0))();
}

void AimStuff::UpdateAim() {
    ((void(__stdcall*)())GetAddress(0x9C230))();
}

void AimStuff::ApplyAim() {
    ((void(__stdcall*)())GetAddress(0x9C250))();
}

AimStuff::Aim* AimStuff::GetAim() {
    return ((Aim * (__stdcall*)()) GetAddress(0x9C270))();
}

void AimStuff::SetAim(int nPlayer, const Aim* pAim) {
    ((void(__stdcall*)(int, const Aim*))GetAddress(0x9C280))(nPlayer, pAim);
}

void AimStuff::ApplyAim(int nPlayer) {
    ((void(__stdcall*)(int))GetAddress(0x9C2B0))(nPlayer);
}

AimStuff::Aim* AimStuff::GetAim(int nPlayer) {
    return ((Aim * (__stdcall*)(int)) GetAddress(0x9C2E0))(nPlayer);
}

SAMPAPI_END
