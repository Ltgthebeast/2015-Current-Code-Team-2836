#include "turnleft.h"

turnleft::turnleft()
{
	Requires(Drivetrain);
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void turnleft::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void turnleft::Execute()
{
	Drivetrain->Ldrive->Set(-.5);
	Drivetrain->Rdrive->Set(.5);

}

// Make this return true when this Command no longer needs to run execute()
bool turnleft::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void turnleft::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void turnleft::Interrupted()
{

}
