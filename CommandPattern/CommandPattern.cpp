#include "Command.h"
#include "Light.h"
#include "Stereo.h"
#include "LightCommand.h"
#include "StereoCommand.h"

int main() {

	Light* LivingRoomLight = new Light("Living room");
	Light* DinningRoomLight = new Light("Dining room");
	Stereo* LivongRoomStereo = new Stereo("Living room");
	Stereo* DinningRoomStereo = new Stereo("Dining room");

	LightOnCommand LivingRoomLightOnCommand(LivingRoomLight);
	LightOffCommand LivingRoomLightOffCommand(LivingRoomLight);
	LightOnCommand DinningRoomLightOnCommand(DinningRoomLight);
	LightOffCommand DinnginRoomLightOffCommand(DinningRoomLight);
	StereoOnCommand LivingRoomStereoOnCommand(LivongRoomStereo);
	StereoOffCommand LivingRoomStereoOffCommand(LivongRoomStereo);
	StereoOnCommand DinningRoomStereoOnCommand(DinningRoomStereo);
	StereoOffCommand DinningRoomStereoOffCommand(DinningRoomStereo);

	LivingRoomLightOnCommand.Excute();
	LivingRoomLightOffCommand.Excute();
	DinningRoomLightOnCommand.Excute();
	LivingRoomStereoOffCommand.Excute();
	DinningRoomStereoOnCommand.Excute();

	return 0;
}