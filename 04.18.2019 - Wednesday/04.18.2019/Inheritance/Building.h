#pragma once
#include "../../../../../Homework_Assignments/OOP_Homework_Assignments/Homework_2/Exercise_3/my_string.h"
#include <iostream>
class Building
{
	int height;
	float area;
	string address;


	float getArea();
	int getHeight();
	string getAddress();

public:
	Building();
	Building(string _address, float _area, int _height);
	Building(const Building& toCopy);

	friend istream& operator>>(istream& is, Building& toCin);
	friend ostream& operator<<(ostream& os, Building& toPrint);

	Building& operator = (const Building& other);
	~Building();
};
