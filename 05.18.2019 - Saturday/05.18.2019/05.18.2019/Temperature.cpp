#include "Temperature.h"

bool Temperature::checkEquality(const Temperature& rhs)
{
	bool maxAreEqual = (max_temp = rhs.max_temp);
	bool avrgAreEqual = (avrg_temp = rhs.avrg_temp);
	bool minAreEqual = (min_temp = rhs.min_temp);

	return maxAreEqual && avrgAreEqual && minAreEqual;
}

Temperature::Temperature() :max_temp(12), min_temp(12), avrg_temp(12)
{

}

Temperature::Temperature(int min, int avrg, int max)
{
	if(min < avrg && avrg < max)
	{
		setMax(max);
		setAvrg(avrg);
		setMin(min);
	}
	else
	{
		setMax(12);
		setAvrg(12);
		setMin(12);
	}
}

Temperature::~Temperature()
{
}

bool Temperature::operator==(const Temperature & rhs)
{
	return checkEquality(rhs);
}

bool Temperature::operator!=(const Temperature & rhs)
{
	return !checkEquality(rhs);
}

bool Temperature::operator<(const Temperature & rhs)
{
	bool maxCmp = (max_temp < rhs.max_temp);
	bool avrgCmp = (avrg_temp < rhs.avrg_temp);
	bool minCmp = (min_temp < rhs.min_temp);


	if (!maxCmp)
	{
		if (!minCmp)
		{
			return  avrgCmp;
		}
		return true;
	}
	return true;
}
