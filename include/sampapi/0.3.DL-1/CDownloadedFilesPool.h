/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"

SAMPAPI_BEGIN_PACKED_V03DL_1

struct SAMPAPI_EXPORT DownloadedFileInfo {
    int m_nFileNumber;
    char m_nFileType;
    int m_szFileId;
    char m_nFileState;
    int m_nFileDownloaded;
    int m_nFileRemainDownload;
};
struct SAMPAPI_EXPORT CDownloadedFilesPool {
    DownloadedFileInfo *m_pObject[20000];
};

SAMPAPI_END_PACKED
