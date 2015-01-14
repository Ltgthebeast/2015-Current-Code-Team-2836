#include "getyposition.h"

getyposition::getyposition()
{
	Requires(Drivetrain);
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void getyposition::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void getyposition::Execute()
{
	Drivetrain->Ldrive(oi->Joystick1->GetY());
	Drivetrain->Rdrive(oi->Joystick2->GetY());
}

// Make this return true when this Command no longer needs to run execute()
bool getyposition::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void getyposition::End()
{
	Drivetrain->Ldrive->Set(0.0);
	Drivetrain->Rdrive->Set(0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void getyposition::Interrupted()
{
	Drivetrain->Ldrive->Set(0.0);
	Drivetrain->Rdrive->Set(0.0);
}
