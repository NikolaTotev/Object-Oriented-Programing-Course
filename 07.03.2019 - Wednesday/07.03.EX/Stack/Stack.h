#pragma once
#include <iostream>

 const int SIZE = 10;

class Stack
{
private:
	int internalArray[SIZE];
	int counter;

public:

	Stack();
	void push(int num);
	void pop();

	int peek() const
	{
		if(counter ==0)
		{
			std::cout << "Empty Stack!" << std::endl;
			return -1; 
		}
		return internalArray[counter-1];
	}
};