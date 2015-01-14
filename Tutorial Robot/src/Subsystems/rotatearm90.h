#ifndef rotatearm90_H
#define rotatearm90_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class rotatearm90: public Subsystem
{
private:
	Servo *Rotate90;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	rotatearm90();
	void InitDefaultCommand();
};

#endif
