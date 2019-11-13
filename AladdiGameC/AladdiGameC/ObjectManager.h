#pragma once
#include "Graphic.h"
#include "Keyboard.h"
#include "Text.h"
#include "Viewport.h"
#include "Map.h"
#include "Sound.h"
#include "Aladdin.h"

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

	
	
	


	Aladdin *aladin;

	Sprite *spriteAladdin;
	SpriteSheet *infoAlddin;

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
