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
    isRunning = true;
	
	ListNode<ManagerObject>* ptr = managerList->start;
	
	while (ptr != nullptr) {
		ptr->value->InitObject();
		ptr = ptr->next;
	}
}

void GameManager::processManager()
{
    if (!isRunning) return;
	
	ListNode<ManagerObject>* ptr = managerList->start;
	
	while (ptr != nullptr) {
		ptr->value->ProcessObject();
		ptr = ptr->next;
	}
}

void GameManager::stopManager()
{
    isRunning = false;
}