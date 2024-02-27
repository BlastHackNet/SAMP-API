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
#define SAMPAPI_VERSION   2
#define SAMPAPI_NAMESPACE sampapi
#ifdef _MSC_VER
#define SAMPAPI_PRAGMA(x) __pragma(x)
#else
#define SAMPAPI_PRAGMA(x) _Pragma(#x)
#endif
#define SAMPAPI_PACK_PUSH SAMPAPI_PRAGMA(pack(push, 1))
#define SAMPAPI_PACK_POP  SAMPAPI_PRAGMA(pack(pop))
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
#define SAMPAPI_BEGIN_COMMON namespace SAMPAPI_NAMESPACE {
#define SAMPAPI_END_COMMON   }
#define SAMPAPI_UNUSED       0
#define SAMPAPI_VAR

#define SAMPAPI_BEGIN_V037R1        SAMPAPI_NAMESPACE_BEGIN(v037r1)
#define SAMPAPI_BEGIN_PACKED_V037R1 SAMPAPI_NAMESPACE_BEGIN_PACKED(v037r1)

#define SAMPAPI_BEGIN_V037R3_1        SAMPAPI_NAMESPACE_BEGIN(v037r3)
#define SAMPAPI_BEGIN_PACKED_V037R3_1 SAMPAPI_NAMESPACE_BEGIN_PACKED(v037r3)

#define SAMPAPI_BEGIN_V037R5_1        SAMPAPI_NAMESPACE_BEGIN(v037r5)
#define SAMPAPI_BEGIN_PACKED_V037R5_1 SAMPAPI_NAMESPACE_BEGIN_PACKED(v037r5)

#define SAMPAPI_BEGIN_V03DL_1        SAMPAPI_NAMESPACE_BEGIN(v03dl)
#define SAMPAPI_BEGIN_PACKED_V03DL_1 SAMPAPI_NAMESPACE_BEGIN_PACKED(v03dl)

struct ID3DXFont;
struct ID3DXSprite;
struct ID3DXRenderToSurface;
struct ID3DXLine;

struct IDirect3DSurface9;
struct IDirect3DTexture9;
struct IDirect3DDevice9;
struct IDirect3DStateBlock9;

class CDXUTDialog;
class CDXUTListBox;
class CDXUTEditBox;
class CDXUTScrollBar;
class CDXUTIMEEditBox;

SAMPAPI_BEGIN_COMMON

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

SAMPAPI_END_COMMON
