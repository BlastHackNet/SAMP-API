/*
	This is a SAMP API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#ifndef SAMPAPI_EXPORT
#define SAMPAPI_EXPORT
#endif
#define SAMPAPI_VERSION   1
#define SAMPAPI_NAMESPACE sampapi
#define SAMPAPI_PACK_PUSH __pragma(pack(push, 1))
#define SAMPAPI_PACK_POP  __pragma(pack(pop))
#define SAMPAPI_NAMESPACE_BEGIN(ns) \
    namespace SAMPAPI_NAMESPACE { \
        namespace ns {
#define SAMPAPI_NAMESPACE_BEGIN_PACKED(ns) \
    SAMPAPI_PACK_PUSH \
    SAMPAPI_NAMESPACE_BEGIN(ns)
#define SAMPAPI_END \
    } \
    }
#define SAMPAPI_END_PACKED \
    } \
    } \
    SAMPAPI_PACK_POP
#define SAMPAPI_COMMON_BEGIN namespace SAMPAPI_NAMESPACE {
#define SAMPAPI_COMMON_END   }
#define SAMPAPI_UNUSED       0
#define SAMPAPI_VAR

struct ID3DXFont;
struct ID3DXSprite;
struct ID3DXRenderToSurface;

struct IDirect3DSurface9;
struct IDirect3DTexture9;
struct IDirect3DDevice9;
struct IDirect3DStateBlock9;

class CDXUTDialog;
class CDXUTListBox;
class CDXUTEditBox;
class CDXUTScrollBar;
class CDXUTIMEEditBox;

SAMPAPI_COMMON_BEGIN

typedef unsigned long D3DCOLOR;
typedef unsigned long TICK;
typedef int           BOOL;

typedef int            GTAREF; // gta pool reference (scm handle)
typedef unsigned short ID;     // player, vehicle, object, etc
typedef unsigned char  NUMBER;
typedef void(__cdecl* CMDPROC)(const char*);

unsigned long SAMPAPI_EXPORT GetBase();
unsigned int SAMPAPI_EXPORT  GetAPIVersion();

inline unsigned long GetAddress(signed long offset) {
    return GetBase() + offset;
}

SAMPAPI_COMMON_END
