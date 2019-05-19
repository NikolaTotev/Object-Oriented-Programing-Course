#pragma once
#include "Temperature.h"
class Forecast
{
	char* city;
	Temperature temp_stats;
	
	Forecast();
	Forecast(const char* city, const Temperature& temp);

	const char* getCity() { return city; }
	Temperature getTemp() { return temp_stats; }
	void updateIfHotter();
};