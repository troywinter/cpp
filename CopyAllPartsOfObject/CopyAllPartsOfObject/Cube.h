#pragma once
#include "Square.h"

class Cube :
	public Square
{
public:
	Cube();
	Cube(const Cube& copyObject);
	virtual ~Cube();
	Cube& operator=(const Cube& copyObject);
	int height;
};

