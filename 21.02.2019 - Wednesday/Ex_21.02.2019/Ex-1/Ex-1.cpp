
#include "pch.h"
#include <iostream>
void swap(int* a, int* b);
void swap_1(int& a, int& b);
using namespace std;
int main()
{
	int inputA;
	int inputB;
	cin >> inputA;
	cin >> inputB;

	swap(&inputA, &inputB);
	//swap_1(inputA, inputB);
	
	cout << "A" << inputA << endl;
	cout << "B" << inputB;
}

void swap(int* a, int* b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

void swap_1(int& a, int& b)
{
	int c = a;
	a = b;
	b = c;
}
