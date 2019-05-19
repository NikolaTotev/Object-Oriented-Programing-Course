#include "pch.h"
#include "Storage.h"
#include <algorithm>
#include <valarray>


Storage::Storage():maxCapacity(0), usedCapacity(0)
{
	set_device_name(" ");
	set_hash_code(" ");
}

Storage::Storage(const char* hash_code, const char* device_name, float max_capacity, float used_capacity)
	:
	maxCapacity(max_capacity),
	usedCapacity(used_capacity)
{
	set_device_name(device_name);
	set_hash_code(hash_code);
}

Storage::Storage(const Storage& other)
{
	maxCapacity = other.maxCapacity;
	usedCapacity = other.usedCapacity;

	int hashLen = strlen(other.hashCode);
	int nameLen = strlen(other.deviceName);

	const char* tmpName = deviceName;
	const char* tmpHash = hashCode;

	deviceName = new char[nameLen];
	hashCode = new char[hashLen];

	for (int i = 0; i < nameLen; ++i)
	{
		deviceName[i] = tmpName[i];
	}
	deviceName[nameLen] = 0;
}

Storage::~Storage()
{
	//delete[] hashCode;
	//delete[] deviceName;
}


bool Storage::operator==( const Storage& rhs)
{
	return hashCode == rhs.hashCode
		&& deviceName == rhs.deviceName
		&& maxCapacity == rhs.maxCapacity
		&& usedCapacity == rhs.usedCapacity;
}


