#include "Square.h"
#include <iostream>
#include <vector>

using namespace std;



Square::Square()
{
}


Square::~Square()
{
}

Square & Square::operator=(const Square & copyObject)
{
	// TODO: insert return statement here
	length = copyObject.length;
	width = copyObject.width;
	return *this;
}

bool Square::operator==(Square & compareObject) const
{
	// TODO: insert return statement here
	if (length == compareObject.length && width == compareObject.width) {
		return true;
	}
	return false;
}

std::vector<int> Square::display()
{
	std::vector<int> v{ length, width };
	return v;
}

Square::Square(const Square& copyObject): length(copyObject.length), width(copyObject.width)
{
	cout << "Calling square's copy constructor\n";
}