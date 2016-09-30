#pragma once
class Square
{
public:
	Square();
	Square(const Square& copyObject);
	virtual ~Square();
	Square& operator=(const Square& copyObject);
	bool operator==(Square& compareObject) const;
	int length;
	int width;
};

