#ifndef getyposition_H
#define getyposition_H

#include "../CommandBase.h"
#include "WPILib.h"

class getyposition: public CommandBase
{
public:
	getyposition();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
