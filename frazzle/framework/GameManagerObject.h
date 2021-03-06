//
//  GameManagerObject.h
//  frazzle
//
//  Created by Zachary Breman on 8/14/14.
//  Copyright (c) 2014 Zachary Breman. All rights reserved.
//

#ifndef __frazzle__GameManagerObject__
#define __frazzle__GameManagerObject__

#include "ManagerObject.h"

class GameManagerObject : public ManagerObject
{
public:
	virtual void InitObject();
	virtual void ProcessObject();
};

#endif /* defined(__sentinels__GameManagerObject__) */
