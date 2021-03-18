/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CAudioStream.h"

SAMPAPI_BEGIN_V037R1

SAMPAPI_VAR int& CAudioStream::RefStream() {
    return *(int*)GetAddress(0x11A60C);
}

SAMPAPI_VAR bool& CAudioStream::RefNeedsToDestroy() {
    return *(bool*)GetAddress(0xF03AA);
}

SAMPAPI_VAR CVector& CAudioStream::RefPosition() {
    return *(CVector*)GetAddress(0x11A614);
}

SAMPAPI_VAR bool& CAudioStream::RefIsPlaying() {
    return *(bool*)GetAddress(0x11A610);
}

SAMPAPI_VAR char* CAudioStream::ArrayUrl() {
    return (char*)GetAddress(0x11A2F8);
}

SAMPAPI_VAR bool& CAudioStream::RefIs3d() {
    return *(bool*)GetAddress(0x11A620);
}

SAMPAPI_VAR CAudioStream*& RefAudioStream() {
    return *(CAudioStream**)GetAddress(0x21A0F0);
}

SAMPAPI_VAR char* CAudioStream::ArrayInfo() {
    return (char*)GetAddress(0x11A400);
}

SAMPAPI_VAR char* CAudioStream::ArrayIcyName() {
    return (char*)GetAddress(0x11A1F0);
}

SAMPAPI_VAR char* CAudioStream::ArrayIcyUrl() {
    return (char*)GetAddress(0x11A508);
}

SAMPAPI_VAR float& CAudioStream::RefRadius() {
    return *(float*)GetAddress(0xF03AC);
}

BOOL CAudioStream::Reset() {
    return ((BOOL(__thiscall*)(CAudioStream*))GetAddress(0x628C0))(this);
}

BOOL CAudioStream::Stop(bool bWait) {
    return ((BOOL(__thiscall*)(CAudioStream*, bool))GetAddress(0x629A0))(this, bWait);
}

void CAudioStream::ConstructInfo() {
    ((void(__cdecl*)())GetAddress(0x62A00))();
}

void CAudioStream::SyncProc(int handle, int channel, int data, void* user) {
    ((void(__stdcall*)(int, int, int, void*))GetAddress(0x62B30))(handle, channel, data, user);
}

void CAudioStream::Process(void* arglist) {
    ((void(__cdecl*)(void*))GetAddress(0x62B40))(arglist);
}

BOOL CAudioStream::Play(const char* szUrl, CVector position, float fRadius, bool bIs3d) {
    return ((BOOL(__thiscall*)(CAudioStream*, const char*, CVector, float, bool))GetAddress(0x62DA0))(this, szUrl, position, fRadius, bIs3d);
}

void CAudioStream::ControlGameRadio() {
    ((void(__thiscall*)(CAudioStream*))GetAddress(0x62EC0))(this);
}

void CAudioStream::DrawInfo() {
    ((void(__thiscall*)(CAudioStream*))GetAddress(0x62EF0))(this);
}

SAMPAPI_END
