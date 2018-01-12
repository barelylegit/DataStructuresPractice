#pragma once
#include <iostream>

class LinkedList
{
private:
	struct Node;
	Node *head;
	Node *tail;

public:
	LinkedList();
	~LinkedList();
	void AddNode(int value); // Adds a new node with a value to the end of the list
	void DisplayList();			//
	void InsertNode(int value);
};

