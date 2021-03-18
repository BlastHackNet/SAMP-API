/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/AimStuff.h"

SAMPAPI_BEGIN_V037R1

SAMPAPI_VAR float& AimStuff::RefLocalPlayerCameraExtZoom() {
    return *(float*)GetAddress(0x12FBA0);
}

SAMPAPI_VAR float& AimStuff::RefLocalPlayerAspectRatio() {
    return *(float*)GetAddress(0x132758);
}

SAMPAPI_VAR float*& AimStuff::RefInternalCameraExtZoom() {
    return *(float**)GetAddress(0xF159C);
}

SAMPAPI_VAR float*& AimStuff::RefInternalAspectRatio() {
    return *(float**)GetAddress(0xF1598);
}

SAMPAPI_VAR float* AimStuff::ArrayCameraExtZoom() {
    return (float*)GetAddress(0x12FC80);
}

SAMPAPI_VAR float* AimStuff::ArrayAspectRatio() {
    return (float*)GetAddress(0x132788);
}

SAMPAPI_VAR char* AimStuff::ArrayCameraMode() {
    return (char*)GetAddress(0x12FBA8);
}

SAMPAPI_VAR char*& AimStuff::RefInternalCameraMode() {
    return *(char**)GetAddress(0x10153C);
}

SAMPAPI_VAR AimStuff::Aim& AimStuff::RefLocalPlayerAim() {
    return *(AimStuff::Aim*)GetAddress(0x12FFC8);
}

SAMPAPI_VAR AimStuff::Aim* AimStuff::ArrayPlayerAim() {
    return (AimStuff::Aim*)GetAddress(0x12FFF8);
}

SAMPAPI_VAR AimStuff::Aim*& AimStuff::RefInternalAim() {
    return *(AimStuff::Aim**)GetAddress(0xF1590);
}

float AimStuff::GetCameraExtZoom() {
    return ((float(__stdcall*)())GetAddress(0x981D0))();
}

void AimStuff::ApplyCameraExtZoomAndAspectRatio(NUMBER nPlayer) {
    ((void(__stdcall*)(NUMBER))GetAddress(0x981F0))(nPlayer);
}

void AimStuff::SetCameraMode(char nMode, NUMBER nPlayer) {
    ((void(__stdcall*)(char, NUMBER))GetAddress(0x98230))(nMode, nPlayer);
}

char AimStuff::GetCameraMode(NUMBER nPlayer) {
    return ((char(__stdcall*)(NUMBER))GetAddress(0x98250))(nPlayer);
}

char AimStuff::GetCameraMode() {
    return ((char(__stdcall*)())GetAddress(0x98260))();
}

void AimStuff::Initialize() {
    ((void(__stdcall*)())GetAddress(0x98270))();
}

void AimStuff::UpdateAim() {
    ((void(__stdcall*)())GetAddress(0x982E0))();
}

void AimStuff::ApplyAim() {
    ((void(__stdcall*)())GetAddress(0x98300))();
}

AimStuff::Aim* AimStuff::GetAim() {
    return ((Aim * (__stdcall*)()) GetAddress(0x98320))();
}

void AimStuff::SetAim(int nPlayer, const Aim* pAim) {
    ((void(__stdcall*)(int, const Aim*))GetAddress(0x98330))(nPlayer, pAim);
}

void AimStuff::ApplyAim(int nPlayer) {
    ((void(__stdcall*)(int))GetAddress(0x98360))(nPlayer);
}

AimStuff::Aim* AimStuff::GetAim(int nPlayer) {
    return ((Aim * (__stdcall*)(int)) GetAddress(0x98390))(nPlayer);
}

void AimStuff::UpdateCameraExtZoomAndAspectRatio() {
    ((void(__stdcall*)())GetAddress(0x98160))();
}

void AimStuff::ApplyCameraExtZoomAndAspectRatio() {
    ((void(__stdcall*)())GetAddress(0x98180))();
}

void AimStuff::SetCameraExtZoomAndAspectRatio(NUMBER nPlayer, float fCameraExtZoom, float fAspectRatio) {
    ((void(__stdcall*)(NUMBER, float, float))GetAddress(0x981A0))(nPlayer, fCameraExtZoom, fAspectRatio);
}

float AimStuff::GetAspectRatio() {
    return ((float(__stdcall*)())GetAddress(0x981C0))();
}

SAMPAPI_END
