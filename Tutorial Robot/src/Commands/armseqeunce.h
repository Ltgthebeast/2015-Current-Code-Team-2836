#ifndef armseqeunce_H
#define armseqeunce_H

#include "../CommandBase.h"
#include "WPILib.h"

class armseqeunce: public CommandBase
{
public:
	Talon *rotatearms;
	Talon *bringarmsup;
	DigitalInput *LimitSwitch1;
	DigitalInput *LimitSwitch2;
	DigitalInput *LimitSwitch3;
	armseqeunce();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
