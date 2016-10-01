#pragma once
#include "Square.h"
#include <vector>

class Cube :
	public Square
{
public:
	Cube();
	Cube(const Cube& copyObject);
	virtual ~Cube();
	Cube& operator=(const Cube& copyObject);
	virtual std::vector<int> display();
	int height;
};

