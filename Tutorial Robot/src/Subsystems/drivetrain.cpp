#include "drivetrain.h"
#include "../RobotMap.h"

drivetrain::drivetrain() :
		Subsystem("ExampleSubsystem")
{
	Ldrive = new Talon;
	Rdrive = new Talon;
}

void drivetrain::InitDefaultCommand()
{
	SetDefaultCommand(new getyposition);
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}
void drivetrain::Ldrive(float speed)
{
	Ldrive->Set(speed);
}
void drivetrain::Rdrive(float speed)
{
	Rdrive->Set(speed);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
