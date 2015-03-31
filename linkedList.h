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
	    node* next, prev;
    };
	int itemCount;
	node* listPtr;

    public:
        linkedList();
    	int getItemCount() const;
        void insert(T valIn);
        T getItemAtIndex(int index) const;
        T getItemAtHead() const;
};

template <class T>
int linkedList<T>::getItemCount() const
{
    return itemCount;
}

template <class T>
linkedList<T>::linkedList()
{
    itemCount = 0;
    node* head = new node;
    node* tail = new node;
    head->next = tail;
    tail->next = NULL;
    listPtr = head;	
}

template <class T>
void linkedList<T>::insert(T valIn)
{
    node* newNode = new node;
    newNode->item = valIn;
    node* temp = head->next;
    head->next = newNode;
    newNode->next = temp;
    ++itemCount;
}

template <class T>
T linkedList<T>::getItemAtIndex(int index) const
{
    if(index >= itemCount)
    {
        std::cout << "Index out of range\n";
        return 0;
    }
    node* curPtr = head->next;
    for(int i = 0; i < index; i++)
    {
        curPtr = curPtr->next;      
    }
    return curPtr->item;
}

template <class T>
T linkedList<T>::getItemAtHead() const
{
    return head->next->item;
}

#endif
