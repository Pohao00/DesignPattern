#pragma once

#include "vector"

class Beverage {
public:
	virtual std::string GetDescription() {
		return description;
	}
	virtual double Cost() = 0;

private:
	std::string description = "Unknown Beverage";
};
