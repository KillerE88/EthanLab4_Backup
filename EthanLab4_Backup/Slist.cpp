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

ItemType SList::Pop() {
	node* Temp = start;
	ItemType tem = start->data;
	start = start->next; //Moves top to next item in the list.
	delete Temp; //Deletes value stored
	length--;
	return tem;
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

ItemType SList::Top()
{
	return start->data;
}