#include "Cube.h"
#include <iostream>



Cube::Cube()
{
}

Cube::Cube(const Cube& copyObject): Square(copyObject), height(copyObject.height)
{
	std::cout << "calling Cube's copy constructor" << std::endl;
}


Cube::~Cube()
{
}

Cube & Cube::operator=(const Cube & copyObject)
{
	// TODO: insert return statement here
	Square::operator=(copyObject);
	height = copyObject.height;

	return *this;
}

