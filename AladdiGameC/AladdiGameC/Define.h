﻿#pragma once

namespace Define
{
	const float WinWidth = 800.0f;
	const float WinHeight = 600.0f;

	const float GameWidth = 500.0f;
	const float GameHeight = 500.0f;

	
	//Map
	const char TileSetPNG[] = "./Resource Files/aladin.png";
	const char MapXML[] = "./Resource Files/aladin.tmx";

	
	

	

	//Speed
	const float RunSpeed = 2.0f;
	const float GlideSpeed = 3.0f;
	const float JumpSpeed = 3.0f;
	const float ClampSpeed = 0.8f;
	const float KickSpeed = 1.0f;
	const float BulletSpeed = 4.0f;
	const float Gravity = 1.0f;
	const float FallAcceleration = 0.5f;

	//Distance
	const float JumpMax = 80.0f;
	const float JumpMin = 50.0f;
	const float GlideMax = 100.0f;
	const float GlideMin = 30.f;

	//Time
	const float DelayAnimation = 0.2f;
	const float TimeBulletLv2 = 0.3f;
	const float TimeBulletLv3 = 1.0f;
	const float TimeItem = 4.0f;
}