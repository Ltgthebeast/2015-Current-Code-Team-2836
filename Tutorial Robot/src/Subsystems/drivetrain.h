#ifndef drivetrain_H
#define drivetrain_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class drivetrain: public Subsystem
{
private:
	Talon *Ldrive;
	Talon *Rdrive;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	drivetrain();
	void InitDefaultCommand();
};

#endif
