#include "pch.h"
#include <iostream>
#include "Temperature.h"
int main()
{
	Temperature t1(1, 2, 3);
	Temperature t2(4, 5, 6);

	std::cout << (t1 < t2);
}
