#pragma once
#include "Object.h"
#include "GuardAnimation.h"
#include "GuardState.h"
#include "Viewport.h"
class Guard :public Object
{
protected:
	GuardAnimation* animGuard;
	GuardState* stateGuard;
	GuardState::State state;
	int delay;

	bool lock;
public:

	Guard();
	Guard(Sprite* spGuard, SpriteSheet* ifoGuard);
	~Guard();

	const char* pathPNG;
	GuardState* getState();

	void ChangeAnimation(float dt, Keyboard* key);

	void OnCollision(Object* obj, D3DXVECTOR2 distance, D3DXVECTOR2 disGuard);
	void Update(float dt, Keyboard* key);
	void Render(Viewport* viewport);
};

