#include "Cube.h"
#include <iostream>
#include <vector>



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

std::vector<int> Cube::display()
{
	std::vector<int> u{ length, width, height };
	return u;
}

