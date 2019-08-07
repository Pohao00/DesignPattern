#pragma once

#include "Beverage.h"

class CondimenDecorator : public Beverage {
public:
	virtual std::string GetDescription() = 0;
};

class Milk : public CondimenDecorator {
public:
	Milk(Beverage* _beverage) : beverage_(_beverage) {}
	~Milk() {}

	std::string GetDescription() {
		return beverage_->GetDescription() + ", " + "Milk";
	}

	double Cost() {
		return beverage_->Cost() + .50;
	}

private:
	Beverage* beverage_;
};

class Mocha : public CondimenDecorator {
public:
	Mocha(Beverage* _beverage) : beverage_(_beverage) {}
	~Mocha() {}

	std::string GetDescription() {
		return beverage_->GetDescription() + ", " + "Mocha";
	}

	double Cost() {
		return beverage_->Cost() + .20;
	}

private:
	Beverage* beverage_;

};