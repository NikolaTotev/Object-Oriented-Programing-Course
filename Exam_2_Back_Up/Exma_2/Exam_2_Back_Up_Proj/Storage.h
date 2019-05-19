#pragma once
class Storage
{
public:
	const char* hash_code() const
	{
		return hashCode;
	}

	void set_hash_code(char* hash_code)
	{
		hashCode = hash_code;
	}

	const char* device_name() const
	{
		return deviceName;
	}

	void set_device_name(char* device_name)
	{
		deviceName = device_name;
	}

	int max_capacity() const
	{
		return maxCapacity;
	}

	void set_max_capacity(int max_capacity)
	{
		maxCapacity = max_capacity;
	}

	int used_capacity() const
	{
		return usedCapacity;
	}

	void set_used_capacity(int used_capacity)
	{
		usedCapacity = used_capacity;
	}

private:
	const char* hashCode;
	const char* deviceName;
	int maxCapacity;
	int usedCapacity;
	
public:
	Storage();

	Storage(const char* hash_code, const char* device_name, int max_capacity, int used_capacity);

	~Storage();
};

