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
	void AddNode(int value);
	void DisplayList();
};

