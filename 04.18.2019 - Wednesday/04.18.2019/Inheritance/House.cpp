#include "House.h"
#include "../../../../../Homework_Assignments/OOP_Homework_Assignments/Homework_2/Exercise_3/my_string.h"
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


