/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/RPCHandlers.h"

SAMPAPI_BEGIN_V037R5_1

void RPCHandlers::ScrSetPlayerSkillLevel(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xF5E0))(pParams);
}

void RPCHandlers::ScrCreate3DTextLabel(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xF720))(pParams);
}

void RPCHandlers::ScrDestroy3DTextLabel(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xF8D0))(pParams);
}

void RPCHandlers::ScrChatBubble(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xF990))(pParams);
}

void RPCHandlers::ScrShowDialog(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xFAF0))(pParams);
}

void RPCHandlers::ScrSetCheckpoint(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x10170))(pParams);
}

void RPCHandlers::ScrDisableCheckpoint(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xE5A0))(pParams);
}

void RPCHandlers::ScrSetRaceCheckpoint(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x10280))(pParams);
}

void RPCHandlers::ScrDisableRaceCheckpoint(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xE5B0))(pParams);
}

void RPCHandlers::UpdateScoresPingsIps(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x103E0))(pParams);
}

void RPCHandlers::SrvNetStats(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xE5C0))(pParams);
}

void RPCHandlers::ScrGamemodeRestart(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xE650))(pParams);
}

void RPCHandlers::ConnectionRejected(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x10540))(pParams);
}

void RPCHandlers::ScrClientMessage(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xEF90))(pParams);
}

void RPCHandlers::ScrSetWorldTime(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xEEF0))(pParams);
}

void RPCHandlers::ScrCreatePickup(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xF080))(pParams);
}

void RPCHandlers::ScrDestroyPickup(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xF140))(pParams);
}

void RPCHandlers::ScrDestroyWeaponPickup(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xF1E0))(pParams);
}

void RPCHandlers::ScmEvent(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xF280))(pParams);
}

void RPCHandlers::ScrSetWeather(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xF370))(pParams);
}

void RPCHandlers::ScrSetPlayerTime(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xF420))(pParams);
}

void RPCHandlers::ScrToggleClock(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xF500))(pParams);
}

void RPCHandlers::ScrSetIngameTimer(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xFF30))(pParams);
}

void RPCHandlers::ScrWorldPlayerAdd(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x10B00))(pParams);
}

void RPCHandlers::ScrWorldPlayerDeath(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x10D40))(pParams);
}

void RPCHandlers::ScrWorldPlayerRemove(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x10E00))(pParams);
}

void RPCHandlers::ScrWorldVehicleAdd(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xE670))(pParams);
}

void RPCHandlers::ScrWorldVehicleRemove(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x10EE0))(pParams);
}

void RPCHandlers::DamageVehicle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x111C0))(pParams);
}

void RPCHandlers::ScrSetVehicleParamsEx(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x112F0))(pParams);
}

void RPCHandlers::EnterVehicle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x115D0))(pParams);
}

void RPCHandlers::ExitVehicle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x116F0))(pParams);
}

void RPCHandlers::ScrServerJoin(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xFCE0))(pParams);
}

void RPCHandlers::ScrServerQuit(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xFE70))(pParams);
}

void RPCHandlers::ScrInitGame(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x10660))(pParams);
}

void RPCHandlers::Chat(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x122F0))(pParams);
}

void RPCHandlers::RequestClass(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xFFD0))(pParams);
}

void RPCHandlers::RequestSpawn(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x100A0))(pParams);
}

void RPCHandlers::EditAttachedObject(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x117E0))(pParams);
}

void RPCHandlers::EditObject(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x118A0))(pParams);
}

void RPCHandlers::EnterEditObject(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xE8B0))(pParams);
}

void RPCHandlers::ScrCancelEdit(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xE970))(pParams);
}

void RPCHandlers::ScrUpdateCameraTarget(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xEA20))(pParams);
}

void RPCHandlers::ClientCheck(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x11A60))(pParams);
}

void RPCHandlers::ScrCreateActor(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xEAB0))(pParams);
}

void RPCHandlers::ScrDestroyActor(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x11E00))(pParams);
}

void RPCHandlers::ScrDisableVehicleCollisions(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x17DE0))(pParams);
}

void RPCHandlers::ScrSetPlayerMapIcon(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1A790))(pParams);
}

void RPCHandlers::ScrRemovePlayerMapIcon(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1A8B0))(pParams);
}

void RPCHandlers::ScrSetPlayerAmmo(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1AC10))(pParams);
}

void RPCHandlers::ScrSetGravity(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1ACD0))(pParams);
}

void RPCHandlers::ScrSetVehicleHealth(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1AD70))(pParams);
}

void RPCHandlers::ScrAttachTrailerToVehicle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1AE50))(pParams);
}

void RPCHandlers::ScrDetachTrailerFromVehicle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1AF90))(pParams);
}

void RPCHandlers::ScrCreateObject(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1B340))(pParams);
}

void RPCHandlers::ScrSetObjectPosition(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1BA10))(pParams);
}

void RPCHandlers::ScrSetObjectRotation(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1BB20))(pParams);
}

void RPCHandlers::ScrDestroyObject(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1BC20))(pParams);
}

void RPCHandlers::ScrCreateExplosion(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1BD10))(pParams);
}

void RPCHandlers::ScrShowPlayerNametagForPlayer(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1BE20))(pParams);
}

void RPCHandlers::ScrMoveObject(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1BF00))(pParams);
}

void RPCHandlers::ScrStopObject(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1C0B0))(pParams);
}

void RPCHandlers::ScrSetNumberPlate(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1C230))(pParams);
}

void RPCHandlers::ScrTogglePlayerSpectating(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1C350))(pParams);
}

void RPCHandlers::ScrPlayerSpectatePlayer(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1C400))(pParams);
}

void RPCHandlers::ScrPlayerSpectateVehicle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1C4E0))(pParams);
}

void RPCHandlers::ScrMoveVehicleComponent(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1C5C0))(pParams);
}

void RPCHandlers::ScrForceClassSelection(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x180D0))(pParams);
}

void RPCHandlers::ScrAttachObjectToPlayer(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1C6A0))(pParams);
}

void RPCHandlers::ScrSetPlayerWantedLevel(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1CCF0))(pParams);
}

void RPCHandlers::ScrShowTextDraw(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1CD90))(pParams);
}

void RPCHandlers::ScrHideTextDrawForPlayer(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1CEC0))(pParams);
}

void RPCHandlers::ScrTextDrawSetString(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1CF70))(pParams);
}

void RPCHandlers::ScrGangZoneCreate(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1D080))(pParams);
}

void RPCHandlers::ScrGangZoneDestroy(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1D1A0))(pParams);
}

void RPCHandlers::ScrGangZoneFlash(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1D250))(pParams);
}

void RPCHandlers::ScrGangZoneStopFlash(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1D310))(pParams);
}

void RPCHandlers::ScrApplyAnimation(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1A950))(pParams);
}

void RPCHandlers::ScrClearAnimations(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x18580))(pParams);
}

void RPCHandlers::ScrSetPlayerSpecialAction(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x18690))(pParams);
}

void RPCHandlers::ScrEnableStuntBonusForPlayer(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x17D50))(pParams);
}

void RPCHandlers::ScrSetPlayerFightingStyle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x18740))(pParams);
}

void RPCHandlers::ScrSetPlayerVelocity(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x18850))(pParams);
}

void RPCHandlers::ScrSetVehicleVelocity(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x18950))(pParams);
}

void RPCHandlers::ScrPlayCrimeReport(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19050))(pParams);
}

void RPCHandlers::ScrSetSpawnInfo(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x17F50))(pParams);
}

void RPCHandlers::ScrSetPlayerTeam(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19710))(pParams);
}

void RPCHandlers::ScrSetPlayerSkin(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19190))(pParams);
}

void RPCHandlers::ScrSetPlayerName(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1DFD0))(pParams);
}

void RPCHandlers::ScrSetPlayerPosition(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19320))(pParams);
}

void RPCHandlers::ScrSetPlayerPositionFindZ(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19440))(pParams);
}

void RPCHandlers::ScrSetPlayerHealth(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19550))(pParams);
}

void RPCHandlers::ScrPutPlayerInVehicle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19600))(pParams);
}

void RPCHandlers::ScrRemovePlayerFromVehicle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x17FF0))(pParams);
}

void RPCHandlers::ScrSetPlayerColor(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19800))(pParams);
}

void RPCHandlers::ScrDisplayGametext(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x198F0))(pParams);
}

void RPCHandlers::ScrSetPlayerInterior(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19A00))(pParams);
}

void RPCHandlers::ScrSetPlayerCameraPosition(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19AA0))(pParams);
}

void RPCHandlers::ScrSetPlayerCameraLookAt(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19B70))(pParams);
}

void RPCHandlers::ScrSetVehiclePosition(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19C70))(pParams);
}

void RPCHandlers::ScrSetVehicleZAngle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19D80))(pParams);
}

void RPCHandlers::ScrSetVehicleParamsForPlayer(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19E60))(pParams);
}

void RPCHandlers::ScrSetCameraBehindPlayer(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x18080))(pParams);
}

void RPCHandlers::ScrTogglePlayerControllable(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1A290))(pParams);
}

void RPCHandlers::ScrPlaySound(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1A330))(pParams);
}

void RPCHandlers::ScrSetPlayerWorldBounds(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1A410))(pParams);
}

void RPCHandlers::ScrGivePlayerMoney(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1A500))(pParams);
}

void RPCHandlers::ScrSetPlayerFacingAngle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1A5A0))(pParams);
}

void RPCHandlers::ScrResetPlayerMoney(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x18090))(pParams);
}

void RPCHandlers::ScrResetPlayerWeapons(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x180A0))(pParams);
}

void RPCHandlers::ScrGivePlayerWeapon(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1A640))(pParams);
}

void RPCHandlers::ScrLinkVehicleToInterior(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19F30))(pParams);
}

void RPCHandlers::ScrSetPlayerArmor(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1AB60))(pParams);
}

void RPCHandlers::ScrDeathMessage(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1DD70))(pParams);
}

void RPCHandlers::ScrSetPlayerShopName(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x17E50))(pParams);
}

void RPCHandlers::ScrSetPlayerDrunkLevel(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x18DB0))(pParams);
}

void RPCHandlers::ScrSetPlayerArmedWeapon(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x18E50))(pParams);
}

void RPCHandlers::ScrSetPlayerAttachedObject(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x18F00))(pParams);
}

void RPCHandlers::ScrPlayAudioStream(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1D3C0))(pParams);
}

void RPCHandlers::ScrStopAudioStream(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x180F0))(pParams);
}

void RPCHandlers::ScrRemoveBuildingForPlayer(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1D530))(pParams);
}

void RPCHandlers::ScrAttachCameraToObject(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19FF0))(pParams);
}

void RPCHandlers::ScrInterpolateCamera(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1A0F0))(pParams);
}

void RPCHandlers::ClickTextDraw(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1D650))(pParams);
}

void RPCHandlers::ScrSetObjectMaterial(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1B6A0))(pParams);
}

void RPCHandlers::ScrStopObjectCameraCollision(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1C170))(pParams);
}

void RPCHandlers::ScrSetActorAnimation(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1D750))(pParams);
}

void RPCHandlers::ScrSetActorRotation(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1D9F0))(pParams);
}

void RPCHandlers::ScrSetActorPosition(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1DAD0))(pParams);
}

void RPCHandlers::ScrSetActorHealth(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1DBE0))(pParams);
}

void RPCHandlers::ScrInitMenu(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1C870))(pParams);
}

void RPCHandlers::ScrShowMenu(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1CB90))(pParams);
}

void RPCHandlers::ScrHideMenu(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1CC40))(pParams);
}

SAMPAPI_END
