#pragma once

#include "Command.h"
#include "Stereo.h"

class StereoOnCommand : public Command {
public:
	StereoOnCommand(Stereo* _Stereo) {
		Stereo_ = _Stereo;
	}
	~StereoOnCommand() {}

	void Excute() {
		Stereo_->On();
	}

private:
	Stereo* Stereo_ = NULL;
};

class StereoOffCommand : public Command {
public:
	StereoOffCommand(Stereo* _Stereo) {
		Stereo_ = _Stereo;
	}
	~StereoOffCommand() {}

	void Excute() {
		Stereo_->Off();
	}

private:
	Stereo* Stereo_ = NULL;
};