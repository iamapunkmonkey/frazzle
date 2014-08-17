//
//  List.h
//  frazzle
//
//  Created by Zachary Breman on 8/14/14.
//  Copyright (c) 2014 Zachary Breman. All rights reserved.
//

#ifndef frazzle_List_h
#define frazzle_List_h

#include "ListNode.h"

template <typename T>
class List
{
public:
	void addNode(T*);
	void addNodeAt(T*, int);
	void deleteNode(T*);
	void deleteNodeAt(int);
	T get(int);
	int count();
	
	List();
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

template <typename T>
void List<T>::deleteNodeAt(int pos){
	if(start == nullptr)
		return;
	
	ListNode<T> *temp, *q;
	q = start;
	
	if(pos == 0){
		temp = start;
		start = start->next;
		start->prev = nullptr;
		free(temp);
		return;
	}
	
	q = start;
	
	for(int i = 0; i < pos - 1; i++){
		if(q->next == nullptr)
			break;
		q = q->next;
	}
	
	if(q->next != nullptr){
		temp = q->next;
		q->next = temp->next;
		temp->next->prev = q;
		free(temp);
		return;
	}
}

template <typename T>
void List<T>::deleteNode(T *obj){
	if(start == nullptr)
		return;
	
	ListNode<T> *temp, *q;
	
	if(start->value == obj){
		temp = start;
		start = start->next;
		start->prev = nullptr;
		free(temp);
		return;
	}
	
	q = start;
	
	while(q->next->next != nullptr){
		if(q->next->value == obj){
			temp = q->next;
			q->next = temp->next;
			temp->next->prev = q;
			free(temp);
			return;
		}
		q = q->next;
	}
	
	if(q->next->value == obj){
		temp = q->next;
		free(temp);
		q->next = nullptr;
		return;
	}
}

template <typename T>
int List<T>::count() {
	ListNode<T> *q = start;
	int count = 0;
	
	while(q != nullptr){
		q = q->next;
		count++;
	}
	
	return count;
}

template <typename T>
T List<T>::get(int pos){
	if(pos == 0)
		return start->value;
	
	ListNode<T> *q;
	
	q = start;
	
	for(int i = 0; i < pos - 1; i++){
		if(q->next == nullptr)
			return nullptr;
		
		q = q->next;
	}
	
	if(q->next != nullptr)
		return q->next->value;
	return nullptr;
}
#endif
