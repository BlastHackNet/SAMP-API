/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CConfig.h"

SAMPAPI_BEGIN_V037R5_1

SAMPAPI_VAR CConfig*& RefConfig() {
    return *(CConfig**)GetAddress(0x26EB7C);
}

CConfig::CConfig(const char* szFile) {
    ((void(__thiscall*)(CConfig*, const char*))GetAddress(0x663E0))(this, szFile);
}

CConfig::~CConfig() {
    ((void(__thiscall*)(CConfig*))GetAddress(0x65C00))(this);
}

void CConfig::FindFirstFree() {
    ((void(__thiscall*)(CConfig*))GetAddress(0x65C40))(this);
}

int CConfig::GetIndex(const char* szEntry) {
    return ((int(__thiscall*)(CConfig*, const char*))GetAddress(0x65C90))(this, szEntry);
}

bool CConfig::DoesExist(const char* szEntry) {
    return ((bool(__thiscall*)(CConfig*, const char*))GetAddress(0x65D30))(this, szEntry);
}

int CConfig::CreateEntry(const char* szName) {
    return ((int(__thiscall*)(CConfig*, const char*))GetAddress(0x65D50))(this, szName);
}

int CConfig::GetIntValue(const char* szEntry) {
    return ((int(__thiscall*)(CConfig*, const char*))GetAddress(0x65E10))(this, szEntry);
}

const char* CConfig::GetStringValue(const char* szEntry) {
    return ((const char*(__thiscall*)(CConfig*, const char*))GetAddress(0x65E40))(this, szEntry);
}

float CConfig::GetFloatValue(const char* szEntry) {
    return ((float(__thiscall*)(CConfig*, const char*))GetAddress(0x65E70))(this, szEntry);
}

BOOL CConfig::Free(const char* szEntry) {
    return ((BOOL(__thiscall*)(CConfig*, const char*))GetAddress(0x65EA0))(this, szEntry);
}

int CConfig::GetValueType(const char* szEntry) {
    return ((int(__thiscall*)(CConfig*, const char*))GetAddress(0x65F00))(this, szEntry);
}

CConfig::ConfigEntry* CConfig::GetEntry(int nIndex) {
    return ((ConfigEntry * (__thiscall*)(CConfig*, int)) GetAddress(0x65F30))(this, nIndex);
}

int CConfig::GetType(const char* szString) {
    return ((int(__thiscall*)(CConfig*, const char*))GetAddress(0x65F60))(this, szString);
}

BOOL CConfig::Save() {
    return ((BOOL(__thiscall*)(CConfig*))GetAddress(0x65FD0))(this);
}

BOOL CConfig::WriteIntValue(const char* szEntry, int nValue, BOOL bReadOnly) {
    return ((BOOL(__thiscall*)(CConfig*, const char*, int, BOOL))GetAddress(0x66080))(this, szEntry, nValue, bReadOnly);
}

BOOL CConfig::WriteStringValue(const char* szEntry, const char* szValue, BOOL bReadOnly) {
    return ((BOOL(__thiscall*)(CConfig*, const char*, const char*, BOOL))GetAddress(0x660E0))(this, szEntry, szValue, bReadOnly);
}

BOOL CConfig::WriteFloatValue(const char* szEntry, float fValue, BOOL bReadOnly) {
    return ((BOOL(__thiscall*)(CConfig*, const char*, float, BOOL))GetAddress(0x66180))(this, szEntry, fValue, bReadOnly);
}

void CConfig::Write(const char* szEntry, char* szBuffer) {
    ((void(__thiscall*)(CConfig*, const char*, char*))GetAddress(0x661E0))(this, szEntry, szBuffer);
}

BOOL CConfig::Load() {
    return ((BOOL(__thiscall*)(CConfig*))GetAddress(0x66270))(this);
}

SAMPAPI_END
