#pragma once

#include <iostream>
#include <vector>

class Observable;
class Observer {
public:
	virtual void update(Observable* _observable) = 0;
};

class Observable {
public:
	Observable() {}
	virtual ~Observable() {}

	void RegisterObserver(Observer* _observer) {
		observers.push_back(_observer);
	}

	void RemoveObserver(Observer* _observer) {
		std::vector<Observer *> tmp_observers = observers;
		for (auto ele : observers) {
			if (ele != _observer)
				tmp_observers.push_back(ele);
		}
		observers.clear();
		observers = tmp_observers;
	}

	void NotifyObserver() {
		for (auto ele : observers) {
			ele->update(this);
		}
	}

private:
	std::vector<Observer *> observers;

};