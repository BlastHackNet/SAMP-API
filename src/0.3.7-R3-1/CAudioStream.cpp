/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CAudioStream.h"

int &SAMP::CAudioStream::hStream = *(int *)SAMP_ADDROF(0x12E68C);
bool &SAMP::CAudioStream::bIsPlaying = *(bool *)SAMP_ADDROF(0x12E690);
SAMP::CVector &SAMP::CAudioStream::position = *(SAMP::CVector *)SAMP_ADDROF(0x12E694);
bool &SAMP::CAudioStream::bIs3d = *(bool *)SAMP_ADDROF(0x12E6A0);
char *SAMP::CAudioStream::szIcyUrl = (char *)SAMP_ADDROF(0x12E588);
char *SAMP::CAudioStream::szInfo = (char *)SAMP_ADDROF(0x12E480);
char *SAMP::CAudioStream::szUrl = (char *)SAMP_ADDROF(0x12E378);
bool &SAMP::CAudioStream::bNeedsToDestroy = *(bool *)SAMP_ADDROF(0x1027BA);
float &SAMP::CAudioStream::fRadius = *(float *)SAMP_ADDROF(0x1027BC);
char *SAMP::CAudioStream::szIcyName = (char *)SAMP_ADDROF(0x12E270);
SAMP::CAudioStream *&SAMP::pAudioStream = *(SAMP::CAudioStream **)SAMP_ADDROF(0x26E8D4);

BOOL SAMP::CAudioStream::Reset() {
	return ((BOOL(__thiscall *)(CAudioStream *))SAMP_ADDROF(0x65D10))(this);
}

BOOL SAMP::CAudioStream::Stop(bool bWait) {
	return ((BOOL(__thiscall *)(CAudioStream *, bool))SAMP_ADDROF(0x65DF0))(this, bWait);
}

BOOL SAMP::CAudioStream::Play(const char *szUrl, CVector position, float fRadius, bool bIs3d) {
	return ((BOOL(__thiscall *)(CAudioStream *, const char *, CVector, float, bool))SAMP_ADDROF(0x661F0))(this, szUrl, position, fRadius, bIs3d);
}

void SAMP::CAudioStream::ControlGameRadio() {
	((void(__thiscall *)(CAudioStream *))SAMP_ADDROF(0x66310))(this);
}

void SAMP::CAudioStream::DrawInfo() {
	((void(__thiscall *)(CAudioStream *))SAMP_ADDROF(0x66340))(this);
}

void SAMP::CAudioStream::ConstructInfo() {
	((void(__cdecl *)())SAMP_ADDROF(0x65E50))();
}

void SAMP::CAudioStream::SyncProc(int handle, int channel, int data, void *user) {
	((void(__stdcall *)(int, int, int, void *))SAMP_ADDROF(0x65F80))(handle, channel, data, user);
}

void SAMP::CAudioStream::Process(void *arglist) {
	((void(__cdecl *)(void *))SAMP_ADDROF(0x65F90))(arglist);
}