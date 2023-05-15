/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CAudioStream.h"

SAMPAPI_BEGIN_V037R5_1

SAMPAPI_VAR int& CAudioStream::RefStream() {
    return *(int*)GetAddress(0x12E7B4);
}

SAMPAPI_VAR bool& CAudioStream::RefIsPlaying() {
    return *(bool*)GetAddress(0x12E7B8);
}

SAMPAPI_VAR CVector& CAudioStream::RefPosition() {
    return *(CVector*)GetAddress(0x12E7BC);
}

SAMPAPI_VAR bool& CAudioStream::RefIs3d() {
    return *(bool*)GetAddress(0x12E7C8);
}

SAMPAPI_VAR char* CAudioStream::ArrayIcyUrl() {
    return (char*)GetAddress(0x12E6B0);
}

SAMPAPI_VAR char* CAudioStream::ArrayInfo() {
    return (char*)GetAddress(0x12E5A8);
}

SAMPAPI_VAR char* CAudioStream::ArrayUrl() {
    return (char*)GetAddress(0x12E4A0);
}

SAMPAPI_VAR bool& CAudioStream::RefNeedsToDestroy() {
    return *(bool*)GetAddress(0x1027D2);
}

SAMPAPI_VAR float& CAudioStream::RefRadius() {
    return *(float*)GetAddress(0x1027D4);
}

SAMPAPI_VAR char* CAudioStream::ArrayIcyName() {
    return (char*)GetAddress(0x12E398);
}

SAMPAPI_VAR CAudioStream*& RefAudioStream() {
    return *(CAudioStream**)GetAddress(0x26EB8C);
}

BOOL CAudioStream::Reset() {
    return ((BOOL(__thiscall*)(CAudioStream*))GetAddress(0x66480))(this);
}

BOOL CAudioStream::Stop(bool bWait) {
    return ((BOOL(__thiscall*)(CAudioStream*, bool))GetAddress(0x66560))(this, bWait);
}

BOOL CAudioStream::Play(const char* szUrl, CVector position, float fRadius, bool bIs3d) {
    return ((BOOL(__thiscall*)(CAudioStream*, const char*, CVector, float, bool))GetAddress(0x66960))(this, szUrl, position, fRadius, bIs3d);
}

void CAudioStream::ControlGameRadio() {
    ((void(__thiscall*)(CAudioStream*))GetAddress(0x66A80))(this);
}

void CAudioStream::DrawInfo() {
    ((void(__thiscall*)(CAudioStream*))GetAddress(0x66AB0))(this);
}

void CAudioStream::ConstructInfo() {
    ((void(__cdecl*)())GetAddress(0x665C0))();
}

void CAudioStream::SyncProc(int handle, int channel, int data, void* user) {
    ((void(__stdcall*)(int, int, int, void*))GetAddress(0x666F0))(handle, channel, data, user);
}

void CAudioStream::Process(void* arglist) {
    ((void(__cdecl*)(void*))GetAddress(0x66700))(arglist);
}

SAMPAPI_END
