#include <iostream>
#include "SList.h"
#include "ItemType.h"

using namespace std;

SList List, List2, List3;

void Reverse();
int reversestack();

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

    Reverse();

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
    if (List.isEmpty())
    {
        return 0;
    }
    else
    {
        ItemType NewItem = List.Pop();
        List2.Push(NewItem);
        reversestack();

        return 1;
    }
}