#include "Cube.h"
#include "Square.h"
#include "Utility.h"

int main()
{
	/*Cube cube;
	cube.length = 3;
	cube.width = 4;
	cube.height = 5;
	Cube anotherCube{ cube };
	Cube thirdCube = anotherCube;
	bool result = (cube == anotherCube);*/

	Cube s;
	s.length = 2;
	s.width = 4;
	s.height = 8;
	print_info(s);

	return 0;
}