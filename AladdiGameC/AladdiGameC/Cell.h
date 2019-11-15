#pragma once
#include "Object.h"
#include "Define.h"
#include <unordered_set>
using namespace Define;

#define CELL_WIDTH (WinWidth/2)
#define CELL_HEIGHT (WinHeight/2)

class Cell {
private:
		
	int x;
	int y;

	bool IsContain(RECT r);

public:
	std::unordered_set<Object*> objects;

	Cell(int x, int y);

	// add an object to a cell, if it is contained in this cell
	void Add(Object* obj);
	// remove an object from a cell
	void Remove(Object* obj);
	//Get bound
	RECT GetCellBound();
	// Release memory
	void Release();


};