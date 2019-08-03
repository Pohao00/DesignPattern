#pragma once

#include "Observer.h"

class WeatherData : public Observable{
public:
	WeatherData() {}
	~WeatherData() {}

	void MeasurementsChandeg() {
		NotifyObserver();
	}

	void SetTemperature(float _temperature) {
		temperature_ = _temperature;
	}

	void SetHumidity(float _humidity) {
		humidity_ = _humidity;
	}

	void SetPressure(float _pressure) {
		pressure_ = _pressure;
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