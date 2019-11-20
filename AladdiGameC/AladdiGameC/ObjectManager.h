#pragma once
#include "Graphic.h"
#include "Keyboard.h"
#include "Text.h"
#include "Viewport.h"
#include "Map.h"
#include "Sound.h"
#include "Aladdin.h"
#include "Brick.h"
#include "pendulum.h"
#include "Arrow.h"
#include "Bat.h"

class ObjectManager
{
protected:
	

	Viewport* viewport;
	Map* map;
	
	



	Sound *sound;
	GSound *soundGame;
	vector <Object*> listObjectCollison;
	vector <Object*> listWall;
	vector <Object*> listObject;
	D3DXVECTOR2 prePosView;

	
	
	
	int timecout = 0;

	Aladdin *aladin;
	Sprite *spriteAladdin;
	SpriteSheet *infoAlddin;

	Brick *brick;
	Brick *brick2;
	Sprite *spriteBrick;
	SpriteSheet *infoBrick;
	
	pendulum *pendu;
	Sprite *spritePendu;
	SpriteSheet *infoPendu;

	Arrow* arrow;
	Sprite* spriteArrow;
	SpriteSheet* infoArrow;

	Bat *bat;
	Sprite *spriteBat;
	SpriteSheet *infoBat;

public:
	ObjectManager();
	~ObjectManager();

	void Init(Graphic* graphic);

	//Update Game sau khoảng thời gian dt
	void Update(float dt, Keyboard* key);

	//Vẽ Object lên màn hình 
	void Render();

	/*void ReadQuadTree(TiXmlElement *root, QuadTree *node, QuadTree *father, int indexNode);*/
};
