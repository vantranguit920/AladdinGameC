#include "SceneManager.h"

SceneManager* SceneManager::instance = NULL;

SceneManager::SceneManager() {

}
SceneManager::~SceneManager() {

}

SceneManager* SceneManager::GetInstance(Graphic*  graphic) {
	if (instance!=NULL)
		return instance;
	else
	{
		instance = new SceneManager(); // này chỉ dùng khi ap dụng sigleton

		//instance->Init(graphic);
		return instance;
	}
}

Scene* SceneManager::GetCurrentScene() {
	return currentScene;
}

void SceneManager::ChangeScene(Scene* targetScene) {
	currentScene->ReleaseAll();
	currentScene = NULL;
	currentScene = targetScene;
}

void SceneManager::ReplaceScene(Scene* scene) {
	delete currentScene;
	currentScene = scene;
}



