//
//  main.cpp
//  Lab9
//
//  Created by Nils Streedain on 11/22/21.
//

#include <iostream>
#include "linked_list.h"

int main(int argc, const char * argv[]) {
	Linked_List list;
	
	list.push_front(5);
	list.push_front(4);
	list.push_front(3);
	list.push_front(2);
	list.push_front(1);
	list.print();
	std::cout << list.get_length() << std::endl;
	
	list.push_back(6);
	list.push_back(7);
	list.push_back(8);
	list.push_back(9);
	list.push_back(10);
	list.print();
	std::cout << list.get_length() << std::endl;
	
	list.clear();
	list.print();
	std::cout << list.get_length() << std::endl;
	
	return 0;
}
