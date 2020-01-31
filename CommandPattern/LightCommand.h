#pragma once

#include "Command.h"
#include "Light.h"

class LightOnCommand : public Command {
public:
	LightOnCommand(Light* _Light) {
		Light_ = _Light;
	}
	~LightOnCommand() {}

	void Excute() {
		Light_->On();
	}

private:
	Light* Light_ = NULL;
};

class LightOffCommand : public Command {
public:
	LightOffCommand(Light* _Light) {
		Light_ = _Light;
	}
	~LightOffCommand() {}

	void Excute() {
		Light_->Off();
	}

private:
	Light* Light_ = NULL;
};