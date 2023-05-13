/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/Commands.h"

SAMPAPI_BEGIN_V037R5_1

void Commands::Default(const char* params) {
    CMDPROC(GetAddress(0x684E0))
    (params);
}

void Commands::TestDeathWindow(const char* params) {
    CMDPROC(GetAddress(0x68500))
    (params);
}

void Commands::ToggleCameraTargetLabels(const char* params) {
    CMDPROC(GetAddress(0x685E0))
    (params);
}

void Commands::SetChatPageSize(const char* params) {
    CMDPROC(GetAddress(0x685F0))
    (params);
}

void Commands::SetChatFontSize(const char* params) {
    CMDPROC(GetAddress(0x68670))
    (params);
}

void Commands::DrawNameTagStatus(const char* params) {
    CMDPROC(GetAddress(0x68720))
    (params);
}

void Commands::DrawChatTimestamps(const char* params) {
    CMDPROC(GetAddress(0x68730))
    (params);
}

void Commands::ToggleAudioStreamMessages(const char* params) {
    CMDPROC(GetAddress(0x68790))
    (params);
}

void Commands::ToggleURLMessages(const char* params) {
    CMDPROC(GetAddress(0x68800))
    (params);
}

void Commands::ToggleHUDScaleFix(const char* params) {
    CMDPROC(GetAddress(0x68870))
    (params);
}

void Commands::PrintMemory(const char* params) {
    CMDPROC(GetAddress(0x688B0))
    (params);
}

void Commands::SetFrameLimiter(const char* params) {
    CMDPROC(GetAddress(0x688D0))
    (params);
}

void Commands::ToggleHeadMoves(const char* params) {
    CMDPROC(GetAddress(0x68960))
    (params);
}

void Commands::Quit(const char* params) {
    CMDPROC(GetAddress(0x689E0))
    (params);
}

void Commands::CmpStat(const char* params) {
    CMDPROC(GetAddress(0x689F0))
    (params);
}

void Commands::SavePosition(const char* params) {
    CMDPROC(GetAddress(0x68A00))
    (params);
}

void Commands::SavePositionOnly(const char* params) {
    CMDPROC(GetAddress(0x68B80))
    (params);
}

void Commands::PrintCurrentInterior(const char* params) {
    CMDPROC(GetAddress(0x68FD0))
    (params);
}

void Commands::ToggleObjectsLight(const char* params) {
    CMDPROC(GetAddress(0x69000))
    (params);
}

void Commands::ToggleDebugLabels(const char* params) {
    CMDPROC(GetAddress(0x69020))
    (params);
}

void Commands::SendRconCommand(const char* params) {
    CMDPROC(GetAddress(0x69030))
    (params);
}

void Commands::Debug::SetPlayerSkin(const char* params) {
    CMDPROC(GetAddress(0x68D00))
    (params);
}

void Commands::Debug::CreateVehicle(const char* params) {
    CMDPROC(GetAddress(0x68D70))
    (params);
}

void Commands::Debug::EnableVehicleSelection(const char* params) {
    CMDPROC(GetAddress(0x68EB0))
    (params);
}

void Commands::Debug::SetWorldWeather(const char* params) {
    CMDPROC(GetAddress(0x68ED0))
    (params);
}

void Commands::Debug::SetWorldTime(const char* params) {
    CMDPROC(GetAddress(0x68F20))
    (params);
}

void Commands::Setup() {
    ((void(__cdecl*)())GetAddress(0x69110))();
}

SAMPAPI_END
