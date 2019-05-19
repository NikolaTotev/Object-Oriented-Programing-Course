#pragma once
#include <cstring>

class Storage
{
public:
	const char* hash_code() const
	{
		return hashCode;
	}

	void set_hash_code(const char* hash_code)
	{
		int len = strlen(hash_code);
		hashCode = new char[len];
		for (int i = 0; i < len; ++i)
		{
			hashCode[i] = hash_code[i];
		}
		hashCode[len] = 0;
	}

	//=============================================
	//DEVICE NAME
	const char* device_name() const
	{
		return deviceName;
	}

	void set_device_name(const char* device_name)
	{
		int len = strlen(device_name);
		deviceName = new char[len];
		for (int i = 0; i < len; ++i)
		{
			deviceName[i] = device_name[i];
		}
		deviceName[len] = 0;

	}
	//=============================================
	//MAX CAPACITY
	float max_capacity() const
	{
		return maxCapacity;
	}

	void set_max_capacity(float max_capacity)
	{
		maxCapacity = max_capacity;
	}

	//=============================================
	//USED CAPACITY
	float used_capacity() const
	{
		return usedCapacity;
	}

	void set_used_capacity(float used_capacity)
	{
		usedCapacity = used_capacity;
	}
	//=============================================
private:
	char* hashCode;
	char* deviceName;
	float maxCapacity;
	float usedCapacity;

public:
	Storage();
	Storage(const char* hash_code, const char* device_name, float max_capacity, float used_capacity);
	Storage(const Storage& other);
	bool operator==(const Storage& rhs);
	~Storage();
};

