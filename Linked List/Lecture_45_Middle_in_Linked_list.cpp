#include <bits/stdc++.h>
using namespace std;

// class LinkedListNode<int>
// {
// private:
//     /* data */
// public:
//     LinkedListNode<int>();
//     ~LinkedListNode<int>();
// };

void Recursive_Reverse(LinkedListNode<int> *&Head, LinkedListNode<int> *Current, LinkedListNode<int> *Previous)
{
    // 	Base Condition
    if (Current == NULL)
    {
        Head = Previous;
        return;
    }

    //     Call
    Recursive_Reverse(Head, Current->next, Current);
    Current->next = Previous;
}
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head)
{
    // Write your code here
    LinkedListNode<int> *Current = head;
    LinkedListNode<int> *Previous = NULL;
    Recursive_Reverse(head, Current, Previous);
    return head;
}