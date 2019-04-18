#pragma once
#include  "Building.h"
class House : public Building
{
	string ownerName;
	int numberOfFloors;
	House(float area, int height, string address);
	House();
	House& operator=(const House& other);
	friend istream& operator>>(istream& is, House& toCin);
	friend ostream& operator<<(ostream& os, House& toPrint);
};