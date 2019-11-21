#pragma once
#include <d3dx9.h>
#include "Animation.h"
#include "SpriteSheet.h"
class GuardAnimation :public Animation
{
public:
	GuardAnimation(SpriteSheet* info) :Animation(info) {}
	GuardAnimation();
	~GuardAnimation();

	void WalkingAnimation();
	void GuillotineKnifeAnimation();
	void HitByBulletAnimation();
	void CommonAnimation();
	void StabAnimation();
};