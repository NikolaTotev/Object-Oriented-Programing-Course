#pragma once
#include "Grade.h"


enum Major
{
	SoftwareEngineering = 0,
	ComputerScience = 1,
	Informatics = 2,
	InformationSystems = 3,
	MathematicsAndInformatics = 4,
	Statistics = 5,
	AppliedMathematics = 6
};

class Student
{
	static const int NAME_SIZE = 30;
	static const int NUMBER_OF_GRADES = 10;

private:
	unsigned int fnNumber;
	char Name[NAME_SIZE];
	Major major;
	unsigned int year;
	unsigned int group;
	Grade grades[NUMBER_OF_GRADES];
	int gradeCounter;

public:

	Student(unsigned int _fnNumber,const char _name[NAME_SIZE], Major _major, unsigned int _year);

	void setGradeCounter(int _value)
	{
		gradeCounter = _value;
	}
#pragma  region Getters

	int getGradeCounter()
	{
		return gradeCounter;
	}

	const char* getName() const
	{
		return Name;
	}

	unsigned int getFnNumber() const
	{
		return fnNumber;
	}

	unsigned int getGroup() const
	{
		return group;
	}

	unsigned int getYear() const
	{
		return year;
	}

	Major getMajor()
	{
		return major;
	}

	const Grade* getGrades() const
	{
		return grades;
	}
#pragma  endregion 

	float getAverage();

	void addGrade(float _gradeValue, const char _subject[SUJECT_NAME_LEN]);

	float getGrade(const char _subject[SUJECT_NAME_LEN]);

	void PrintGrades();

	void sortGrades();

};