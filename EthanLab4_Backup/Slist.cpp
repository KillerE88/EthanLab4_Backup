#include <iostream>
#include "SList.h"
#include "ItemType.h"

using namespace std;

SList::SList() {
	length = 0;
	start = nullptr;
	currentPos = nullptr;
}
SList::~SList() {
	isEmpty();
}

void SList::Push(ItemType value) //used to place new value within the index
{
	node* Temp = new node;
	Temp->data = value;

	if (start == nullptr) { //Checking if top has no value
		Temp->next = nullptr;
		start = Temp;
	}
	else {
		Temp->next = start; //links previous node
		start = Temp; //Changes location to most recently added item
	}
	length++;
}

void SList::Pop() {
	node* Temp = start;
	start = start->next; //Moves top to next item in the list.
	delete Temp; //Deletes value stored
	length--;
}

bool SList::isFull() {
	if (length == maxLength) {
		return true;
		cout << "List is full" << endl;
	}
	else {
		return false;
		cout << "List is not full" << endl;
	}

}

bool SList::isEmpty() //this will empty all of the unwanted storage
{
	return (start == nullptr);
}

void SList::display()
{
	node* temp;
	temp = start;
	while (temp != NULL)
	{
		cout << (*temp).data.Get() << endl;//pointless use -> instead 
		temp = temp->next;
	}
	cout << "\n";
}

void SList::Top()
{
	cout << start->data.Get() << endl;
}

void SList::reverse()
{
	// Initialize current, previous and
	   // next pointers
	node* current = start;
	node* prev = NULL, * next = NULL;

	while (current != NULL) {
		// Store next
		next = current->next;

		// Reverse current node's pointer
		current->next = prev;

		// Move pointers one position ahead.
		prev = current;
		current = next;
	}
	start = prev;
}