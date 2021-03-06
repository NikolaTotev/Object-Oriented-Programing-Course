
#include <iostream>
#include "Student.h"
#include "Grade.h"

using std::cout;
using std::cin;
using std::endl;


int main()
{

	Student s(22, "Nikola", SoftwareEngineering, 1);
	
	cout << s.getName() << endl << s.getFnNumber() << endl << s.getYear() << endl <<  s.getMajor() << endl;
	s.addGrade(3, "DIS");
	s.addGrade(4, "DS 2");
	s.addGrade(6, "Algebra");

	cout << "Average" << s.getAverage() << endl;

	s.PrintGrades();

	cout << "Checking DIS" << s.getGrade("DIS") << endl;
}

