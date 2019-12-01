#pragma once
#include "Object.h"
#include "Sprite.h"
#include "SpriteSheet.h"
#include "Animation.h"
#include "Keyboard.h"
#include "Viewport.h"

class Drill :public Object
{
protected:

	Animation * arrowAnim;
	float timecout=0;

	Animation * drillAnim;

public:
	enum ArrowState
	{
		oppen,
		close,
	};
	ArrowState state;
	void ChangeAnim(Keyboard* key);
	void Update(float dt, Keyboard* key);
	void Render(Viewport* viewport);

	void setstate(ArrowState state);
	Arrow();
	Arrow(Sprite *sprite, SpriteSheet *info, D3DXVECTOR2 pos);
	~Arrow();

	Drill();
	Drill(Sprite *sprite, SpriteSheet *info, D3DXVECTOR2 pos);
	~Drill();

};


