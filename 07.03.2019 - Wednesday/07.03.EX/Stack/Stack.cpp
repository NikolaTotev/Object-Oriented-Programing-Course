#include "pch.h"
#include <iostream>
#include "Stack.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	Stack s;
	s.push(20);
	s.push(202);
	cout << s.peek();
	s.pop();
	s.pop();
	cout << s.peek();

}


