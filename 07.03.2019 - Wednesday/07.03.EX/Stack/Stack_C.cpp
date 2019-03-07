#include "Stack.h"

void Stack::push(int num)
{
	if(counter == SIZE)
	{
		std::cout << "Stackoverflow" << std::endl;
	}
	else
	{
		internalArray[counter] = num;
		counter++;
	}
	
}

void Stack::pop()
{
	counter--;
}

Stack::Stack()
{
	counter = 0;
}
