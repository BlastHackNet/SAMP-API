/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/KeyStuff.h"

SAMPAPI_BEGIN_V037R5_1

SAMPAPI_VAR CPad& KeyStuff::RefLocalPlayerKeys() {
    return *(CPad*)GetAddress(0x1527C8);
}

SAMPAPI_VAR CPad* KeyStuff::ArrayPlayerKeys() {
    return (CPad*)GetAddress(0x152900);
}

SAMPAPI_VAR CPad*& KeyStuff::RefInternalKeys() {
    return *(CPad**)GetAddress(0x114AE8);
}

SAMPAPI_VAR bool*& KeyStuff::RefDriveByLeft() {
    return *(bool**)GetAddress(0x114AEC);
}

SAMPAPI_VAR bool*& KeyStuff::RefDriveByRight() {
    return *(bool**)GetAddress(0x114AF0);
}

SAMPAPI_VAR bool& KeyStuff::RefSavedDriveByLeft() {
    return *(bool*)GetAddress(0x1625A8);
}

SAMPAPI_VAR bool& KeyStuff::RefSavedDriveByRight() {
    return *(bool*)GetAddress(0x1625A9);
}

void KeyStuff::Initialize() {
    ((void(__cdecl*)())GetAddress(0xA72A0))();
}

void KeyStuff::UpdateKeys() {
    ((void(__cdecl*)())GetAddress(0xA72C0))();
}

void KeyStuff::ApplyKeys() {
    ((void(__cdecl*)())GetAddress(0xA7300))();
}

void KeyStuff::SetKeys(int nPlayer, const CPad* pKeys) {
    ((void(__cdecl*)(int, const CPad*))GetAddress(0xA7340))(nPlayer, pKeys);
}

void KeyStuff::ApplyKeys(int nPlayer) {
    ((void(__cdecl*)(int))GetAddress(0xA7360))(nPlayer);
}

CPad* KeyStuff::GetInternalKeys() {
    return ((::CPad * (__cdecl*)()) GetAddress(0xA73B0))();
}

CPad* KeyStuff::GetKeys() {
    return ((::CPad * (__cdecl*)()) GetAddress(0xA73C0))();
}

CPad* KeyStuff::GetKeys(int nPlayer) {
    return ((::CPad * (__cdecl*)(int)) GetAddress(0xA73D0))(nPlayer);
}

void KeyStuff::ResetKeys(int nPlayer) {
    ((void(__cdecl*)(int))GetAddress(0xA73E0))(nPlayer);
}

void KeyStuff::ResetInternalKeys() {
    ((void(__cdecl*)())GetAddress(0xA7400))();
}

SAMPAPI_END
