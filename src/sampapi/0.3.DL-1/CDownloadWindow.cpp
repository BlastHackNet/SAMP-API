/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CDownloadWindow.h"

SAMPAPI_BEGIN_V03DL_1

SAMPAPI_VAR CDownloadWindow*& RefDownloadWindow() {
    return *(CDownloadWindow**)GetAddress(0x2AC9E8);
}

CDownloadWindow::CDownloadWindow(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CDownloadWindow*, IDirect3DDevice9*))GetAddress(0x6AA10))(this, pDevice);
}

CDownloadWindow::~CDownloadWindow() {
    ((void(__thiscall*)(CDownloadWindow*))GetAddress(0x6A6E0))(this);
}

void CDownloadWindow::GetScreenRect(CRect* pRect) {
    ((void(__thiscall*)(CDownloadWindow*, CRect*))GetAddress(0x6A280))(this, pRect);
}

void CDownloadWindow::DoesExist(int nFileId) {
    ((void(__thiscall*)(CDownloadWindow*, int))GetAddress(0x6A610))(this, nFileId);
}

void CDownloadWindow::AddEntry(char nFileType, int nFileId, char nFileState, int a5, int a6, int a7, int a8) {
    ((void(__thiscall*)(CDownloadWindow*, char, int, char, int, int, int, int))GetAddress(0x6A720))(this, nFileType, nFileId, nFileState, a5, a6, a7, a8);
}

void CDownloadWindow::Show() {
    ((void(__thiscall*)(CDownloadWindow*))GetAddress(0x6A2B0))(this);
}

void CDownloadWindow::Draw() {
    ((void(__thiscall*)(CDownloadWindow*))GetAddress(0x6A350))(this);
}
SAMPAPI_END