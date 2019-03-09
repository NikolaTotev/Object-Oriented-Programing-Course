#include "Grade.h"
#include  <iostream>
using std::cout;
using std::cin;
using std::endl;

Grade::Grade()
{
}
Grade::Grade(float _value, const char _subject[SUJECT_NAME_LEN])
{
	Value = _value;
	for (int i = 0; i < SUJECT_NAME_LEN - 1; i++)
	{
		this->Subject[i] = _subject[i];
	}
	this->Subject[SUJECT_NAME_LEN] = 0;
}


void Grade::Print()
{
	cout << "Subject: " << getSubject() << endl;
	cout << "Grade: " << getValue() << endl;
}
