/*
	This is a SAMP API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#define SAMP_API

#define SAMP_BEGIN_NP namespace SAMP {
#define SAMP_END_NP }

#define SAMP_BEGIN __pragma(pack(push, 1)) namespace SAMP { 
#define SAMP_END } __pragma(pack(pop))

#define SAMP_ADDROF(_OFFSET) (SAMP::GetHandle() + _OFFSET)

#define SAMP_UNUSED 0

#define SAMP_VIRTUAL {}

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

typedef unsigned long D3DCOLOR;
typedef unsigned long TICK;
typedef int BOOL;

namespace SAMP {
	typedef int GTAREF; // a gta pool reference (scm handle)
	typedef unsigned short ID;  // player, vehicle, object, etc
	typedef unsigned char NUMBER;

	unsigned long GetHandle();
}
