#pragma once
#include "../../../../../Homework_1/OOP_Homework_1/Homework_Assignment_1/Exercise_3/std_string.h"
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
