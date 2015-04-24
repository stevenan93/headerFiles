#include<iostream>
#include "linkedList.h"

void printList(linkedList<int>* list);

int main()
{
	std::cout << "Hello World\n";
 	linkedList<int>* newList = new linkedList<int>;    
    newList->insert(4);  
	newList->insert(41);
	//std::cout << newList->getItemAtIndex(1) << std::endl;
	//std::cout << newList->getItemCount() << std::endl; 
    //std::cout << newList->getItemAtHead() << std::endl;
    printList(newList);
	return 0;
}

void printList(linkedList<int>* list)
{
    for(int i = 0; i < list->getItemCount(); i++)
    {
        std::cout << "Item " << i << ": " << 
                list->getItemAtIndex(i) << std::endl;
    }
}
