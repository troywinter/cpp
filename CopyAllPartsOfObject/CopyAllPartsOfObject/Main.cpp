#include "Cube.h"
#include "Square.h"

int main()
{
	Cube cube;
	cube.length = 3;
	cube.width = 4;
	cube.height = 5;
	Cube anotherCube{ cube };
	Cube thirdCube = anotherCube;
	bool result = (cube == anotherCube);

	return 0;
}