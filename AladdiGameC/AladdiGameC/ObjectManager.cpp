#include "ObjectManager.h"
#include "string.h"

ObjectManager::ObjectManager()
{
}
ObjectManager::~ObjectManager()
{
	
	delete map;
	delete viewport;
	
	
	

}

//Load Game
void ObjectManager::Init(Graphic* graphic)
{

	this->sound = new Sound(graphic->GetHwnd());
	this->sound->Init_DirectSound();
	soundGame = this->sound->LoadSound("./Sound/PrinceAli.wav");



	//
	spriteAladdin = new Sprite(graphic, "Aladdin_Sprite.png");
	infoAlddin = new SpriteSheet("Aladdin-Animations.xml");
	aladin = new Aladdin(spriteAladdin, infoAlddin);
	viewport = new Viewport(0, 1120);
	map = new Map(graphic);
	prePosView = viewport->GetPosition();

}

//Update Game
void ObjectManager::Update(float dt, Keyboard* keyboard)
{
	aladin->ChangeAnimation(dt,keyboard);

	//Kiểm tra dịch chuyển
	if (prePosView != viewport->GetPosition())
	{
		prePosView = viewport->GetPosition();
		
	}



	aladin->Update(dt, keyboard);
#pragma endregion

	viewport->Update(dt, keyboard, aladin->GetPosition(), aladin->GetVelocity(), map->listStage);

	sound->LoopSound(soundGame);
}

//Vẽ
void ObjectManager::Render()
{
	map->Render(viewport);	
	aladin->Render(viewport);
}



