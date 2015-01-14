#include "armseqeunce.h"

armseqeunce::armseqeunce()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	rotatearms = new Talon(6);
	bringarmsup = new Talon(7);
	LimitSwitch1 = new DigitalInput(8);
	LimitSwitch2 = new DigitalInput(9);
}

// Called just before this Command runs the first time
void armseqeunce::Initialize()
{
	/*
	 * bool LimitSwitchBool = LimitSwitch1->Get();
	 * if(LimitSwitchBool == true)
	 * {
	 * 		Talon->Set(.1);
	 * }
	 * else if(LimitSwitchBool == false)
	 * {
	 *      Talon->Set(0)
	 * }
	 *
	 */

}

// Called repeatedly when this Command is scheduled to run
void armseqeunce::Execute()
{
	bool LimitSwitchBool = LimitSwitch1->Get();
	if(LimitSwitch1 == true)
	{
		rotatearms->Set(0);
		bool LimitSwitchBool2 = LimitSwitch2->Get();
		if(LimitSwitch2 == true)
		{
			bringarmsup->Set(.2);
			Drivetrain->Ldrive->Set(-1);
			Drivetrain->Rdrive->Set(1);
			Wait(.5);
			Drivetrain->Ldrive->Set(0);
			Drivetrain->Rdrive->Set(0);
			Wait(.2);
			rotatearms->Set(-1);
			bool LimitSwitchBool3 = LimitSwitch3->Get();
			if(LimitSwitch3 == true)
			{
				rotatearms->Set(0);
			}
			else if(LimitSwitch3 == false)
			{
				rotatearms->Set(-1);
			}

		}
		else if(LimitSwitch2 == false)
		{
			bringarmsup->Set(0);
		}
	}
	else if(LimitSwitch1 == false)
	{
		rotatearms->Set(.2);
	}
}

// Make this return true when this Command no longer needs to run execute()
bool armseqeunce::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void armseqeunce::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void armseqeunce::Interrupted()
{

}
