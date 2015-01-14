#ifndef rotatearm90degree_H
#define rotatearm90degree_H

#include "../CommandBase.h"
#include "WPILib.h"

class rotatearm90degree: public CommandBase
{
public:
	rotatearm90degree();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
