// EthanLab4_Backup.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SList.h"
#include "ItemType.h"

using namespace std;

SList List;
SList List2;
SList List3;

SList stacklist;

int main()
{
    ItemType Item;

    cout << "Starting stacked list" << endl;

    Item.Set(2);

    List.Push(Item);

    Item.Set(30);

    List.Push(Item);

    Item.Set(500);

    List.Push(Item);

    cout << "Displaying list" << endl;

    List.display();

    cout << "Removing Item" << endl;

    List.Pop();

    cout << "New list" << endl;

    List.display();

    Item.Set(17);

    List.Push(Item);

    Item.Set(88);

    List.Push(Item);

    Item.Set(57);

    List.Push(Item);

    Item.Set(27);

    List.Push(Item);

    Item.Set(19);

    List.Push(Item);

    Item.Set(45);

    List.Push(Item);

    Item.Set(67);

    List.Push(Item);

    Item.Set(47);

    List.Push(Item);

    cout << "Third list" << endl;

    List.display();

    cout << "Top Item" << endl;

    List.Top();

    List.isFull();

    cout << "Reversing order" << endl;

    List.reverse();

    List.display();

    if (List.isFull() == true)
    {
        cout << "List is full" << endl;
    }
    else if (List.isFull() == false)
    {
        cout << "There is room left in the list" << endl;
    }
    else
    {
        cout << "Goodbye" << endl;
    }
}

void Reverse()
{
    reversestack();
    List3 = List2;
    List2 = List;
    List = List3;
}

int reversestack()//reverses the stack
{
    if (stacklist.isEmpty())
    {
        return 0;
    }
    else
    {
        
        int temp = stacklist.Pop();
        Itemtype NewItem.Set(temp);
        List2.Push(NewItem);
        reversestack();
        

        return 1;
    }
}