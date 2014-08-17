//
//  Header.h
//  sentinels
//
//  Created by Zachary Breman on 8/14/14.
//  Copyright (c) 2014 Zachary Breman. All rights reserved.
//

#ifndef sentinels_Header_h
#define sentinels_Header_h

class ManagerObject
{
public:
	virtual ~ManagerObject(){}
	virtual void InitObject() = 0;
	virtual void ProcessObject() = 0;
};

#endif
