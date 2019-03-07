#pragma once
class Phone
{
	char model[10];
	const int SIZE = 25;
	const int CAPACITY = SIZE - 1;

public:
	const char* getModel() const
	{
		return model;
	}
	void setModel(const char* _model);
};