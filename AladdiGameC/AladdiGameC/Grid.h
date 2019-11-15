#pragma once
#include "Cell.h"
#include "Viewport.h"
#include "Object.h"
#include "Define.h"
using namespace Define;

#define GRID Grid::GetInstance();

class Grid
{

private:
	Cell*** cells;
	int numCollums;
	int numRows;
	static Grid* instance;
	Viewport* viewPort;
public :
	std::vector<Cell*> visibleCells;
	std::unordered_set<Object*> objects;

	static Grid* GetInstance();
	Grid();
	Grid(int numCollums, int numRows);

	// get cell from grid(x,y);
	Cell* GetCell(int x, int y);
	//Insert all object to grid
	void InsertToGrid(std::unordered_set<Object* > objects);
	//add an object to Grid
	void AddObject(Object* object);
	//remove an object
	void RemoveObject(Object* object);
	// only update cells contained in camera
	void UpdateVisibleCells();
	// update entire grid
	void UpdateGrid(float delatTime);
	// get objects that have ability to collide with a target Object
	//std::unordered_set<Object*> GetColliableObjectsWith(Object target, float deltaTime);
	// get object Ground in visual viewport
	/*std::vector<Object*> GetVisiblelGround();
	std::unordered_set<Object*> GetVisiableObjects();
	void ObjectMoving(float deltaTime);
	std::vector<Object*> GetVisibleWater();*/
	// std::unordered_set<Object*> GetObjectByTag(Tag tag);
	void Release();
	void ResetGrid();
};