#pragma once
class Temperature
{
	int max_temp;
	int min_temp;
	int avrg_temp;

	bool checkEquality(const Temperature& rhs);

public:
	Temperature();
	Temperature(int min, int avrg, int max);
	~Temperature();

	void setMax(int newMax) { max_temp = newMax; };
	void setAvrg(int newAvrg) { avrg_temp = newAvrg; };
	void setMin(int newMin) { min_temp = newMin; };

	int getMax()const { return max_temp; }
	int getAvrg()const { return max_temp; }
	int getMin()const { return max_temp; }
	int getAmplitude()const { return(max_temp - min_temp); }

	bool operator == (const Temperature& rhs);
	bool operator != (const Temperature& rhs);
	bool operator < (const Temperature& rhs);
	bool operator > (const Temperature& rhs);
	bool operator <= (const Temperature& rhs);
	bool operator >= (const Temperature& rhs);
};