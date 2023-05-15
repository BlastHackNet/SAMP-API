/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/AimStuff.h"

SAMPAPI_BEGIN_V037R5_1

SAMPAPI_VAR float& AimStuff::RefLocalPlayerCameraExtZoom() {
    return *(float*)GetAddress(0x143FD0);
}

SAMPAPI_VAR float& AimStuff::RefLocalPlayerAspectRatio() {
    return *(float*)GetAddress(0x146B88);
}

SAMPAPI_VAR float*& AimStuff::RefInternalCameraExtZoom() {
    return *(float**)GetAddress(0x1039D4);
}

SAMPAPI_VAR float*& AimStuff::RefInternalAspectRatio() {
    return *(float**)GetAddress(0x1039D0);
}

SAMPAPI_VAR float* AimStuff::ArrayCameraExtZoom() {
    return (float*)GetAddress(0x1440B0);
}

SAMPAPI_VAR float* AimStuff::ArrayAspectRatio() {
    return (float*)GetAddress(0x146BB8);
}

SAMPAPI_VAR char* AimStuff::ArrayCameraMode() {
    return (char*)GetAddress(0x143FD8);
}

SAMPAPI_VAR char*& AimStuff::RefInternalCameraMode() {
    return *(char**)GetAddress(0x113974);
}

SAMPAPI_VAR AimStuff::Aim& AimStuff::RefLocalPlayerAim() {
    return *(AimStuff::Aim*)GetAddress(0x1443F8);
}

SAMPAPI_VAR AimStuff::Aim* AimStuff::ArrayPlayerAim() {
    return (AimStuff::Aim*)GetAddress(0x144428);
}

SAMPAPI_VAR AimStuff::Aim*& AimStuff::RefInternalAim() {
    return *(AimStuff::Aim**)GetAddress(0x1039C8);
}

void AimStuff::UpdateCameraExtZoomAndAspectRatio() {
    ((void(__stdcall*)())GetAddress(0x9C7C0))();
}

void AimStuff::ApplyCameraExtZoomAndAspectRatio() {
    ((void(__stdcall*)())GetAddress(0x9C7E0))();
}

void AimStuff::SetCameraExtZoomAndAspectRatio(NUMBER nPlayer, float fCameraExtZoom, float fAspectRatio) {
    ((void(__stdcall*)(NUMBER, float, float))GetAddress(0x9C800))(nPlayer, fCameraExtZoom, fAspectRatio);
}

float AimStuff::GetAspectRatio() {
    return ((float(__stdcall*)())GetAddress(0x9C820))();
}

float AimStuff::GetCameraExtZoom() {
    return ((float(__stdcall*)())GetAddress(0x9C830))();
}

void AimStuff::ApplyCameraExtZoomAndAspectRatio(NUMBER nPlayer) {
    ((void(__stdcall*)(NUMBER))GetAddress(0x9C850))(nPlayer);
}

void AimStuff::SetCameraMode(char nMode, NUMBER nPlayer) {
    ((void(__stdcall*)(char, NUMBER))GetAddress(0x9C890))(nMode, nPlayer);
}

char AimStuff::GetCameraMode(NUMBER nPlayer) {
    return ((char(__stdcall*)(NUMBER))GetAddress(0x9C8B0))(nPlayer);
}

char AimStuff::GetCameraMode() {
    return ((char(__stdcall*)())GetAddress(0x9C8C0))();
}

void AimStuff::Initialize() {
    ((void(__stdcall*)())GetAddress(0x9C8D0))();
}

void AimStuff::UpdateAim() {
    ((void(__stdcall*)())GetAddress(0x9C940))();
}

void AimStuff::ApplyAim() {
    ((void(__stdcall*)())GetAddress(0x9C960))();
}

AimStuff::Aim* AimStuff::GetAim() {
    return ((Aim * (__stdcall*)()) GetAddress(0x9C980))();
}

void AimStuff::SetAim(int nPlayer, const Aim* pAim) {
    ((void(__stdcall*)(int, const Aim*))GetAddress(0x9C990))(nPlayer, pAim);
}

void AimStuff::ApplyAim(int nPlayer) {
    ((void(__stdcall*)(int))GetAddress(0x9C9C0))(nPlayer);
}

AimStuff::Aim* AimStuff::GetAim(int nPlayer) {
    return ((Aim * (__stdcall*)(int)) GetAddress(0x9C9F0))(nPlayer);
}

SAMPAPI_END
