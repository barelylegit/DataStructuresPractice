#include "LinkedList.h"
#include <iostream>
#include <string>

using namespace std;


int main() 
{
	// Create a linked list and display
	LinkedList list;

	for (int i = 0; i < 5; i++) 
	{
		list.AddNode(i);
	}

	list.DisplayList();

	cin.get();

	// Insert a new value to the beginning of the linked list
	list.InsertNode(10);

	list.DisplayList();

	cin.get();

	// String Reverse
	cout << endl << "Begin String Reversal" << endl;

	string newString = "ReverseMe";
	string tempString;

	cout << newString << endl;

	for (int i = newString.length() - 1; i >= 0; i--)
	{	
		tempString += newString.at(i);
	}

	newString = tempString;

	cout << newString << endl;

	cout << system("Pause");


	return 0;
}