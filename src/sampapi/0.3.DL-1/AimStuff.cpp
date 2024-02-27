/*
	This is a SAMP (0.3.DL-1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/AimStuff.h"

SAMPAPI_BEGIN_V03DL_1

SAMPAPI_VAR float& AimStuff::RefLocalPlayerCameraExtZoom() {
    return *(float*)GetAddress(0x181E60);
}

SAMPAPI_VAR float& AimStuff::RefLocalPlayerAspectRatio() {
    return *(float*)GetAddress(0x184A18);
}

SAMPAPI_VAR float*& AimStuff::RefInternalCameraExtZoom() {
    return *(float**)GetAddress(0x1419BC);
}

SAMPAPI_VAR float*& AimStuff::RefInternalAspectRatio() {
    return *(float**)GetAddress(0x1419B8);
}

SAMPAPI_VAR float* AimStuff::ArrayCameraExtZoom() {
    return (float*)GetAddress(0x181F40);
}

SAMPAPI_VAR float* AimStuff::ArrayAspectRatio() {
    return (float*)GetAddress(0x184A48);
}

SAMPAPI_VAR char* AimStuff::ArrayCameraMode() {
    return (char*)GetAddress(0x181E68);
}

SAMPAPI_VAR char*& AimStuff::RefInternalCameraMode() {
    return *(char**)GetAddress(0x15195C);
}

SAMPAPI_VAR AimStuff::Aim& AimStuff::RefLocalPlayerAim() {
    return *(AimStuff::Aim*)GetAddress(0x182288);
}

SAMPAPI_VAR AimStuff::Aim* AimStuff::ArrayPlayerAim() {
    return (AimStuff::Aim*)GetAddress(0x1822B8);
}

SAMPAPI_VAR AimStuff::Aim*& AimStuff::RefInternalAim() {
    return *(AimStuff::Aim**)GetAddress(0x1419B0);
}

float AimStuff::GetCameraExtZoom() {
    return ((float(__stdcall*)())GetAddress(0x9C2B0))();
}

void AimStuff::ApplyCameraExtZoomAndAspectRatio(NUMBER nPlayer) {
    ((void(__stdcall*)(NUMBER))GetAddress(0x9C2D0))(nPlayer);
}

void AimStuff::SetCameraMode(char nMode, NUMBER nPlayer) {
    ((void(__stdcall*)(char, NUMBER))GetAddress(0x9C310))(nMode, nPlayer);
}

char AimStuff::GetCameraMode(NUMBER nPlayer) {
    return ((char(__stdcall*)(NUMBER))GetAddress(0x9C330))(nPlayer);
}

char AimStuff::GetCameraMode() {
    return ((char(__stdcall*)())GetAddress(0x9C340))();
}

void AimStuff::Initialize() {
    ((void(__stdcall*)())GetAddress(0x9C350))();
}

void AimStuff::UpdateAim() {
    ((void(__stdcall*)())GetAddress(0x9C3C0))();
}

void AimStuff::ApplyAim() {
    ((void(__stdcall*)())GetAddress(0x9C3E0))();
}

AimStuff::Aim* AimStuff::GetAim() {
    return ((Aim * (__stdcall*)()) GetAddress(0x9C400))();
}

void AimStuff::SetAim(int nPlayer, const Aim* pAim) {
    ((void(__stdcall*)(int, const Aim*))GetAddress(0x9C410))(nPlayer, pAim);
}

void AimStuff::ApplyAim(int nPlayer) {
    ((void(__stdcall*)(int))GetAddress(0x9C440))(nPlayer);
}

AimStuff::Aim* AimStuff::GetAim(int nPlayer) {
    return ((Aim * (__stdcall*)(int)) GetAddress(0x9C470))(nPlayer);
}

void AimStuff::UpdateCameraExtZoomAndAspectRatio() {
    ((void(__stdcall*)())GetAddress(0x9C240))();
}

void AimStuff::ApplyCameraExtZoomAndAspectRatio() {
    ((void(__stdcall*)())GetAddress(0x9C260))();
}

void AimStuff::SetCameraExtZoomAndAspectRatio(NUMBER nPlayer, float fCameraExtZoom, float fAspectRatio) {
    ((void(__stdcall*)(NUMBER, float, float))GetAddress(0x9C280))(nPlayer, fCameraExtZoom, fAspectRatio);
}

float AimStuff::GetAspectRatio() {
    return ((float(__stdcall*)())GetAddress(0x9C2A0))();
}

SAMPAPI_END
