#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList()
{
	/****
	 * Sets both the head and tail pointers to null when the linked list is created to avoid
	 * any random memory locations being stored as well as to set the proper head and tails
	 * once they are added.
	 ****/
	head = nullptr;
	tail = nullptr;
}


LinkedList::~LinkedList()
{
}


struct LinkedList::Node 
{
	int data;
	Node *next;
};


void LinkedList::AddNode(int value) 
{
	// Creates a new node pointer and sets the node pointer value with a nullptr next
	Node *n = new Node();
	n->data = value;
	n->next = nullptr;
	
	/****
	 * If the list is empty, the new pointer will become the head and the tail, 
	 * otherwise the current tail will receive the next pointer location of the new pointer 
	 * and the new pointer will become the tail 
	 ****/
	if (this->head == nullptr)
	{
		head = n;
		tail = n;
	}
	else
	{
		tail->next = n;
		tail = n;
	}
}


void LinkedList::DisplayList() 
{
	// Initialize a temporary node and set it equal to the head
	Node *temp = new Node();
	temp = head;

	/****
	 * As long as the temp node is not empty, 
	 * output the data in the temp node and then set the temp node equal to the next node in the list
	 ****/
	while (temp != nullptr) 
	{
		cout << temp->data << endl;
		temp = temp->next;
	}
}