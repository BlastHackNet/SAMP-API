/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/Commands.h"

SAMPAPI_BEGIN_V037R3_1

void Commands::Default(const char* params) {
    CMDPROC(GetAddress(0x67D60))
    (params);
}

void Commands::TestDeathWindow(const char* params) {
    CMDPROC(GetAddress(0x67D90))
    (params);
}

void Commands::ToggleCameraTargetLabels(const char* params) {
    CMDPROC(GetAddress(0x67E70))
    (params);
}

void Commands::SetChatPageSize(const char* params) {
    CMDPROC(GetAddress(0x67E80))
    (params);
}

void Commands::SetChatFontSize(const char* params) {
    CMDPROC(GetAddress(0x67F00))
    (params);
}

void Commands::DrawNameTagStatus(const char* params) {
    CMDPROC(GetAddress(0x67FB0))
    (params);
}

void Commands::DrawChatTimestamps(const char* params) {
    CMDPROC(GetAddress(0x67FC0))
    (params);
}

void Commands::ToggleAudioStreamMessages(const char* params) {
    CMDPROC(GetAddress(0x68020))
    (params);
}

void Commands::ToggleURLMessages(const char* params) {
    CMDPROC(GetAddress(0x68090))
    (params);
}

void Commands::ToggleHUDScaleFix(const char* params) {
    CMDPROC(GetAddress(0x68100))
    (params);
}

void Commands::PrintMemory(const char* params) {
    CMDPROC(GetAddress(0x68140))
    (params);
}

void Commands::SetFrameLimiter(const char* params) {
    CMDPROC(GetAddress(0x68160))
    (params);
}

void Commands::ToggleHeadMoves(const char* params) {
    CMDPROC(GetAddress(0x681F0))
    (params);
}

void Commands::Quit(const char* params) {
    CMDPROC(GetAddress(0x68270))
    (params);
}

void Commands::CmpStat(const char* params) {
    CMDPROC(GetAddress(0x68280))
    (params);
}

void Commands::SavePosition(const char* params) {
    CMDPROC(GetAddress(0x68290))
    (params);
}

void Commands::SavePositionOnly(const char* params) {
    CMDPROC(GetAddress(0x68410))
    (params);
}

void Commands::PrintCurrentInterior(const char* params) {
    CMDPROC(GetAddress(0x68860))
    (params);
}

void Commands::ToggleObjectsLight(const char* params) {
    CMDPROC(GetAddress(0x68890))
    (params);
}

void Commands::ToggleDebugLabels(const char* params) {
    CMDPROC(GetAddress(0x688B0))
    (params);
}

void Commands::SendRconCommand(const char* params) {
    CMDPROC(GetAddress(0x688C0))
    (params);
}

void Commands::Debug::SetPlayerSkin(const char* params) {
    CMDPROC(GetAddress(0x68590))
    (params);
}

void Commands::Debug::CreateVehicle(const char* params) {
    CMDPROC(GetAddress(0x68600))
    (params);
}

void Commands::Debug::EnableVehicleSelection(const char* params) {
    CMDPROC(GetAddress(0x68740))
    (params);
}

void Commands::Debug::SetWorldWeather(const char* params) {
    CMDPROC(GetAddress(0x68760))
    (params);
}

void Commands::Debug::SetWorldTime(const char* params) {
    CMDPROC(GetAddress(0x687B0))
    (params);
}

void Commands::Setup() {
    ((void(__cdecl*)())GetAddress(0x689A0))();
}

SAMPAPI_END
