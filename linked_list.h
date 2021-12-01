//
//  linked_list.h
//  Lab9
//
//  Created by Nils Streedain on 11/22/21.
//

#ifndef linked_list_h
#define linked_list_h

#include <iostream>
#include "node.h"

class Linked_List {
private:
   unsigned int length;
   Node *head;

public:
	Linked_List();
	int get_length();
	void print();// output a list of all integers contained within the list
	void clear();// delete the entire list (remove all nodes and reset length to 0)
	unsigned int push_front(int);// insert a new value at the front of the list (returns the new length of the list)
	unsigned int push_back(int);// insert a new value at the back of the list (returns the new length of the list)
};

#endif /* linked_list_h */
