/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CAudioStream.h"

SAMPAPI_BEGIN_V03DL_1

SAMPAPI_VAR int& CAudioStream::RefStream() {
    return *(int*)GetAddress(0x16C7CC);
}

SAMPAPI_VAR bool& CAudioStream::RefIsPlaying() {
    return *(bool*)GetAddress(0x16C7D0);
}

SAMPAPI_VAR CVector& CAudioStream::RefPosition() {
    return *(CVector*)GetAddress(0x16C7D4);
}

SAMPAPI_VAR bool& CAudioStream::RefIs3d() {
    return *(bool*)GetAddress(0x16C7E0);
}

SAMPAPI_VAR char* CAudioStream::ArrayIcyUrl() {
    return (char*)GetAddress(0x16C6C8);
}

SAMPAPI_VAR char* CAudioStream::ArrayInfo() {
    return (char*)GetAddress(0x16C5C0);
}

SAMPAPI_VAR char* CAudioStream::ArrayUrl() {
    return (char*)GetAddress(0x16C4B8);
}

SAMPAPI_VAR bool& CAudioStream::RefNeedsToDestroy() {
    return *(bool*)GetAddress(0x1407BA);
}

SAMPAPI_VAR float& CAudioStream::RefRadius() {
    return *(float*)GetAddress(0x1407BC);
}

SAMPAPI_VAR char* CAudioStream::ArrayIcyName() {
    return (char*)GetAddress(0x16C3B0);
}

SAMPAPI_VAR CAudioStream*& RefAudioStream() {
    return *(CAudioStream**)GetAddress(0x2ACA1C);
}

BOOL CAudioStream::Reset() {
    return ((BOOL(__thiscall*)(CAudioStream*))GetAddress(0x65F00))(this);
}

BOOL CAudioStream::Stop(bool bWait) {
    return ((BOOL(__thiscall*)(CAudioStream*, bool))GetAddress(0x65FE0))(this, bWait);
}

BOOL CAudioStream::Play(const char* szUrl, CVector position, float fRadius, bool bIs3d) {
    return ((BOOL(__thiscall*)(CAudioStream*, const char*, CVector, float, bool))GetAddress(0x663E0))(this, szUrl, position, fRadius, bIs3d);
}

void CAudioStream::ControlGameRadio() {
    ((void(__thiscall*)(CAudioStream*))GetAddress(0x66500))(this);
}

void CAudioStream::DrawInfo() {
    ((void(__thiscall*)(CAudioStream*))GetAddress(0x66530))(this);
}

void CAudioStream::ConstructInfo() {
    ((void(__cdecl*)())GetAddress(0x66040))();
}

void CAudioStream::SyncProc(int handle, int channel, int data, void* user) {
    ((void(__stdcall*)(int, int, int, void*))GetAddress(0x66170))(handle, channel, data, user);
}

void CAudioStream::Process(void* arglist) {
    ((void(__cdecl*)(void*))GetAddress(0x66180))(arglist);
}

SAMPAPI_END
