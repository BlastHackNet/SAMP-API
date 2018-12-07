/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "VehicleSelection.h"

SAMP::CCamera *&SAMP::VehicleSelection::pCamera = *(SAMP::CCamera **)SAMP_ADDROF(0x13BA7C);
SAMP::CVehicle *&SAMP::VehicleSelection::pVehicle = *(SAMP::CVehicle **)SAMP_ADDROF(0x13BB64);
CPad *&SAMP::VehicleSelection::pControls = *(CPad **)SAMP_ADDROF(0x13BA78);
BOOL &SAMP::VehicleSelection::bInitialized = *(BOOL *)SAMP_ADDROF(0x13BB60);
int &SAMP::VehicleSelection::nSelectedModel = *(int *)SAMP_ADDROF(0x1014B4);

void SAMP::VehicleSelection::ResetVehicle() {
	((void(__cdecl *)())SAMP_ADDROF(0x99710))();
}

void SAMP::VehicleSelection::Process() {
	((void(__cdecl *)())SAMP_ADDROF(0x99AD0))();
}