/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"

SAMPAPI_BEGIN_PACKED_V03DL_1

class SAMPAPI_EXPORT CHttpClient {
public:
    enum {
        RECEIVE_BUFFER_SIZE = 4096
    };

    struct SAMPAPI_EXPORT Request {
        enum RequestType {
            GET = 1,
            POST,
            HEAD
        };

        unsigned short m_nPort;
        int            m_nType;
        char*          m_szHost;
        char*          m_szFile;
        char*          m_szData;
        char*          m_szReferer;
    };

    struct SAMPAPI_EXPORT Response {
        enum ContentType {
            CONTENT_UNKNOWN,
            CONTENT_TEXT,
            CONTENT_HTML
        };

        char*        m_szHeader;
        char*        m_szResponse;
        unsigned int m_nHeaderLen;
        unsigned int m_nResponseLen;
        unsigned int m_nResponseCode;
        unsigned int m_nContentType;
    };

    enum ErrorCode {
        ERROR_SUCCESS,
        ERROR_BAD_HOST,
        ERROR_NO_SOCKET,
        ERROR_CANNOT_CONNECT,
        ERROR_CANNOT_WRITE,
        ERROR_TOO_BIG_CONTENT,
        ERROR_INCORRECT_RESPONSE
    };

    int       m_nSocket;
    Request   m_request;
    Response  m_response;
    ErrorCode m_error;

    CHttpClient();
    ~CHttpClient();

    bool      GetHeaderValue(const char* szHeaderName, char* szBuffer, int nBufferLen);
    void      InitializeRequest(int nType, const char* szUrl, const char* szPostData, const char* szReferer);
    void      HandleEntity();
    bool      Connect(const char* szHost, int nPort);
    void      Process();
    void      Disconnect();
    ErrorCode ProcessUrl(int nType, const char* szUrl, const char* szPostData, const char* szReferer);
    bool      Send(const char* szBuffer);
    int       Receive(char* szBuffer, int nBufferLen);
};

SAMPAPI_END_PACKED
