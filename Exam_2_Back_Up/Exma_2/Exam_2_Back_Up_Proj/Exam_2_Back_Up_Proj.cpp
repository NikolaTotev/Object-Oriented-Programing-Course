#include <iostream>
#include "Storage.h"
#include  <math.h>
#include "OnlineStorage.h"
int main()
{
	OnlineStorage currentStorage(3.50, "3u487yyd12gad21efadf", "OOP-Exams-Dont-Steal", 8.0, 5.5, 80, 3, 5);
	currentStorage.uploadFile(1.3);
	std::cout << "Usage price " << currentStorage.calcPrice();

}

