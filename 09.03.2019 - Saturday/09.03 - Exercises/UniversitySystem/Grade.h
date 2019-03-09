#pragma once
static const int SUJECT_NAME_LEN = 20;

class Grade
{
	char Subject[SUJECT_NAME_LEN];
	float Value;

public:

	Grade();
	Grade(float _value, const char _subject[SUJECT_NAME_LEN]);

	float getValue() { return Value; }
	char*  getSubject() { return Subject; }

	void Print();
};