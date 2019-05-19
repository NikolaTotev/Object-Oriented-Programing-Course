#pragma once
#include <iostream>

class OnlineService
{
	int port;
	int numberOfConnectedDevices;
	int maxNumberOfDevices;
public:
	OnlineService();
	OnlineService(int _maxDevices, int port =0, int numberOfConnDevices = 0);

	bool operator==(const OnlineService& rhs);

	~OnlineService();

	void setNewPort(int newPort)
	{
		port = newPort;
	}

	int getPort()
	{
		return port;
	}

	//========================================================

	int number_of_connected_devices() const
	{
		return numberOfConnectedDevices;
	}

	void set_number_of_connected_devices(int number_of_connected_devices)
	{
		numberOfConnectedDevices = number_of_connected_devices;
	}

	//========================================================
	int max_number_of_devices() const
	{
		return maxNumberOfDevices;
	}

	void set_max_number_of_devices(int max_number_of_devices)
	{
		maxNumberOfDevices = max_number_of_devices;
	}
	//========================================================

	void plugInDevice()
	{
		if(numberOfConnectedDevices!= maxNumberOfDevices)
		{
			std::cout << "Device connected successfully" << std::endl;
			return;
		}
		std::cout << "Failed to connect device" << std::endl;
	}

	void turnOffDevice()
	{
		numberOfConnectedDevices--;
	}
};

