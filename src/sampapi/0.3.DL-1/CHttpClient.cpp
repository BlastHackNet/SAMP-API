/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CHttpClient.h"

SAMPAPI_BEGIN_V03DL_1

CHttpClient::CHttpClient() {
    ((void(__thiscall*)(CHttpClient*))GetAddress(0x2310))(this);
}

CHttpClient::~CHttpClient() {
    ((void(__thiscall*)(CHttpClient*))GetAddress(0x2370))(this);
}

bool CHttpClient::GetHeaderValue(const char* szHeaderName, char* szBuffer, int nBufferLen) {
    return ((bool(__thiscall*)(CHttpClient*, const char*, char*, int))GetAddress(0x23E0))(this, szHeaderName, szBuffer, nBufferLen);
}

void CHttpClient::InitializeRequest(int nType, const char* szUrl, const char* szPostData, const char* szReferer) {
    ((void(__thiscall*)(CHttpClient*, int, const char*, const char*, const char*))GetAddress(0x24E0))(this, nType, szUrl, szPostData, szReferer);
}

void CHttpClient::HandleEntity() {
    ((void(__thiscall*)(CHttpClient*))GetAddress(0x26B0))(this);
}

bool CHttpClient::Connect(const char* szHost, int nPort) {
    return ((bool(__thiscall*)(CHttpClient*, const char*, int))GetAddress(0x29D0))(this, szHost, nPort);
}

void CHttpClient::Process() {
    ((void(__thiscall*)(CHttpClient*))GetAddress(0x2A90))(this);
}

void CHttpClient::Disconnect() {
    ((void(__thiscall*)(CHttpClient*))GetAddress(0x2470))(this);
}

CHttpClient::ErrorCode CHttpClient::ProcessUrl(int nType, const char* szUrl, const char* szPostData, const char* szReferer) {
    return ((ErrorCode(__thiscall*)(CHttpClient*, int, const char*, const char*, const char*))GetAddress(0x2C70))(this, nType, szUrl, szPostData, szReferer);
}

bool CHttpClient::Send(const char* szBuffer) {
    return ((bool(__thiscall*)(CHttpClient*, const char*))GetAddress(0x2480))(this, szBuffer);
}

int CHttpClient::Receive(char* szBuffer, int nBufferLen) {
    return ((int(__thiscall*)(CHttpClient*, char*, int))GetAddress(0x24C0))(this, szBuffer, nBufferLen);
}

SAMPAPI_END
