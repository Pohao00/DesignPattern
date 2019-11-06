#pragma once
#include <iostream>
#include <memory>
#include <mutex>

class ChocolateFactory {
public:
	~ChocolateFactory();

	static std::shared_ptr<ChocolateFactory> GetInstance();
	void Boiler(int _water);
	int GetWater();

private:
	ChocolateFactory();
	static std::shared_ptr<ChocolateFactory> Chocolate_Factory_;
	static std::mutex Chocolate_Factory_lock_;
	int water_ = 0;

};