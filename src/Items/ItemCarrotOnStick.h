
// ItemCarrotOnStick.h

// Declares the various carrot on a stick ItemHandlers





#pragma once

#include "../Item.h"
#include "../Root.h"





class cItemCarrotOnStickHandler :
	public cItemHandler
{
	typedef cItemHandler super;

public:
	cItemCarrotOnStickHandler(int a_ItemType) :
		super(a_ItemType)
	{
	}



	virtual short GetDurabilityLossByAction(eDurabilityLostAction a_Action)
	{
		switch (a_Action)
		{
			case dlaCarrotOnStickBoost:  return 7;
			default:                     return 0;
		}
	}
} ;
