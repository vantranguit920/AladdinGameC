#pragma once
#include <vector>
#include <unordered_set>
#include <iostream>
#include <strstream>
#include "Scene.h"
#include "Animation.h"
#include "Map.h"
#include "Aladdin.h"
#include "Grid.h"
#include "SceneManager.h"
#include "TileSet.h"
#include <fstream>

class SceneDemo :public Scene
{
private:
	Map* map;
	Object* object;
	
	std::unordered_set<Object*> visibleObject;
	std::vector<Object*> listObject;
	int currentLevel;
	DWORD timePause;
	bool isGamePause;

protected:
	ObjectManager* objManager;
public:
	SceneDemo();
	SceneDemo(Graphic* graphic);
	~SceneDemo();
	// Inherited via Scene
	virtual void Update(float deltaTime, Keyboard* key) override;
	virtual void Draw() override;
	virtual void ReleaseAll() override;

	//void CheckCollision( player, std::unordered_set<Object*> listObject, float deltaTime);
	void ReloadResources(int level);

	void SaveGridToFile(int level);
	void LoadGridFromFile(int level);
};