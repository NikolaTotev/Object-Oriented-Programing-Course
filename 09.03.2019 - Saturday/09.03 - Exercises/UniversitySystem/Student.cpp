#include  "Student.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

Student::Student(unsigned int _fnNumber, const char _name[NAME_SIZE], Major _major, unsigned int _year)
{
	fnNumber = _fnNumber;
	major = _major;
	year = _year;

	for(int i = 0; i < NAME_SIZE-1; i ++)
	{
		this->Name[i] = _name[i];
	}
	this->Name[NAME_SIZE] = 0;

	setGradeCounter(0);
}

 float Student::getGrade(const char _subject[SUJECT_NAME_LEN])
{
	for (int i = 0; i < gradeCounter; i++)
	{
		if (grades[i].getSubject())
		{
			return grades[i].getValue();
		}
	}
	cout << "There is no grade for " << _subject << endl;
	return -1;
}

 void Student::addGrade(float _gradeValue, const char _subject[SUJECT_NAME_LEN])
 {
	 grades[gradeCounter] = Grade(_gradeValue, _subject);
	 setGradeCounter(getGradeCounter()+1);
 }

 float Student::getAverage()
 {
	 int gradeSum = 0;
	 for (int i = 0; i < getGradeCounter(); i++)
	 {
		 gradeSum += grades[i].getValue();
	 }

	 return gradeSum / getGradeCounter();
 }

void Student::PrintGrades()
{
	for(int i = 0; i < getGradeCounter(); i ++)
	{
		grades[i].Print();
	}
}


void Student::sortGrades()
{
	
}


