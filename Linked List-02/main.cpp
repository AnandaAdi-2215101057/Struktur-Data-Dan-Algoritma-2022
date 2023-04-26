#include <iostream>
#include "lnkls.h"
using namespace std;

//Main
int main (int argc, char** argv)
{
	LinkedList list1;
	
	list1.insertToHead(10);
	list1.insertToHead(20);
	list1.insertToHead(30);
	list1.insertToHead(40);
	list1.insertToHead(50);
	
	cout << "head: " << list1.head->value << endl; 
	cout << "tail: " << list1.tail->value << endl; 
	cout << list1.head->next->next->value << endl;
	
	list1.printAll();
	
	LinkedList list2;
	
	list2.insertToHead(32);
	list2.insertToHead(43);
	
	list2.printAll();
	
	 // Test insertToTail
    list1.insertToTail(20);
    list1.insertToTail(34);
    list1.printAll();
    
    // Test insertAfter
    list1.insertAfter(49, 10);
    list1.printAll();
    
    // Test the deleteFromHead
    list1.deleteFromHead();
    list1.printAll();
    
     // Test the deleteFromTail
    list1.deleteFromTail();
    list1.printAll();

    // Test the deleteByValue
    list1.deleteByValue(98);
    list1.printAll();
	
	return 0;
}
