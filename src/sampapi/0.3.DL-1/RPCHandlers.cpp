/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/RPCHandlers.h"

SAMPAPI_BEGIN_V03DL_1

void RPCHandlers::ScrSetPlayerSkillLevel(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xF4B0))(pParams);
}

void RPCHandlers::ScrCreate3DTextLabel(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xF5E0))(pParams);
}

void RPCHandlers::ScrDestroy3DTextLabel(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xF790))(pParams);
}

void RPCHandlers::ScrChatBubble(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xF850))(pParams);
}

void RPCHandlers::ScrShowDialog(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xF9C0))(pParams);
}

void RPCHandlers::ScrSetCheckpoint(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x10040))(pParams);
}

void RPCHandlers::ScrDisableCheckpoint(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xE430))(pParams);
}

void RPCHandlers::ScrSetRaceCheckpoint(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x10150))(pParams);
}

void RPCHandlers::ScrDisableRaceCheckpoint(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xE440))(pParams);
}

void RPCHandlers::UpdateScoresPingsIps(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x102B0))(pParams);
}

void RPCHandlers::SrvNetStats(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xE450))(pParams);
}

void RPCHandlers::ScrGamemodeRestart(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xE4E0))(pParams);
}

void RPCHandlers::ConnectionRejected(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x10410))(pParams);
}

void RPCHandlers::ScrClientMessage(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xEE60))(pParams);
}

void RPCHandlers::ScrSetWorldTime(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xEDC0))(pParams);
}

void RPCHandlers::ScrCreatePickup(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xEF50))(pParams);
}

void RPCHandlers::ScrDestroyPickup(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xF010))(pParams);
}

void RPCHandlers::ScrDestroyWeaponPickup(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xF0B0))(pParams);
}

void RPCHandlers::ScmEvent(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xF150))(pParams);
}

void RPCHandlers::ScrSetWeather(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xF240))(pParams);
}

void RPCHandlers::ScrSetPlayerTime(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xF2F0))(pParams);
}

void RPCHandlers::ScrToggleClock(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xF3D0))(pParams);
}

void RPCHandlers::ScrSetIngameTimer(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xFE00))(pParams);
}

void RPCHandlers::ScrWorldPlayerAdd(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x109D0))(pParams);
}

void RPCHandlers::ScrWorldPlayerDeath(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x10C20))(pParams);
}

void RPCHandlers::ScrWorldPlayerRemove(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x10CE0))(pParams);
}

void RPCHandlers::ScrWorldVehicleAdd(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xE500))(pParams);
}

void RPCHandlers::ScrWorldVehicleRemove(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x10DC0))(pParams);
}

void RPCHandlers::DamageVehicle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x11090))(pParams);
}

void RPCHandlers::ScrSetVehicleParamsEx(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x111C0))(pParams);
}

void RPCHandlers::EnterVehicle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x114A0))(pParams);
}

void RPCHandlers::ExitVehicle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x115C0))(pParams);
}

void RPCHandlers::ScrServerJoin(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xFBB0))(pParams);
}

void RPCHandlers::ScrServerQuit(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xFD40))(pParams);
}

void RPCHandlers::ScrInitGame(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x10530))(pParams);
}

void RPCHandlers::Chat(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x121C0))(pParams);
}

void RPCHandlers::RequestClass(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xFEA0))(pParams);
}

void RPCHandlers::RequestSpawn(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xFF70))(pParams);
}

void RPCHandlers::EditAttachedObject(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x116B0))(pParams);
}

void RPCHandlers::EditObject(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x11770))(pParams);
}

void RPCHandlers::EnterEditObject(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xE740))(pParams);
}

void RPCHandlers::ScrCancelEdit(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xE800))(pParams);
}

void RPCHandlers::ScrUpdateCameraTarget(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xE8B0))(pParams);
}

void RPCHandlers::ClientCheck(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x11930))(pParams);
}

void RPCHandlers::ScrCreateActor(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xE940))(pParams);
}

void RPCHandlers::ScrDestroyActor(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x11CD0))(pParams);
}

void RPCHandlers::ScrDisableVehicleCollisions(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x178F0))(pParams);
}

void RPCHandlers::ScrSetPlayerMapIcon(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1A2C0))(pParams);
}

void RPCHandlers::ScrRemovePlayerMapIcon(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1A3E0))(pParams);
}

void RPCHandlers::ScrSetPlayerAmmo(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1A740))(pParams);
}

void RPCHandlers::ScrSetGravity(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1A800))(pParams);
}

void RPCHandlers::ScrSetVehicleHealth(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1A8A0))(pParams);
}

void RPCHandlers::ScrAttachTrailerToVehicle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1A980))(pParams);
}

void RPCHandlers::ScrDetachTrailerFromVehicle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1AAC0))(pParams);
}

void RPCHandlers::ScrCreateObject(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1AE70))(pParams);
}

void RPCHandlers::ScrSetObjectPosition(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1B540))(pParams);
}

void RPCHandlers::ScrSetObjectRotation(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1B650))(pParams);
}

void RPCHandlers::ScrDestroyObject(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1B750))(pParams);
}

void RPCHandlers::ScrCreateExplosion(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1B840))(pParams);
}

void RPCHandlers::ScrShowPlayerNametagForPlayer(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1B950))(pParams);
}

void RPCHandlers::ScrMoveObject(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1BA30))(pParams);
}

void RPCHandlers::ScrStopObject(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1BBE0))(pParams);
}

void RPCHandlers::ScrSetNumberPlate(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1BD60))(pParams);
}

void RPCHandlers::ScrTogglePlayerSpectating(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1BE80))(pParams);
}

void RPCHandlers::ScrPlayerSpectatePlayer(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1BF30))(pParams);
}

void RPCHandlers::ScrPlayerSpectateVehicle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1C010))(pParams);
}

void RPCHandlers::ScrMoveVehicleComponent(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1C0F0))(pParams);
}

void RPCHandlers::ScrForceClassSelection(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x17BE0))(pParams);
}

void RPCHandlers::ScrAttachObjectToPlayer(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1C1D0))(pParams);
}

void RPCHandlers::ScrSetPlayerWantedLevel(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1C7B0))(pParams);
}

void RPCHandlers::ScrShowTextDraw(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1C850))(pParams);
}

void RPCHandlers::ScrHideTextDrawForPlayer(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1C980))(pParams);
}

void RPCHandlers::ScrTextDrawSetString(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1CF70))(pParams);
}

void RPCHandlers::ScrGangZoneCreate(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1CB40))(pParams);
}

void RPCHandlers::ScrGangZoneDestroy(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1CC60))(pParams);
}

void RPCHandlers::ScrGangZoneFlash(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1CD10))(pParams);
}

void RPCHandlers::ScrGangZoneStopFlash(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1CDD0))(pParams);
}

void RPCHandlers::ScrApplyAnimation(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1A480))(pParams);
}

void RPCHandlers::ScrClearAnimations(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x18090))(pParams);
}

void RPCHandlers::ScrSetPlayerSpecialAction(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x181A0))(pParams);
}

void RPCHandlers::ScrEnableStuntBonusForPlayer(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x17860))(pParams);
}

void RPCHandlers::ScrSetPlayerFightingStyle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x18250))(pParams);
}

void RPCHandlers::ScrSetPlayerVelocity(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x18350))(pParams);
}

void RPCHandlers::ScrSetVehicleVelocity(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x18450))(pParams);
}

void RPCHandlers::ScrPlayCrimeReport(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x18B40))(pParams);
}

void RPCHandlers::ScrSetSpawnInfo(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x17A60))(pParams);
}

void RPCHandlers::ScrSetPlayerTeam(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19240))(pParams);
}

void RPCHandlers::ScrSetPlayerSkin(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x18C80))(pParams);
}

void RPCHandlers::ScrSetPlayerName(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1DA90))(pParams);
}

void RPCHandlers::ScrSetPlayerPosition(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x18E50))(pParams);
}

void RPCHandlers::ScrSetPlayerPositionFindZ(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x18F70))(pParams);
}

void RPCHandlers::ScrSetPlayerHealth(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19080))(pParams);
}

void RPCHandlers::ScrPutPlayerInVehicle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19130))(pParams);
}

void RPCHandlers::ScrRemovePlayerFromVehicle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x17B00))(pParams);
}

void RPCHandlers::ScrSetPlayerColor(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19330))(pParams);
}

void RPCHandlers::ScrDisplayGametext(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19420))(pParams);
}

void RPCHandlers::ScrSetPlayerInterior(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19530))(pParams);
}

void RPCHandlers::ScrSetPlayerCameraPosition(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x195D0))(pParams);
}

void RPCHandlers::ScrSetPlayerCameraLookAt(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x196A0))(pParams);
}

void RPCHandlers::ScrSetVehiclePosition(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x197A0))(pParams);
}

void RPCHandlers::ScrSetVehicleZAngle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x198B0))(pParams);
}

void RPCHandlers::ScrSetVehicleParamsForPlayer(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19990))(pParams);
}

void RPCHandlers::ScrSetCameraBehindPlayer(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x17B90))(pParams);
}

void RPCHandlers::ScrTogglePlayerControllable(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19DC0))(pParams);
}

void RPCHandlers::ScrPlaySound(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19E60))(pParams);
}

void RPCHandlers::ScrSetPlayerWorldBounds(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19F40))(pParams);
}

void RPCHandlers::ScrGivePlayerMoney(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1A030))(pParams);
}

void RPCHandlers::ScrSetPlayerFacingAngle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1A0D0))(pParams);
}

void RPCHandlers::ScrResetPlayerMoney(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x17BA0))(pParams);
}

void RPCHandlers::ScrResetPlayerWeapons(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x17BB0))(pParams);
}

void RPCHandlers::ScrGivePlayerWeapon(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1A170))(pParams);
}

void RPCHandlers::ScrLinkVehicleToInterior(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19A60))(pParams);
}

void RPCHandlers::ScrSetPlayerArmor(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1A690))(pParams);
}

void RPCHandlers::ScrDeathMessage(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1D830))(pParams);
}

void RPCHandlers::ScrSetPlayerShopName(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x17960))(pParams);
}

void RPCHandlers::ScrSetPlayerDrunkLevel(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x188B0))(pParams);
}

void RPCHandlers::ScrSetPlayerArmedWeapon(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x18950))(pParams);
}

void RPCHandlers::ScrSetPlayerAttachedObject(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x18A00))(pParams);
}

void RPCHandlers::ScrPlayAudioStream(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1CE80))(pParams);
}

void RPCHandlers::ScrStopAudioStream(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x17C00))(pParams);
}

void RPCHandlers::ScrRemoveBuildingForPlayer(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1CFF0))(pParams);
}

void RPCHandlers::ScrAttachCameraToObject(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19B20))(pParams);
}

void RPCHandlers::ScrInterpolateCamera(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19C20))(pParams);
}

void RPCHandlers::ClickTextDraw(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1D110))(pParams);
}

void RPCHandlers::ScrSetObjectMaterial(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1B1D0))(pParams);
}

void RPCHandlers::ScrStopObjectCameraCollision(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1BCA0))(pParams);
}

void RPCHandlers::ScrSetActorAnimation(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1D210))(pParams);
}

void RPCHandlers::ScrSetActorRotation(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1D4B0))(pParams);
}

void RPCHandlers::ScrSetActorPosition(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1D590))(pParams);
}

void RPCHandlers::ScrSetActorHealth(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1D6A0))(pParams);
}

void RPCHandlers::ScrInitMenu(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1C390))(pParams);
}

void RPCHandlers::ScrShowMenu(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1C650))(pParams);
}

void RPCHandlers::ScrHideMenu(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1C700))(pParams);
}

SAMPAPI_END
