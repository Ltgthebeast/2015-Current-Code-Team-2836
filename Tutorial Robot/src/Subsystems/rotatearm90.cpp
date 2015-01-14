#include "rotatearm90.h"
#include "../RobotMap.h"

rotatearm90::rotatearm90() :
		Subsystem("ExampleSubsystem")
{
	Rotate90 = new Servo;
}

void rotatearm90::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}
void rotatearm90::Rotate90(float position)
{
	Rotate90->SetAngle(position);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
