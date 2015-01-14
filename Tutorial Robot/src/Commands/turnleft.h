#ifndef turnleft_H
#define turnleft_H

#include "../CommandBase.h"
#include "WPILib.h"

class turnleft: public CommandBase
{
public:
	turnleft();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
