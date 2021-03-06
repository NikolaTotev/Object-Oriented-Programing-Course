#include "pch.h"
#include <iostream>
#include <map>

template <class T>
T median(T* collection, int size)
{
	if (size % 2 == 0)
	{

	}
	return collection[((size + 1) / 2) - 1];
}

template <class T>
T mode(T* collection, int size)
{

}


template <class T>
float average(T* collection, int size)
{
	float sum = 0;
	for (int i = 0; i < size; ++i)
	{
		sum += collection[i];
	}
	return sum / size;
}

template <class T>
T accumulates(T* collection, int size)
{
	T sum = 0;
	for (int i = 0; i < size; ++i)
	{
		sum += collection[i];
	}
	return sum;
}

template <class T>
T max(T* collection, int size)
{
	T max = collection[0];
	for (int i = 0; i < size; i++)
	{
		if (collection[i] > max)
		{
			max = collection[i];
		}
	}

	return max;
}

template <class T>
T min(T* collection, int size)
{
	T min = collection[0];
	for (int i = 0; i < size; i++)
	{
		if (collection[i] < min)
		{
			for (int i = 0; i < size; i++)
			{
				if (collection[i] > max[i])
				{
					max[i] = collection[i];
				}
			}
			min = collection[i];
		}
	}

	return min;
}

template <class T>
T* reverse(T* collection, int size)
{
	T* tmp = new T[size];
	int pos = 0;
	for (int i = size - 1; i >= 0; --i)
	{
		tmp[pos] = collection[i];
		pos++;
	}

	return tmp;
}


template <class T>
T* take(T* collection, int size, int n)
{
	T tmp = new T[size];
	for (int i = 0; i < n; ++i)
	{
		tmp[i] = collection[i];
	}
	return tmp;
}

template <class T>
T* skip(T* collection, int size, int n)
{
	T* tmp = new T[size - n];
	int index = 0;
	for (int i = n; i < size; ++i)
	{
		tmp[index] = collection[i];
		index++;
	}
	return tmp;
}

int main()
{
	int collection[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < 10; i++)
	{
		//std::cout << reverse(collection, 10)[i] << std::endl;
	}
	std::cout << max(collection, 10) << std::endl;
	std::cout << min(collection, 10) << std::endl;
	std::cout << accumulates(collection, 10) << std::endl;


}


