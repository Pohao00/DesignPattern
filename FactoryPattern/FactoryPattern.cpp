#include "Pizza.h"
#include "PizzaStore.h"

int main() {

	Pizza* pizza;

	PizzaStore* NYPizzaFactory = new NYPizzaStore;
	pizza = NYPizzaFactory->CreatePizza("Clam");
	pizza->PizzaStytle();
	delete pizza;

	PizzaStore* ChicagoPizzaFactory = new ChicagoPizzaStore;
	pizza = ChicagoPizzaFactory->CreatePizza("Cheese");
	pizza->PizzaStytle();
	delete pizza;

	delete NYPizzaFactory;
	delete ChicagoPizzaFactory;

	system("pause");

	return 0;
}