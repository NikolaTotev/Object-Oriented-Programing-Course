// 07.03.EX.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Phone.h"
using std::cout;
using std::cin;
using std::endl;


int main()
{
	Phone p;
	p.setModel("NokiaNokiaNokia");
	cout << p.getModel() << endl;
}

