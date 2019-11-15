#pragma once // lỗi lúc đầu
#include "Scene.h"
#include "Graphic.h"

class SceneManager
{
private:
	static SceneManager* instance;
	Scene* currentScene = NULL;

protected:
	ObjectManager* objManager;
public:

	SceneManager();
	~SceneManager();

	// get current instance SceneManager
	static SceneManager* GetInstance(Graphic* graphic);

	//Get the current scene of the game
	Scene* GetCurrentScene();
	void InitScene();
	// change to another scene
	void ChangeScene(Scene* targetScene);
	//replace current scene with another
	void ReplaceScene(Scene* scene);
};