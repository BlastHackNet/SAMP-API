/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "Commands.h"

SAMP::CMDPROC SAMP::Commands::Default = SAMP::CMDPROC(SAMP_ADDROF(0x67D60));
SAMP::CMDPROC SAMP::Commands::TestDeathWindow = SAMP::CMDPROC(SAMP_ADDROF(0x67D90));
SAMP::CMDPROC SAMP::Commands::ToggleCameraTargetLabels = SAMP::CMDPROC(SAMP_ADDROF(0x67E70));
SAMP::CMDPROC SAMP::Commands::SetChatPageSize = SAMP::CMDPROC(SAMP_ADDROF(0x67E80));
SAMP::CMDPROC SAMP::Commands::SetChatFontSize = SAMP::CMDPROC(SAMP_ADDROF(0x67F00));
SAMP::CMDPROC SAMP::Commands::DrawNameTagStatus = SAMP::CMDPROC(SAMP_ADDROF(0x67FB0));
SAMP::CMDPROC SAMP::Commands::DrawChatTimestamps = SAMP::CMDPROC(SAMP_ADDROF(0x67FC0));
SAMP::CMDPROC SAMP::Commands::ToggleAudioStreamMessages = SAMP::CMDPROC(SAMP_ADDROF(0x68020));
SAMP::CMDPROC SAMP::Commands::ToggleURLMessages = SAMP::CMDPROC(SAMP_ADDROF(0x68090));
SAMP::CMDPROC SAMP::Commands::ToggleHUDScaleFix = SAMP::CMDPROC(SAMP_ADDROF(0x68100));
SAMP::CMDPROC SAMP::Commands::PrintMemory = SAMP::CMDPROC(SAMP_ADDROF(0x68140));
SAMP::CMDPROC SAMP::Commands::SetFrameLimiter = SAMP::CMDPROC(SAMP_ADDROF(0x68160));
SAMP::CMDPROC SAMP::Commands::ToggleHeadMoves = SAMP::CMDPROC(SAMP_ADDROF(0x681F0));
SAMP::CMDPROC SAMP::Commands::Quit = SAMP::CMDPROC(SAMP_ADDROF(0x68270));
SAMP::CMDPROC SAMP::Commands::CmpStat = SAMP::CMDPROC(SAMP_ADDROF(0x68280));
SAMP::CMDPROC SAMP::Commands::SavePosition = SAMP::CMDPROC(SAMP_ADDROF(0x68290));
SAMP::CMDPROC SAMP::Commands::SavePositionOnly = SAMP::CMDPROC(SAMP_ADDROF(0x68410));
SAMP::CMDPROC SAMP::Commands::PrintCurrentInterior = SAMP::CMDPROC(SAMP_ADDROF(0x68860));
SAMP::CMDPROC SAMP::Commands::ToggleObjectsLight = SAMP::CMDPROC(SAMP_ADDROF(0x68890));
SAMP::CMDPROC SAMP::Commands::ToggleDebugLabels = SAMP::CMDPROC(SAMP_ADDROF(0x688B0));
SAMP::CMDPROC SAMP::Commands::SendRconCommand = SAMP::CMDPROC(SAMP_ADDROF(0x688C0));
SAMP::CMDPROC SAMP::Commands::Debug::SetPlayerSkin = SAMP::CMDPROC(SAMP_ADDROF(0x68590));
SAMP::CMDPROC SAMP::Commands::Debug::CreateVehicle = SAMP::CMDPROC(SAMP_ADDROF(0x68600));
SAMP::CMDPROC SAMP::Commands::Debug::EnableVehicleSelection = SAMP::CMDPROC(SAMP_ADDROF(0x68740));
SAMP::CMDPROC SAMP::Commands::Debug::SetWorldWeather = SAMP::CMDPROC(SAMP_ADDROF(0x68760));
SAMP::CMDPROC SAMP::Commands::Debug::SetWorldTime = SAMP::CMDPROC(SAMP_ADDROF(0x687B0));

void SAMP::Commands::Setup() {
	((void(__cdecl *)())SAMP_ADDROF(0x689A0))();
}