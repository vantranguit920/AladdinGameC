#pragma once
#include <d3dx9.h>
#include "Object.h"
class GuardState {
private:

public:
	enum State {
		walking, 
		guillotineKnife,
		hitByBullet,
		common,
		stab
	};
};