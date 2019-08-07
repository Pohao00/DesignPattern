#include<iostream>

#include "Coffee.h"
#include "CodimentDecorator.h"

int main() {

	Beverage* beverage = new Espresso;
	Beverage* tmp_beverage = beverage;

	beverage = &Milk(beverage);
	beverage = &Mocha(beverage);

	std::cout << beverage->GetDescription() << std::endl;
	std::cout << beverage->Cost() << std::endl;

	delete tmp_beverage;

	system("pause");
	return 0;
}