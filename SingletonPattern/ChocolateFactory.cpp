#include "ChocolateFactory.h"

std::shared_ptr<ChocolateFactory> ChocolateFactory::Chocolate_Factory_ = NULL;
std::mutex ChocolateFactory::Chocolate_Factory_lock_;

ChocolateFactory::ChocolateFactory() {

}

ChocolateFactory::~ChocolateFactory() {

}

std::shared_ptr<ChocolateFactory> ChocolateFactory::GetInstance() {

	std::lock_guard<std::mutex> Chocolate_Factory_lock(Chocolate_Factory_lock_);
	if (Chocolate_Factory_ == NULL) {
		Chocolate_Factory_ = std::shared_ptr<ChocolateFactory>(new ChocolateFactory);
	}
	
	return Chocolate_Factory_;

}

void ChocolateFactory::Boiler(int _water) {
	water_ = _water;
}

int ChocolateFactory::GetWater() {
	return water_;
}

	