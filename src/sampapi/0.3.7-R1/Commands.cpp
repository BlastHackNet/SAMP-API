/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/Commands.h"

SAMPAPI_BEGIN_V037R1

void Commands::Default(const char* params) {
    CMDPROC(GetAddress(0x64910))
    (params);
}

void Commands::TestDeathWindow(const char* params) {
    CMDPROC(GetAddress(0x64930))
    (params);
}

void Commands::ToggleCameraTargetLabels(const char* params) {
    CMDPROC(GetAddress(0x64A10))
    (params);
}

void Commands::SetChatPageSize(const char* params) {
    CMDPROC(GetAddress(0x64A20))
    (params);
}

void Commands::SetChatFontSize(const char* params) {
    CMDPROC(GetAddress(0x64AA0))
    (params);
}

void Commands::DrawNameTagStatus(const char* params) {
    CMDPROC(GetAddress(0x65B50))
    (params);
}

void Commands::DrawChatTimestamps(const char* params) {
    CMDPROC(GetAddress(0x64B60))
    (params);
}

void Commands::ToggleAudioStreamMessages(const char* params) {
    CMDPROC(GetAddress(0x64BC0))
    (params);
}

void Commands::PrintMemory(const char* params) {
    CMDPROC(GetAddress(0x64C40))
    (params);
}

void Commands::SetFrameLimiter(const char* params) {
    CMDPROC(GetAddress(0x64C60))
    (params);
}

void Commands::ToggleHeadMoves(const char* params) {
    CMDPROC(GetAddress(0x64CF0))
    (params);
}

void Commands::Quit(const char* params) {
    CMDPROC(GetAddress(0x64D70))
    (params);
}

void Commands::CmpStat(const char* params) {
    CMDPROC(GetAddress(0x64D80))
    (params);
}

void Commands::SavePosition(const char* params) {
    CMDPROC(GetAddress(0x64D90))
    (params);
}

void Commands::SavePositionOnly(const char* params) {
    CMDPROC(GetAddress(0x64F10))
    (params);
}

void Commands::PrintCurrentInterior(const char* params) {
    CMDPROC(GetAddress(0x65360))
    (params);
}

void Commands::ToggleObjectsLight(const char* params) {
    CMDPROC(GetAddress(0x65390))
    (params);
}

void Commands::ToggleDebugLabels(const char* params) {
    CMDPROC(GetAddress(0x653B0))
    (params);
}

void Commands::SendRconCommand(const char* params) {
    CMDPROC(GetAddress(0x653C0))
    (params);
}

void Commands::Debug::SetPlayerSkin(const char* params) {
    CMDPROC(GetAddress(0x65090))
    (params);
}

void Commands::Debug::CreateVehicle(const char* params) {
    CMDPROC(GetAddress(0x65100))
    (params);
}

void Commands::Debug::EnableVehicleSelection(const char* params) {
    CMDPROC(GetAddress(0x65240))
    (params);
}

void Commands::Debug::SetWorldWeather(const char* params) {
    CMDPROC(GetAddress(0x65260))
    (params);
}

void Commands::Debug::SetWorldTime(const char* params) {
    CMDPROC(GetAddress(0x652B0))
    (params);
}

void Commands::Setup() {
    ((void(__cdecl*)())GetAddress(0x654A0))();
}

SAMPAPI_END
