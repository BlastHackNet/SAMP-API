/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/KeyStuff.h"

SAMPAPI_BEGIN_V03DL_1

SAMPAPI_VAR CPad& KeyStuff::RefLocalPlayerKeys() {
    return *(CPad*)GetAddress(0x190660);
}

SAMPAPI_VAR CPad* KeyStuff::ArrayPlayerKeys() {
    return (CPad*)GetAddress(0x190798);
}

SAMPAPI_VAR CPad*& KeyStuff::RefInternalKeys() {
    return *(CPad**)GetAddress(0x152AC0);
}

SAMPAPI_VAR bool*& KeyStuff::RefDriveByLeft() {
    return *(bool**)GetAddress(0x152AC4);
}

SAMPAPI_VAR bool*& KeyStuff::RefDriveByRight() {
    return *(bool**)GetAddress(0x152AC8);
}

SAMPAPI_VAR bool& KeyStuff::RefSavedDriveByLeft() {
    return *(bool*)GetAddress(0x1A0440);
}

SAMPAPI_VAR bool& KeyStuff::RefSavedDriveByRight() {
    return *(bool*)GetAddress(0x1A0441);
}

void KeyStuff::Initialize() {
    ((void(__cdecl*)())GetAddress(0xA6FE0))();
}

void KeyStuff::UpdateKeys() {
    ((void(__cdecl*)())GetAddress(0xA7000))();
}

void KeyStuff::ApplyKeys() {
    ((void(__cdecl*)())GetAddress(0xA7040))();
}

void KeyStuff::SetKeys(int nPlayer, const CPad* pKeys) {
    ((void(__cdecl*)(int, const CPad*))GetAddress(0xA7080))(nPlayer, pKeys);
}

void KeyStuff::ApplyKeys(int nPlayer) {
    ((void(__cdecl*)(int))GetAddress(0xA70A0))(nPlayer);
}

CPad* KeyStuff::GetInternalKeys() {
    return ((::CPad * (__cdecl*)()) GetAddress(0xA70F0))();
}

CPad* KeyStuff::GetKeys() {
    return ((::CPad * (__cdecl*)()) GetAddress(0xA7100))();
}

CPad* KeyStuff::GetKeys(int nPlayer) {
    return ((::CPad * (__cdecl*)(int)) GetAddress(0xA7110))(nPlayer);
}

void KeyStuff::ResetKeys(int nPlayer) {
    ((void(__cdecl*)(int))GetAddress(0xA7120))(nPlayer);
}

void KeyStuff::ResetInternalKeys() {
    ((void(__cdecl*)())GetAddress(0xA7140))();
}

SAMPAPI_END
