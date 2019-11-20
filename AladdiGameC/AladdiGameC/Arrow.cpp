#include "Arrow.h"

void Arrow::ChangeAnim(Keyboard* key)
{
	arrowAnim->SetFrame(position, flipFlag, 20, 0, 10, true);
}

void Arrow::Update(float dt, Keyboard* key)
{
	ChangeAnim(key);
	Object::Update(dt, key);
	arrowAnim->Update(dt, key);
}

void Arrow::Render(Viewport* viewport)
{
	if (viewport->isContains(this->GetBound())) {
		this->allowDraw = true;

		this->sprite->SetData(arrowAnim->GetRect(),
			arrowAnim->GetCenter(),
			arrowAnim->GetPosition(),
			arrowAnim->GetScale(),
			arrowAnim->GetTransform(),
			arrowAnim->GetAngle());
		this->sprite->SetScale(D3DXVECTOR2(1.5, 1.5));
		this->sprite->Render(viewport);
	}
	else {
		this->allowDraw = false;
		arrowAnim->SetIndex(0);
	}
}

Arrow::Arrow()
{
}

Arrow::Arrow(Sprite* sprite, SpriteSheet* info, D3DXVECTOR2 pos)
{
	this->sprite = sprite;
	arrowAnim = new Animation(info);
	transform = D3DXVECTOR2(0, 0);
	this->allowDraw = true;
	flipFlag = false;
	this->position = pos;

}


Arrow::~Arrow()
{
}
