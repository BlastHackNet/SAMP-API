/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/KeyStuff.h"

SAMPAPI_BEGIN_V037R1

SAMPAPI_VAR CPad*& KeyStuff::RefInternalKeys() {
    return *(CPad**)GetAddress(0x1016E8);
}

SAMPAPI_VAR CPad& KeyStuff::RefLocalPlayerKeys() {
    return *(CPad*)GetAddress(0x13D2C0);
}

SAMPAPI_VAR CPad* KeyStuff::ArrayPlayerKeys() {
    return (CPad*)GetAddress(0x13D3F8);
}

SAMPAPI_VAR bool*& KeyStuff::RefDriveByLeft() {
    return *(bool**)GetAddress(0x1016EC);
}

SAMPAPI_VAR bool*& KeyStuff::RefDriveByRight() {
    return *(bool**)GetAddress(0x1016F0);
}

SAMPAPI_VAR bool& KeyStuff::RefSavedDriveByLeft() {
    return *(bool*)GetAddress(0x14D0A0);
}

SAMPAPI_VAR bool& KeyStuff::RefSavedDriveByRight() {
    return *(bool*)GetAddress(0x14D0A1);
}

void KeyStuff::Initialize() {
    ((void(__cdecl*)())GetAddress(0xA2240))();
}

void KeyStuff::ApplyKeys() {
    ((void(__cdecl*)())GetAddress(0xA2260))();
}

void KeyStuff::UpdateKeys() {
    ((void(__cdecl*)())GetAddress(0xA22A0))();
}

void KeyStuff::SetKeys(int nPlayerNumber, const CPad* pPad) {
    ((void(__cdecl*)(int, const CPad*))GetAddress(0xA22E0))(nPlayerNumber, pPad);
}

void KeyStuff::ApplyKeys(int nPlayerNumber) {
    ((void(__cdecl*)(int))GetAddress(0xA2300))(nPlayerNumber);
}

CPad* KeyStuff::GetInternalKeys() {
    return ((CPad * (__cdecl*)()) GetAddress(0xA2350))();
}

CPad* KeyStuff::GetKeys(int nPlayerNumber) {
    return ((CPad * (__cdecl*)(int)) GetAddress(0xA2370))(nPlayerNumber);
}

void KeyStuff::ResetKeys(int nPlayerNumber) {
    ((void(__cdecl*)(int))GetAddress(0xA2380))(nPlayerNumber);
}

void KeyStuff::ResetInternalKeys() {
    ((void(__cdecl*)())GetAddress(0xA23A0))();
}

CPad* KeyStuff::GetKeys() {
    return ((::CPad * (__cdecl*)()) GetAddress(0xA2360))();
}

SAMPAPI_END
