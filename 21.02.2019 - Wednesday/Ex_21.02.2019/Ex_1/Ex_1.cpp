#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;
struct Vector
{
	float x;
	float y;
	float length()
	{
		return sqrt(pow(x, 2)+pow(y, 2));
	}
};

int main()
{
	Vector a;
	a.x = 4;
	a.y = 20;

	Vector b;
	b.x = 3;
	b.y = 4;
	cout << a.length() << endl;
	cout << b.length() << endl;

}

