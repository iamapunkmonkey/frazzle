//
//  GameManager.cpp
//  frazzle
//
//  Created by Zachary Breman on 8/14/14.
//  Copyright (c) 2014 Zachary Breman. All rights reserved.
//

#include "GameManager.h"

void GameManager::initManager()
{
	Manager::initManager();
}

void GameManager::startManager()
{
//    isRunning = true;
//	
//	ListNode<ManagerObject>* ptr = managerList->getStartNode();
//	
//	while (ptr != nullptr) {
//		ptr->getData()->InitObject();
//		ptr = ptr->getNextPointer();
//	}
}

void GameManager::processManager()
{
//    if (!isRunning) return;
//	
//	ListNode<ManagerObject>* ptr = managerList->getStartNode();
//	
//	while (ptr != nullptr) {
//		ptr->getData()->ProcessObject();
//		ptr = ptr->getNextPointer();
//	}
}

void GameManager::stopManager()
{
    isRunning = false;
}