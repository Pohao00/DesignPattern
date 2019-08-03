#include "Duck.h"
#include "RubberDuck.h"

int main() {

	FlyWithWings *flywithwings = new FlyWithWings;
	MuteQuack *mutequack = new MuteQuack;

	RubberDuck rubberduck;
	rubberduck.SetFlyBehavior(flywithwings);
	rubberduck.SetQuackBehavior(mutequack);

	rubberduck.PerformFly();
	rubberduck.PerformQuack();

	system("pause");

	delete flywithwings;
	delete mutequack;

	return 0;
}
