#pragma once
#define NULL 0

class Command {
public:
	Command() {}
	~Command() {}

	virtual void Excute() = 0;

};