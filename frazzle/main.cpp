//
//  main.cpp
//  frazzle
//
//  Created by Zachary Breman on 8/14/14.
//  Copyright (c) 2014 Zachary Breman. All rights reserved.
//

#include <iostream>
#include "GameManager.h"
#include "List.h"
#include "GameManagerObject.h"
using namespace std;

int main(int argc, const char * argv[])
{
//	GameManager* gm = new GameManager();
//	
//	gm->initManager();
//	
//	GameManagerObject* gmo1 = new GameManagerObject();
//	gm->insertObject(gmo1, 0);
//	
//	GameManagerObject* gmo2 = new GameManagerObject();
//	gm->insertObject(gmo2, 1);
//	
//	
//	gm->startManager();
//	
//	gm->processManager();
//	
//	gm->stopManager();
	
	List<int>* myList = new List<int>();
	
	myList->addNode(new int(100));
	myList->addNode(new int(100));
	myList->addNodeAt(new int(100), 1);
	
	myList->deleteNodeAt(1);
	
	cout << myList->count() << endl;
	
//	for(int i = 0; i < myList->count(); i++)
//		cout << "ITEM " << i << " " << myList->get(i) << endl;

    return 0;
}

