#include <iostream>
#include <string>
#include "BinaryTree.h"

using namespace std;

int main()
{
//insert 17, 5, 10, 8, 1, 26, 3, 7, 2, 18, 13, 224	
	BinaryTree bin;
	
	bin.insert(17);
	bin.insert(5);
	bin.insert(10);
	bin.insert(8);
	bin.insert(1);
	bin.insert(26);
	bin.insert(3);
	bin.insert(7);
	bin.insert(2);
	bin.insert(18);
	bin.insert(13);
	bin.insert(224);

	cout << "\nPre Order\n";
	bin.preOrder();
	
	cout << "\nIn Order\n";
	bin.inOrder();
	
	cout << "\nPost Order\n";
	bin.postOrder();
	
	cout<<endl;
	bin.findMin();
	
	cout<<endl;
	bin.findMax();	
	
	int num;
	cout<<endl<<endl<<"Search a value from the tree: ";
	cin >>num;
	bin.search(num);
	
	return 0;
}