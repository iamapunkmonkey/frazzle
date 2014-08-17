//
//  Header.h
//  frazzle
//
//  Created by Zachary Breman on 8/14/14.
//  Copyright (c) 2014 Zachary Breman. All rights reserved.
//

#ifndef frazzle_Header_h
#define frazzle_Header_h

class ManagerObject
{
public:
	virtual ~ManagerObject(){}
	virtual void InitObject() = 0;
	virtual void ProcessObject() = 0;
};

#endif
