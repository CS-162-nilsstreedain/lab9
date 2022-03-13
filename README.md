# Implementing a Linked List (15 pts)
For lab this week, you'll begin creating your own class for a singly linked list. You must implement the classes as shown below, defining the member functions listed. The Big 3 must also be implemented as appropriate.

```
class Node {
public:
   int val;             // the value that this node stores
   Node *next;          // a pointer to the next node in the list
}
```

```
class Linked_List {
private:
   unsigned int length;                 // the number of nodes contained in the list
   Node *head;                          // a pointer to the first node in the list

public:
   Linked_List();
   int get_length();
   void print();                        // output a list of all integers contained within the list
   void clear();                        // delete the entire list (remove all nodes and reset length to 0)
   unsigned int push_front(int);        // insert a new value at the front of the list (returns the new length of the list)
   unsigned int push_back(int);         // insert a new value at the back of the list (returns the new length of the list)
}
```

Each of the Linked List member functions listed is worth 3 points towards the lab grade.

## Testing a Linked List (5 pts)
In addition to your linkedlist.cpp/.h, create a new file called test.cpp. In this file, write a simple main() function that instantiates a Linked List object, pushes some values onto it, and prints the list out. 
