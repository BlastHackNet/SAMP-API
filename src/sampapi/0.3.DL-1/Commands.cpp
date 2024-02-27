/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/Commands.h"

SAMPAPI_BEGIN_V03DL_1

void Commands::Default(const char* params) {
    CMDPROC(GetAddress(0x67F50))
    (params);
}

void Commands::TestDeathWindow(const char* params) {
    CMDPROC(GetAddress(0x67F70))
    (params);
}

void Commands::ToggleCameraTargetLabels(const char* params) {
    CMDPROC(GetAddress(0x68050))
    (params);
}

void Commands::SetChatPageSize(const char* params) {
    CMDPROC(GetAddress(0x68060))
    (params);
}

void Commands::SetChatFontSize(const char* params) {
    CMDPROC(GetAddress(0x680E0))
    (params);
}

void Commands::DrawNameTagStatus(const char* params) {
    CMDPROC(GetAddress(0x68190))
    (params);
}

void Commands::DrawChatTimestamps(const char* params) {
    CMDPROC(GetAddress(0x681A0))
    (params);
}

void Commands::ToggleAudioStreamMessages(const char* params) {
    CMDPROC(GetAddress(0x68200))
    (params);
}

void Commands::ToggleURLMessages(const char* params) {
    CMDPROC(GetAddress(0x68270))
    (params);
}

void Commands::PrintMemory(const char* params) {
    CMDPROC(GetAddress(0x682F0))
    (params);
}

void Commands::SetFrameLimiter(const char* params) {
    CMDPROC(GetAddress(0x68310))
    (params);
}

void Commands::ToggleHeadMoves(const char* params) {
    CMDPROC(GetAddress(0x683A0))
    (params);
}

void Commands::Quit(const char* params) {
    CMDPROC(GetAddress(0x68420))
    (params);
}

void Commands::CmpStat(const char* params) {
    CMDPROC(GetAddress(0x68430))
    (params);
}

void Commands::SavePosition(const char* params) {
    CMDPROC(GetAddress(0x68440))
    (params);
}

void Commands::SavePositionOnly(const char* params) {
    CMDPROC(GetAddress(0x685C0))
    (params);
}

void Commands::PrintCurrentInterior(const char* params) {
    CMDPROC(GetAddress(0x68A10))
    (params);
}

void Commands::ToggleObjectsLight(const char* params) {
    CMDPROC(GetAddress(0x68A40))
    (params);
}

void Commands::ToggleDebugLabels(const char* params) {
    CMDPROC(GetAddress(0x68A60))
    (params);
}

void Commands::SendRconCommand(const char* params) {
    CMDPROC(GetAddress(0x68A70))
    (params);
}

void Commands::Debug::SetPlayerSkin(const char* params) {
    CMDPROC(GetAddress(0x68740))
    (params);
}

void Commands::Debug::CreateVehicle(const char* params) {
    CMDPROC(GetAddress(0x687B0))
    (params);
}

void Commands::Debug::EnableVehicleSelection(const char* params) {
    CMDPROC(GetAddress(0x688F0))
    (params);
}

void Commands::Debug::SetWorldWeather(const char* params) {
    CMDPROC(GetAddress(0x68910))
    (params);
}

void Commands::Debug::SetWorldTime(const char* params) {
    CMDPROC(GetAddress(0x68960))
    (params);
}

void Commands::Setup() {
    ((void(__cdecl*)())GetAddress(0x68B50))();
}

SAMPAPI_END
