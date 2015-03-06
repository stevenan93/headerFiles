#include<iostream>
#include "linkedList.h"

int main()
{
	std::cout << "Hello World\n";
 	linkedList<int>* newList = new linkedList<int>;    
        newList->insert(4);  
	newList->insert(41);
	std::cout << newList->getItemAtIndex(1) << std::endl;
	std::cout << newList->getItemCount() << std::endl; 
	return 0;
}
