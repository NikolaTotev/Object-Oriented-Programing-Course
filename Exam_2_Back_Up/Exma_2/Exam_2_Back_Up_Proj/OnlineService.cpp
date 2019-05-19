#include "OnlineService.h"



OnlineService::OnlineService()
{
}

OnlineService::OnlineService(int _maxDevices, int port, int numberOfConnDevices):maxNumberOfDevices(_maxDevices), port(port), numberOfConnectedDevices(numberOfConnDevices)
{
}


OnlineService::~OnlineService()
{
}

bool OnlineService::operator==(const OnlineService& rhs)
{
	return port == rhs.port
		&& numberOfConnectedDevices == rhs.numberOfConnectedDevices
		&& maxNumberOfDevices == rhs.maxNumberOfDevices;
}
