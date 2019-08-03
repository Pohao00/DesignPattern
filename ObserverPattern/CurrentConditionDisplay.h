#pragma once

#include "Observer.h"
#include "WeatherData.h"

class CurrentConditionDisplay : public Observer {
public:
	CurrentConditionDisplay() {}
	~CurrentConditionDisplay() {}

	void update(Observable* _observable) {
		WeatherData*  weatherdata = (WeatherData *) _observable;
		temperature_ = weatherdata->GetTemperature();
		humidity_ = weatherdata->GetHumidity();
		pressure_ = weatherdata->GetPressure();
	}

	float GetTemperature() {
		return temperature_;
	}

	float GetHumidity() {
		return humidity_;
	}

	float GetPressure() {
		return pressure_;
	}

private:
	float temperature_;
	float humidity_;
	float pressure_;
};