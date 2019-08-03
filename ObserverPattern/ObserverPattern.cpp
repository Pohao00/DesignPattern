#include "Observer.h"
#include "WeatherData.h"
#include "CurrentConditionDisplay.h"
#include "ThirdPartyDisplay.h"

int main() {

	WeatherData weatherdata;
	CurrentConditionDisplay currentconditiondisplay;
	ThirdPartyDisplay thirdpartydisplay;

	weatherdata.RegisterObserver(&currentconditiondisplay);
	weatherdata.RegisterObserver(&thirdpartydisplay);

	weatherdata.SetHumidity(25);
	weatherdata.NotifyObserver();
	std::cout << currentconditiondisplay.GetHumidity() << std::endl;
	weatherdata.SetHumidity(30);
	weatherdata.NotifyObserver();
	std::cout << thirdpartydisplay.GetHumidity() << std::endl;

	system("pause");
	return 0;
}