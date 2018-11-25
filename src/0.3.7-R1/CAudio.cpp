/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CAudio.h"

void SAMP::CAudio::PlaySound(int nSound, CVector vPosition) {
	((void(__thiscall *)(CAudio *, int, CVector))SAMP_ADDROF(0x9D730))(this, nSound, vPosition);
}

void SAMP::CAudio::StartGameRadio(unsigned char nStation) {
	((void(__thiscall *)(CAudio *, unsigned char))SAMP_ADDROF(0x9D860))(this, nStation);
}