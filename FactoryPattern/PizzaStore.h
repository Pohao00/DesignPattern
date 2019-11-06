#pragma once
#include <string>

#include "Pizza.h"

class PizzaStore {
public:
	PizzaStore() {}
	virtual ~PizzaStore() {}

	virtual Pizza* CreatePizza(std::string _stytle) = 0;
	virtual void OrderPizza() = 0;

};

class NYPizzaStore : public PizzaStore {
public:
	NYPizzaStore() {}
	~NYPizzaStore() {}

	Pizza* CreatePizza(std::string _stytle) {

		if (_stytle == "Cheese")
			return new NYStytleCheesePizza;
		if (_stytle == "Clam")
			return new NYStytleClamPizza;

	}

	void OrderPizza() {

	}

};

class ChicagoPizzaStore : public PizzaStore {
public:
	ChicagoPizzaStore() {}
	~ChicagoPizzaStore() {}

	Pizza* CreatePizza(std::string _stytle) {

		if (_stytle == "Cheese")
			return new ChicagoStytleCheesePizza;
		if (_stytle == "Clam")
			return new ChicagoStytleClamPizza;

	}

	void OrderPizza() {

	}

};