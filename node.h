//
//  node.h
//  Lab9
//
//  Created by Nils Streedain on 11/22/21.
//

#ifndef node_h
#define node_h

#include <iostream>

class Node {
public:
	int val;             // the value that this node stores
	Node *next;          // a pointer to the next node in the list

	Node(int, Node*);
};

#endif /* node_h */
