#ifndef SLIST_H
#define SLIST_H

#include "ItemType.h"
#include <string>

using namespace std;

struct node {
	ItemType data;
	node* next;
};

class SList
{
public:
	ItemType value;
	ItemType getValue() { return value; }
	SList();
	~SList();
	bool isEmpty();
	bool isFull();
	void Push(ItemType item);
	ItemType Pop();
	void display();
	ItemType Top();

private:
	int length = 0;
	int maxLength = 10;
	node* start;
	node* currentPos;


};

#endif // !SLIST_H