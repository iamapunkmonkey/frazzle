//
//  Manager.h
//  frazzle
//
//  Created by Zachary Breman on 8/14/14.
//  Copyright (c) 2014 Zachary Breman. All rights reserved.
//

#ifndef frazzle_Manager_h
#define frazzle_Manager_h

#include "List.h"

template <typename T>
class Manager {
protected:
	bool isRunning;
	List<T>* managerList;
	
public:
	virtual ~Manager() {}
    virtual void initManager();
	virtual void insertObject(T*, int);
    virtual void startManager() = 0;
    virtual void processManager() = 0;
    virtual void stopManager() = 0;
};

template<typename T>
void Manager<T>::initManager()
{
	managerList = new List<T>();
}

template<typename T>
void Manager<T>::insertObject(T* object, int priority){
//	managerList->insertNewNode(object, priority);
}


#endif
