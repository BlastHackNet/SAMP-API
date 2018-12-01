/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "Commands.h"

void SAMP::Commands::Setup() {
	((void(__cdecl *)())SAMP_ADDROF(0x654A0))();
}

void SAMP::Commands::DefaultHandler(char *pParam) {
	((void(__cdecl *)(char *))SAMP_ADDROF(0x64910))(pParam);
}

void SAMP::Commands::Discon(char *pParam) {
	((void(__cdecl *)(char *))SAMP_ADDROF(0x64930))(pParam);
}

void SAMP::Commands::SetChatPageSize(char *pParam) {
	((void(__cdecl *)(char *))SAMP_ADDROF(0x64A20))(pParam);
}

void SAMP::Commands::SetChatFontSize(char *pParam) {
	((void(__cdecl *)(char *))SAMP_ADDROF(0x64AA0))(pParam);
}

void SAMP::Commands::SetNametagStatus(char *pParam) {
	((void(__cdecl *)(char *))SAMP_ADDROF(0x65B50))(pParam);
}

void SAMP::Commands::ToggleEnabledTimestamps(char *pParam) {
	((void(__cdecl *)(char *))SAMP_ADDROF(0x64B60))(pParam);
}

void SAMP::Commands::AudioMessage(char *pParam) {
	((void(__cdecl *)(char *))SAMP_ADDROF(0x64BC0))(pParam);
}

void SAMP::Commands::Memory(char *pParam) {
	((void(__cdecl *)(char *))SAMP_ADDROF(0x64C40))(pParam);
}

void SAMP::Commands::SetFPSLimit(char *pParam) {
	((void(__cdecl *)(char *))SAMP_ADDROF(0x64C60))(pParam);
}

void SAMP::Commands::TogglePlayersHeadMoves(char *pParam) {
	((void(__cdecl *)(char *))SAMP_ADDROF(0x64CF0))(pParam);
}

void SAMP::Commands::Quit(char *pParam) {
	((void(__cdecl *)(char *))SAMP_ADDROF(0x64D70))(pParam);
}

void SAMP::Commands::CmpStat(char *pParam) {
	((void(__cdecl *)(char *))SAMP_ADDROF(0x64D80))(pParam);
}

void SAMP::Commands::SavePosition(char *pParam) {
	((void(__cdecl *)(char *))SAMP_ADDROF(0x64D90))(pParam);
}

void SAMP::Commands::SaveRawPosition(char *pParam) {
	((void(__cdecl *)(char *))SAMP_ADDROF(0x64F10))(pParam);
}

void SAMP::Commands::ShowInterior(char *pParam) {
	((void(__cdecl *)(char *))SAMP_ADDROF(0x65360))(pParam);
}

void SAMP::Commands::ToggleObjectsLight(char *pParam) {
	((void(__cdecl *)(char *))SAMP_ADDROF(0x65390))(pParam);
}

void SAMP::Commands::DebugLabels(char *pParam) {
	((void(__cdecl *)(char *))SAMP_ADDROF(0x653B0))(pParam);
}

void SAMP::Commands::Rcon(char *pParam) {
	((void(__cdecl *)(char *))SAMP_ADDROF(0x653C0))(pParam);
}

void SAMP::Commands::Debug::SetPlayerSkin(char *pParam) {
	((void(__cdecl *)(char *))SAMP_ADDROF(0x65090))(pParam);
}

void SAMP::Commands::Debug::CreateVehicle(char *pParam) {
	((void(__cdecl *)(char *))SAMP_ADDROF(0x65100))(pParam);
}

void SAMP::Commands::Debug::SelectVehicle(char *pParam) {
	((void(__cdecl *)(char *))SAMP_ADDROF(0x65240))(pParam);
}

void SAMP::Commands::Debug::SetWorldWeather(char *pParam) {
	((void(__cdecl *)(char *))SAMP_ADDROF(0x65260))(pParam);
}

void SAMP::Commands::Debug::SetWorldTime(char *pParam) {
	((void(__cdecl *)(char *))SAMP_ADDROF(0x652B0))(pParam);
}

void SAMP::Commands::ToggleTargetLabel(char *pParam) {
	((void(__cdecl *)(char *))SAMP_ADDROF(0x64A10))(pParam);
}