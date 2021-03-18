/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CHttpClient.h"

SAMPAPI_BEGIN_V037R1

CHttpClient::CHttpClient() {
    ((void(__thiscall*)(CHttpClient*))GetAddress(0x22D0))(this);
}

CHttpClient::~CHttpClient() {
    ((void(__thiscall*)(CHttpClient*))GetAddress(0x2330))(this);
}

bool CHttpClient::GetHeaderValue(const char* szHeaderName, char* szBuffer, int nBufferLen) {
    return ((bool(__thiscall*)(CHttpClient*, const char*, char*, int))GetAddress(0x23A0))(this, szHeaderName, szBuffer, nBufferLen);
}

void CHttpClient::InitializeRequest(int nType, const char* szUrl, const char* szPostData, const char* szReferer) {
    ((void(__thiscall*)(CHttpClient*, int, const char*, const char*, const char*))GetAddress(0x24A0))(this, nType, szUrl, szPostData, szReferer);
}

void CHttpClient::HandleEntity() {
    ((void(__thiscall*)(CHttpClient*))GetAddress(0x2670))(this);
}

bool CHttpClient::Connect(const char* szHost, int nPort) {
    return ((bool(__thiscall*)(CHttpClient*, const char*, int))GetAddress(0x2990))(this, szHost, nPort);
}

void CHttpClient::Process() {
    ((void(__thiscall*)(CHttpClient*))GetAddress(0x2A50))(this);
}

void CHttpClient::Disconnect() {
    ((void(__thiscall*)(CHttpClient*))GetAddress(0x2430))(this);
}

CHttpClient::ErrorCode CHttpClient::ProcessUrl(int nType, const char* szUrl, const char* szPostData, const char* szReferer) {
    return ((ErrorCode(__thiscall*)(CHttpClient*, int, const char*, const char*, const char*))GetAddress(0x2C30))(this, nType, szUrl, szPostData, szReferer);
}

bool CHttpClient::Send(const char* szBuffer) {
    return ((bool(__thiscall*)(CHttpClient*, const char*))GetAddress(0x2440))(this, szBuffer);
}

int CHttpClient::Receive(char* szBuffer, int nBufferLen) {
    return ((int(__thiscall*)(CHttpClient*, char*, int))GetAddress(0x2480))(this, szBuffer, nBufferLen);
}

SAMPAPI_END
