//
//  ListNode.h
//  frazzle
//
//  Created by Zachary Breman on 8/14/14.
//  Copyright (c) 2014 Zachary Breman. All rights reserved.
//

#ifndef frazzle_ListNode_h
#define frazzle_ListNode_h

template <typename T>
class ListNode {
public:
	T* value;
	ListNode *next, *prev;
	ListNode(T* obj){
		value = obj;
		next = nullptr;
		prev = nullptr;
	}
};

#endif
