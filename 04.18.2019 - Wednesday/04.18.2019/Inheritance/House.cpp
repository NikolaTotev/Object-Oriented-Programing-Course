#include "House.h"
House& House::operator=(const House& other)
{
	Building::operator=(other);
	ownerName = other.ownerName;
	numberOfFloors = other.numberOfFloors;
}

House::House()
{
	
}

House::House(float area, int height, string address) : Building(address, area, height)
{
	
}

ostream& operator<<(ostream& os, House& toPrint)
{
	os << (Building&)toPrint;
	os << "S";
	return os;
}

istream& operator>>(istream& is, House& toCin)
{
	
}


