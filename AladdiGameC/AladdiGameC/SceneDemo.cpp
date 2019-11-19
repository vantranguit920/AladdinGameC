#include "SceneDemo.h"

SceneDemo::SceneDemo() {
}
SceneDemo::~SceneDemo() {
	delete objManager;
}

// load game
SceneDemo::SceneDemo(Graphic* graphic) {
	objManager = new ObjectManager();
	objManager->Init(graphic);
}


void SceneDemo::Update(float deltaTime, Keyboard* key) {
	objManager->Update(deltaTime, key); 
}
void SceneDemo::Draw() {
	objManager->Render();
}

void SceneDemo::SaveGridToFile(int level) {
	std::ofstream file;
	std::string filename = "";
	file.open(filename);
	//for (auto o : GRID->objects)
	//{
	//	// get object info
	//	switch(o->tag)
	//	{

	//	}
	//}

	file.close();
}

void SceneDemo::ReleaseAll(){

}
