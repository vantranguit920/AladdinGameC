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
	spriteAladdin = new Sprite(graphic, "Aladdin_Sprite.png", D3DCOLOR_XRGB(255, 0, 255));
	infoAlddin = new SpriteSheet("Aladdin-Animations.xml");

	spriteBrick = new Sprite(graphic, "./Resource Files/Brick.png", D3DCOLOR_XRGB(163, 73, 164));
	infoBrick = new SpriteSheet("./Resource Files/Brickxml.xml");
	//
	spritePendu = new Sprite(graphic, "./Resource Files/pendulum.png", D3DCOLOR_XRGB(163, 73, 164));
	infoPendu = new SpriteSheet("./Resource Files/conlacxml.xml");

	spriteArrow = new Sprite(graphic, "./Resource Files/arrow.png", D3DCOLOR_XRGB(163, 73, 164));
	infoArrow = new SpriteSheet("./Resource Files/arrow.xml");

	spriteBat = new Sprite(graphic, "./Resource Files/Batxml.png", D3DCOLOR_XRGB(163, 73, 164));
	infoBat = new SpriteSheet("./Resource Files/Batsprite.xml");
	
	
	pendu = new pendulum(spritePendu, infoPendu, D3DXVECTOR2(400, 621));
	arrow = new Arrow(spriteArrow, infoArrow, D3DXVECTOR2(320, 521));
	brick = new Brick(spriteBrick, infoBrick, D3DXVECTOR2(350,621));
	brick2 = new Brick(spriteBrick, infoBrick, D3DXVECTOR2(300, 621));


	brick2->setstate(Brick::close);
	aladin = new Aladdin(spriteAladdin, infoAlddin);
	bat = new Bat(spriteBat, infoBat, D3DXVECTOR2(-100, 621), aladin);
	viewport = new Viewport(0, 1120);
	map = new Map(graphic);
	prePosView = viewport->GetPosition();

}

//Update Game
void ObjectManager::Update(float dt, Keyboard* keyboard)
{
	aladin->ChangeAnimation(dt,keyboard);
	//aladin->SetVelocityY(-1);
	//Kiểm tra dịch chuyển
	if (prePosView != viewport->GetPosition())
	{
		prePosView = viewport->GetPosition();
		
	}



	aladin->Update(dt, keyboard);


	//
	brick->SetPosition(D3DXVECTOR2(aladin->GetPosition().x,aladin->GetPosition().y-45));

	brick->Update(dt,keyboard);
	brick2->Update(dt, keyboard);
	pendu->Update(dt,keyboard);
	arrow->Update(dt, keyboard);
	bat->Update(dt, keyboard);
	viewport->Update(dt, keyboard, aladin->GetPosition(), aladin->GetVelocity(), map->listStage);

	sound->LoopSound(soundGame);
}

//Vẽ
void ObjectManager::Render()
{
	map->Render(viewport);	
	
	brick->Render(viewport);
	brick2->Render(viewport);
	pendu->Render(viewport);
	arrow->Render(viewport);
	aladin->Render(viewport);
	bat->Render(viewport);
}



