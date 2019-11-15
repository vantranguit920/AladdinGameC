#pragma once
#include "Graphic.h"
#include "Keyboard.h"
#include "ObjectManager.h"

class Scene
{
protected:
	
public:

	Scene();
	~Scene();

	//update scene
	virtual void Update(float detaTime, Keyboard* key) = 0;
	//Draw components in scene
	virtual void Draw() = 0;
	//// handle of key Down event
	//virtual void OnKeyDown(int keyCode) = 0;
	//// handle of key up event
	//virtual void OnKeyUp(int keyCode) = 0;

	// release memory
	virtual void ReleaseAll() = 0;
};

