/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/KeyStuff.h"

SAMPAPI_BEGIN_V037R3_1

SAMPAPI_VAR CPad& KeyStuff::RefLocalPlayerKeys() {
    return *(CPad*)GetAddress(0x152518);
}

SAMPAPI_VAR CPad* KeyStuff::ArrayPlayerKeys() {
    return (CPad*)GetAddress(0x152650);
}

SAMPAPI_VAR CPad*& KeyStuff::RefInternalKeys() {
    return *(CPad**)GetAddress(0x114AD0);
}

SAMPAPI_VAR bool*& KeyStuff::RefDriveByLeft() {
    return *(bool**)GetAddress(0x114AD4);
}

SAMPAPI_VAR bool*& KeyStuff::RefDriveByRight() {
    return *(bool**)GetAddress(0x114AD8);
}

SAMPAPI_VAR bool& KeyStuff::RefSavedDriveByLeft() {
    return *(bool*)GetAddress(0x1622F8);
}

SAMPAPI_VAR bool& KeyStuff::RefSavedDriveByRight() {
    return *(bool*)GetAddress(0x1622F9);
}

void KeyStuff::Initialize() {
    ((void(__cdecl*)())GetAddress(0xA6B60))();
}

void KeyStuff::UpdateKeys() {
    ((void(__cdecl*)())GetAddress(0xA6B80))();
}

void KeyStuff::ApplyKeys() {
    ((void(__cdecl*)())GetAddress(0xA6BC0))();
}

void KeyStuff::SetKeys(int nPlayer, const CPad* pKeys) {
    ((void(__cdecl*)(int, const CPad*))GetAddress(0xA6C00))(nPlayer, pKeys);
}

void KeyStuff::ApplyKeys(int nPlayer) {
    ((void(__cdecl*)(int))GetAddress(0xA6C20))(nPlayer);
}

CPad* KeyStuff::GetInternalKeys() {
    return ((::CPad * (__cdecl*)()) GetAddress(0xA6C70))();
}

CPad* KeyStuff::GetKeys() {
    return ((::CPad * (__cdecl*)()) GetAddress(0xA6C80))();
}

CPad* KeyStuff::GetKeys(int nPlayer) {
    return ((::CPad * (__cdecl*)(int)) GetAddress(0xA6C90))(nPlayer);
}

void KeyStuff::ResetKeys(int nPlayer) {
    ((void(__cdecl*)(int))GetAddress(0xA6CA0))(nPlayer);
}

void KeyStuff::ResetInternalKeys() {
    ((void(__cdecl*)())GetAddress(0xA6CC0))();
}

SAMPAPI_END
