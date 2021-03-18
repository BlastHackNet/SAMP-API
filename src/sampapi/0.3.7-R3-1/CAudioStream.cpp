/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CAudioStream.h"

SAMPAPI_BEGIN_V037R3_1

SAMPAPI_VAR int& CAudioStream::RefStream() {
    return *(int*)GetAddress(0x12E68C);
}

SAMPAPI_VAR bool& CAudioStream::RefIsPlaying() {
    return *(bool*)GetAddress(0x12E690);
}

SAMPAPI_VAR CVector& CAudioStream::RefPosition() {
    return *(CVector*)GetAddress(0x12E694);
}

SAMPAPI_VAR bool& CAudioStream::RefIs3d() {
    return *(bool*)GetAddress(0x12E6A0);
}

SAMPAPI_VAR char* CAudioStream::ArrayIcyUrl() {
    return (char*)GetAddress(0x12E588);
}

SAMPAPI_VAR char* CAudioStream::ArrayInfo() {
    return (char*)GetAddress(0x12E480);
}

SAMPAPI_VAR char* CAudioStream::ArrayUrl() {
    return (char*)GetAddress(0x12E378);
}

SAMPAPI_VAR bool& CAudioStream::RefNeedsToDestroy() {
    return *(bool*)GetAddress(0x1027BA);
}

SAMPAPI_VAR float& CAudioStream::RefRadius() {
    return *(float*)GetAddress(0x1027BC);
}

SAMPAPI_VAR char* CAudioStream::ArrayIcyName() {
    return (char*)GetAddress(0x12E270);
}

SAMPAPI_VAR CAudioStream*& RefAudioStream() {
    return *(CAudioStream**)GetAddress(0x26E8D4);
}

BOOL CAudioStream::Reset() {
    return ((BOOL(__thiscall*)(CAudioStream*))GetAddress(0x65D10))(this);
}

BOOL CAudioStream::Stop(bool bWait) {
    return ((BOOL(__thiscall*)(CAudioStream*, bool))GetAddress(0x65DF0))(this, bWait);
}

BOOL CAudioStream::Play(const char* szUrl, CVector position, float fRadius, bool bIs3d) {
    return ((BOOL(__thiscall*)(CAudioStream*, const char*, CVector, float, bool))GetAddress(0x661F0))(this, szUrl, position, fRadius, bIs3d);
}

void CAudioStream::ControlGameRadio() {
    ((void(__thiscall*)(CAudioStream*))GetAddress(0x66310))(this);
}

void CAudioStream::DrawInfo() {
    ((void(__thiscall*)(CAudioStream*))GetAddress(0x66340))(this);
}

void CAudioStream::ConstructInfo() {
    ((void(__cdecl*)())GetAddress(0x65E50))();
}

void CAudioStream::SyncProc(int handle, int channel, int data, void* user) {
    ((void(__stdcall*)(int, int, int, void*))GetAddress(0x65F80))(handle, channel, data, user);
}

void CAudioStream::Process(void* arglist) {
    ((void(__cdecl*)(void*))GetAddress(0x65F90))(arglist);
}

SAMPAPI_END
