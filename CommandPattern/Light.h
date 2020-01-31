#pragma once

#include <iostream>
#include <string>

class Light {
public:
	Light(std::string _Place) { 
		Place_ = _Place;
	}
	~Light() {}

	void On() {
		std::cout << Place_ << " light on!!" << std::endl;
	}

	void Off() {
		std::cout << Place_ << " light off!!" << std::endl;
	}

	std::string PlaceName() {
		return Place_;
	}

private:
	std::string Place_ = "";

};