//
//  linked_list.cpp
//  Lab9
//
//  Created by Nils Streedain on 11/22/21.
//

#include "linked_list.h"

Linked_List::Linked_List() {
	length = 0;
	head = NULL;
}

int Linked_List::get_length() {
	return length;
}

void Linked_List::print() {
	Node *currNode = head;
	for (int i = 0; i < length; i++) {
		std::cout << currNode->val << " ";
		currNode = currNode->next;
	}
	std::cout << std::endl;
}

void Linked_List::clear() {
	Node *currNode;
	for (int i = 0; i < length; i++) {
		currNode = head;
		head = head->next;
		delete currNode;
	}
	
	length = 0;
}

unsigned int Linked_List::push_front(int val) {
	Node *node = new Node(val, head);
	head = node;
	
	return ++length;
}

unsigned int Linked_List::push_back(int val) {
	Node *currNode = head;
	Node *node = new Node(val, NULL);
	if (length > 0) {
		for (int i = 0; i < length - 1; i++)
			currNode = currNode->next;
		currNode->next = node;
	} else
		head = node;
	
	return ++length;
}
