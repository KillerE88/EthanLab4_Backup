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

    List.display();

    cout << "Reversing order" << endl;

    List.reverse();

    List.display();

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
        ItemType NewItem;
        NewItem.Set(temp);
        List2.Push(NewItem);
        reversestack();
        

        return 1;
    }
}