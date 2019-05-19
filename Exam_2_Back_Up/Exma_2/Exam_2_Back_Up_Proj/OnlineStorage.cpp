#include "OnlineStorage.h"
#include <math.h>


OnlineStorage::OnlineStorage():pricePerMonth(0)
{
}

OnlineStorage::OnlineStorage(float pricePerMonth, const char* hashCode, const char* deviceName, float maxCap, float usedCap, int port, int numberOfDevices, int maxDevices) :
 pricePerMonth(pricePerMonth), Storage(hashCode, deviceName, maxCap, usedCap), OnlineService(maxDevices, port, numberOfDevices)
{
}

bool OnlineStorage::operator==(const OnlineStorage & rhs)
{
	return pricePerMonth = rhs.price_per_month()&&Storage::operator==(rhs);
}


OnlineStorage::~OnlineStorage()
{
}

void OnlineStorage::uploadFile(int fileSize)
{
	if(number_of_connected_devices() > 0)
	{
		set_used_capacity(used_capacity() + fileSize);
		return;
	}
	std::cout << "Failed to upload, no device connetcted" << std::endl;
}

int OnlineStorage::calcPrice()
{
	return ceil(used_capacity()*price_per_month());
}
