#pragma once

#include "Behavior.h"

class Duck {
public:
	Duck() {}
	~Duck() {}

	void Swim() {}
	void Display() {}
	void PerformFly() {
		flybehavior_->Fly();
	}
	void PerformQuack() {
		quackbehavior_->Quack();
	}
	void SetFlyBehavior(FlyBehavior *_flybehavior) {
		flybehavior_ = _flybehavior;
	}
	void SetQuackBehavior(QuackBehavior *_quackbehavior) {
		quackbehavior_ = _quackbehavior;
	}

protected:

private:
	FlyBehavior *flybehavior_;
	QuackBehavior *quackbehavior_;
};