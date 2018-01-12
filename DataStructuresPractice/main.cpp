#include "LinkedList.h"
#include <iostream>

using namespace std;


int main() 
{
	LinkedList list;

	for (int i = 0; i < 5; i++) 
	{
		list.AddNode(i);
	}

	list.DisplayList();

	cout << system("Pause");

	return 0;
}