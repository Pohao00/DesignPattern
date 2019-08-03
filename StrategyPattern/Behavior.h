#include <iostream>

class FlyBehavior {
public:
	FlyBehavior() {}
	~FlyBehavior() {}

	virtual void Fly() {}

private:

protected:

};

class QuackBehavior {
public:
	QuackBehavior() {}
	~QuackBehavior() {}

	virtual void Quack() {}

protected:

private:

};

class FlyWithWings : public FlyBehavior {
public:
	FlyWithWings() {}
	~FlyWithWings() {}

	void Fly() {
		std::cout << "Fly hight!!" << std::endl;
	}

};

class FlyNoWay : public FlyBehavior {
public:
	FlyNoWay() {}
	~FlyNoWay() {}

	void Fly() {
		std::cout << "I can't fly!!" << std::endl;
	}

};

class Squeak : public QuackBehavior {
public:
	Squeak() {}
	~Squeak() {}

	void Quack() {
		std::cout << "Ca Ca!!" << std::endl;
	}

};

class MuteQuack : public QuackBehavior {
public:
	MuteQuack() {}
	~MuteQuack() {}

	void Quack() {
		std::cout << "Qa Qa!!" << std::endl;
	}

};






