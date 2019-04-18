#include "Building.h"
#include <iostream>
Building::Building()
{
	
}

Building::Building(const Building& toCopy)
{
	address = toCopy.address;
	height = toCopy.height;
	area = toCopy.area;
}

Building::Building(string _address, float _area, int _height)
{
	address = _address;
	area = _area;
	height = _height;
}

string Building::getAddress()
{
	return address;
}

float Building::getArea()
{
	return area;
}

int Building::getHeight()
{
	return height;
}

istream& operator>>(istream& is, Building& toCin)
{
	std::cout << "Input height: " << std::endl;
	is>> toCin.height;

	std::cout << "Input area: " << std::endl;
	is>> toCin.area;

	std::cout << "Input address: " << std::endl;
	is >> toCin.address;

	return is;
}

ostream& operator<<(ostream& os, Building& toPrint)
{
	os << "Building height: " << std::endl;
	os << toPrint.height << std::endl;
	os << "Building Area: " << std::endl;
	os << toPrint.area << std::endl;
	os << "Address: " << std::endl;
	os << toPrint.address << std::endl;
	return os;
}

Building& Building::operator=(const Building& other)
{
	address = other.address;
	height = other.height;
	area = other.area;
}


Building::~Building()
{
 	  
}






