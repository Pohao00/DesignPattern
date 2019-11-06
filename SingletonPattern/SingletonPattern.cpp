#include "ChocolateFactory.h"

int main() {

	std::shared_ptr<ChocolateFactory> Chocolate_Factory_1 = ChocolateFactory::GetInstance();
	std::cout << "Chocolate_Factory_1 boiler water:" << Chocolate_Factory_1->GetWater() << std::endl;
	Chocolate_Factory_1->Boiler(100);
	std::cout << "Chocolate_Factory_1 boiler water:" << Chocolate_Factory_1->GetWater() << std::endl;

	std::shared_ptr<ChocolateFactory> Chocolate_Factory_2 = ChocolateFactory::GetInstance();
	std::cout << "Chocolate_Factory_2 boiler water:" << Chocolate_Factory_2->GetWater() << std::endl;
	Chocolate_Factory_2->Boiler(500);
	std::cout << "Chocolate_Factory_2 boiler water:" << Chocolate_Factory_2->GetWater() << std::endl;

	std::cout << "Chocolate_Factory_1 boiler water:" << Chocolate_Factory_1->GetWater() << std::endl;

	system("Pause");
	return 0;
}