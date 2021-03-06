//
//  GameManager.h
//  frazzle
//
//  Created by Zachary Breman on 8/14/14.
//  Copyright (c) 2014 Zachary Breman. All rights reserved.
//

#ifndef __frazzle__GameManager__
#define __frazzle__GameManager__

#include "Manager.h"
#include "ManagerObject.h"

class GameManager : public Manager<ManagerObject>
{
public:
    virtual void initManager();
    virtual void startManager();
    virtual void processManager();
    virtual void stopManager();
};

#endif /* defined(__sentinels__GameManager__) */
