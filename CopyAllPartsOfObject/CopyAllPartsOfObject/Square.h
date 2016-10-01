#pragma once
#include <vector>
class Square
{
public:
	Square();
	Square(const Square& copyObject);
	virtual ~Square();
	Square& operator=(const Square& copyObject);
	bool operator==(Square& compareObject) const;
	virtual std::vector<int> display();
	int length;
	int width;
};

