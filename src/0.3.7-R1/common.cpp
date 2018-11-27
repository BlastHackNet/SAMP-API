/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "common.h"
#include <Windows.h>

unsigned long SAMP::dwHandle = reinterpret_cast<unsigned long>(GetModuleHandleA("samp.dll"));
