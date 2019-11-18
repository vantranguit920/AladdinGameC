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
	

	grid->GetInstance();
	for (auto o : grid->objects)
	{
		// get object info
		switch(o->tag)
		{
		case 0:
			// just demo
			o->GetPosition;
			o->GetWidth();
			o->GetHeight();
			break;
		case 1:
			break;

		case 2:
			break;

		case 3:
			break;

		case 4:
			break;

		case 5:
			break;

		case 6:

			break;
		default:
			break;
		}
	}

	file.close();
}

void SceneDemo::ReloadResources(int level) {
	std::vector<RECT> grounds;
	if (level == 1)
		return;
	switch (level) {
	case 2:
		break;
	case 3:
		break;
	default:
		break;
	}
}
void SceneDemo::LoadGridFromFile(int level) {
	std::ifstream file;
	std::string filename = "";
	file.open(filename);
	grid->ResetGrid();
	if (!file.good()) {
		file.close();

		// add ground from file to cell
		 
	}
	
	while (!file.eof()) {
		std::string objectname;
		file >> objectname;
	}
	file.close();

}
void SceneDemo::ReleaseAll(){

}
