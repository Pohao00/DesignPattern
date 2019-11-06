#pragma once
#include <iostream>

class Pizza {
public:
	Pizza() {}
	virtual ~Pizza() {}

	virtual void PizzaStytle() = 0;

};

class NYStytleCheesePizza : public Pizza {
public:
	NYStytleCheesePizza() {}
	~NYStytleCheesePizza() {}

	void PizzaStytle() {
		std::cout << "This is NYStytleCheesePizza!" << std::endl;
	}

};

class NYStytleClamPizza : public Pizza {
public:
	NYStytleClamPizza() {}
	~NYStytleClamPizza() {}

	void PizzaStytle() {
		std::cout << "This is NYStytleClamPizza!" << std::endl;
	}

};

class ChicagoStytleCheesePizza : public Pizza {
public:
	ChicagoStytleCheesePizza() {}
	~ChicagoStytleCheesePizza() {}

	void PizzaStytle() {
		std::cout << "This is ChicagoStytleCheesePizza!" << std::endl;
	}

};

class ChicagoStytleClamPizza : public Pizza {
public:
	ChicagoStytleClamPizza() {}
	~ChicagoStytleClamPizza() {}

	void PizzaStytle() {
		std::cout << "This is ChicagoStytleClamPizza!" << std::endl;
	}

};
