#include "pch.h"
#include "Storage.h"


Storage::Storage():hashCode(" "),deviceName(" "),maxCapacity(0), usedCapacity(0)
{
}

Storage::Storage(const char* hash_code, const char* device_name, int max_capacity, int used_capacity)
	: hashCode(hash_code),
	deviceName(device_name),
	maxCapacity(max_capacity),
	usedCapacity(used_capacity)
{
}

Storage::~Storage()
{
	delete[] hashCode;
	delete[] deviceName;
}


