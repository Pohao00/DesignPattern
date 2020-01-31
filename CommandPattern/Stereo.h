#pragma once

#include <string>
#include <iostream>

class Stereo {
public:
	Stereo(std::string _Palce) {
		Place_ = _Palce;
	}
	~Stereo() {}
	
	void On() {
		std::cout << Place_ << " stereo on!!" << std::endl;
	}

	void Off() {
		std::cout << Place_ << " stereo off!!" << std::endl;
	}

	std::string PlaceName() {
		return Place_;
	}

private:
	std::string Place_ = "";
};