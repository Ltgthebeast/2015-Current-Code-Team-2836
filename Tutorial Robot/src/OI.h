#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:

public:
	Joystick *Joystick1;
	Joystick *Joystick2;
	Joystick *Joystick3;

	JoystickButton *Button1;
	JoystickButton *Button2;
	OI();
};

#endif
