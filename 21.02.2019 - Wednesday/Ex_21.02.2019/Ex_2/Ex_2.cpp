
#include "pch.h"
#include <iostream>

void swap1(int** a, int** b)
{
	int** c = a;
	a = b;
	b = c;
}
 
int main()
{
	int inputA;
	int inputB;
	int* pa = &inputA;
	int* pb = &inputB;
	std::cin >> inputA;
	std::cin >> inputB;

	std::cout << "A" << pa << std::endl;
	std::cout << "B" << pb << "END" << std::endl;
	swap1(&pa, &pb);
	//swap_1(inputA, inputB);

	std::cout << "A" << pa << std::endl;
	std::cout << "B" << pb;
}



