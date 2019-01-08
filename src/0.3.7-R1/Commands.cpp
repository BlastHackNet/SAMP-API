/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "Commands.h"

SAMP::CMDPROC SAMP::Commands::Default = SAMP::CMDPROC(SAMP_ADDROF(0x64910));
SAMP::CMDPROC SAMP::Commands::TestDeathWindow = SAMP::CMDPROC(SAMP_ADDROF(0x64930));
SAMP::CMDPROC SAMP::Commands::ToggleCameraTargetLabels = SAMP::CMDPROC(SAMP_ADDROF(0x64A10));
SAMP::CMDPROC SAMP::Commands::SetChatPageSize = SAMP::CMDPROC(SAMP_ADDROF(0x64A20));
SAMP::CMDPROC SAMP::Commands::SetChatFontSize = SAMP::CMDPROC(SAMP_ADDROF(0x64AA0));
SAMP::CMDPROC SAMP::Commands::DrawNameTagStatus = SAMP::CMDPROC(SAMP_ADDROF(0x65B50));
SAMP::CMDPROC SAMP::Commands::DrawChatTimestamps = SAMP::CMDPROC(SAMP_ADDROF(0x64B60));
SAMP::CMDPROC SAMP::Commands::ToggleAudioStreamMessages = SAMP::CMDPROC(SAMP_ADDROF(0x64BC0));
SAMP::CMDPROC SAMP::Commands::PrintMemory = SAMP::CMDPROC(SAMP_ADDROF(0x64C40));
SAMP::CMDPROC SAMP::Commands::SetFrameLimiter = SAMP::CMDPROC(SAMP_ADDROF(0x64C60));
SAMP::CMDPROC SAMP::Commands::ToggleHeadMoves = SAMP::CMDPROC(SAMP_ADDROF(0x64CF0));
SAMP::CMDPROC SAMP::Commands::Quit = SAMP::CMDPROC(SAMP_ADDROF(0x64D70));
SAMP::CMDPROC SAMP::Commands::CmpStat = SAMP::CMDPROC(SAMP_ADDROF(0x64D80));
SAMP::CMDPROC SAMP::Commands::SavePosition = SAMP::CMDPROC(SAMP_ADDROF(0x64D90));
SAMP::CMDPROC SAMP::Commands::SavePositionOnly = SAMP::CMDPROC(SAMP_ADDROF(0x64F10));
SAMP::CMDPROC SAMP::Commands::PrintCurrentInterior = SAMP::CMDPROC(SAMP_ADDROF(0x65360));
SAMP::CMDPROC SAMP::Commands::ToggleObjectsLight = SAMP::CMDPROC(SAMP_ADDROF(0x65390));
SAMP::CMDPROC SAMP::Commands::ToggleDebugLabels = SAMP::CMDPROC(SAMP_ADDROF(0x653B0));
SAMP::CMDPROC SAMP::Commands::SendRconCommand = SAMP::CMDPROC(SAMP_ADDROF(0x653C0));
SAMP::CMDPROC SAMP::Commands::Debug::SetPlayerSkin = SAMP::CMDPROC(SAMP_ADDROF(0x65090));
SAMP::CMDPROC SAMP::Commands::Debug::CreateVehicle = SAMP::CMDPROC(SAMP_ADDROF(0x65100));
SAMP::CMDPROC SAMP::Commands::Debug::EnableVehicleSelection = SAMP::CMDPROC(SAMP_ADDROF(0x65240));
SAMP::CMDPROC SAMP::Commands::Debug::SetWorldWeather = SAMP::CMDPROC(SAMP_ADDROF(0x65260));
SAMP::CMDPROC SAMP::Commands::Debug::SetWorldTime = SAMP::CMDPROC(SAMP_ADDROF(0x652B0));

void SAMP::Commands::Setup() {
	((void(__cdecl *)())SAMP_ADDROF(0x654A0))();
}