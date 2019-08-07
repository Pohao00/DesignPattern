#pragma once

#include "Beverage.h"

class Espresso : public Beverage {
public:
	Espresso() {}
	~Espresso() {}

	std::string GetDescription() {
		return "Espresso";
	}

	double Cost() {
		return 1.99;
	}
};

class HouseBlend : public Beverage {
public:
	HouseBlend() {}
	~HouseBlend() {}

	std::string GetDescription() {
		return "House Blend Coffee";
	}

	double Cost() {
		return .89;
	}
};