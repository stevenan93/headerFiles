#ifndef _linked_lists
#define _linked_lists
/*
Written by Steven An, Computer Engineering B.S Sacramento State
Created February 23rd, 2015

using the bare necessities of C++
hopefully may be useful to anyone out there. As long as credit is due 
you can use it for whatever you like. Implements a standard linked list along with 
functions. General features are being added on as they come to mind
As of creation, a singly linked list comes to mind. will break that barrier
later with doubly, etc. 
*/

template <class T>
class linkedList
{
    private:
        struct node
	{
	    T item;
	    node* next;
    };
	int itemCount;
	node* head;

    public:
        linkedList();

};

template <class T>
linkedList<T>::linkedList()
{
    itemCount = 0;
    node* sentinel = new node;
    sentinel->next = NULL;
    head = sentinel;	
}

#endif
