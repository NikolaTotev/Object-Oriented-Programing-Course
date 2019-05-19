#pragma once
#include "OnlineService.h"
#include "Storage.h"
class OnlineStorage :
	public OnlineService, public Storage
{
public:
	float price_per_month() const
	{
		return pricePerMonth;
	}

	void set_price_per_month(float price_per_month)
	{
		pricePerMonth = price_per_month;
	}

private:
	float pricePerMonth;

public:
	OnlineStorage();
	OnlineStorage(float pricePerMonth, const char* hashCode, const char* deviceName, float maxCap, float usedCap, int port, int numberOfDevices, int maxDevices);

	bool operator ==(const OnlineStorage& rhs);

	~OnlineStorage();

	void uploadFile(int fileSize);
	int calcPrice();
};

