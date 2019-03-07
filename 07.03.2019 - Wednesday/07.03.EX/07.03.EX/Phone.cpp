#include "Phone.h"

int stringLength(const char* _string)
{
	int size = 0;
	while (_string[size] != '\0')
	{
		size++;
	}

	return size;
}

int min(int a, int b)
{
	if(a>b)
	{
		return b;
	}
	return a;
}

void Phone::setModel(const char* _model)
{
	int size = stringLength(_model);
	int newLen = min(size, Phone::CAPACITY-1);
	for(int i = 0; i < newLen; i ++)
	{
		this->model[i] = _model[i];
	}
	this->model[newLen] = 0;
}


//Book - Effective c++, 3, 4, 16, 22 - Chapters