//
//  List.h
//  sentinels
//
//  Created by Zachary Breman on 8/14/14.
//  Copyright (c) 2014 Zachary Breman. All rights reserved.
//

#ifndef sentinels_List_h
#define sentinels_List_h

#include "ListNode.h"

template <typename T>
class List
{
public:
	void addNode(T*);
	void addNodeAt(T*, int);
	void deleteNode(T*);
	void deleteNodeAt(int);
	void getNode(int);
	void count();
	
	List();
private:
	ListNode<T>* start;
};

template <typename T>
List<T>::List(){
	start = nullptr;
}

template <typename T>
void List<T>::addNode(T* obj) {
	ListNode<T> *s, *temp;
	
	temp = new ListNode<T>(obj);
	if(start == nullptr){
		temp->prev = nullptr;
		start = temp;
	} else {
		s = start;
		while (s->next != nullptr) {
			s = s->next;
		}
		s->next = temp;
		temp->prev = s;
	}
}

template <typename T>
void List<T>::addNodeAt(T* obj, int pos){
	if(start == nullptr){
		addNode(obj);
		return;
	}
	
	ListNode<T> *temp, *q;
	q = start;
	
	if(pos == 0){
		temp = new ListNode<T>(obj);
		temp->next = start;
		temp->next->prev = temp;
		start = temp;
		return;
	}
	
	for(int i = 0; i < pos - 1; i++){
		if(q->next == nullptr)
			break;
		q = q->next;
	}
	
	temp = new ListNode<T>(obj);
	if(q->next == nullptr){
		q->next = temp;
		temp->next = nullptr;
		temp->prev = q;
	} else {
		temp->next = q->next;
		temp->next->prev = temp;
		q->next = temp;
		temp->prev = q;
	}
}


#endif
