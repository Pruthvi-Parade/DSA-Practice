#include <bits/stdc++.h>
using namespace std;
class Node
{
private:
    /* data */
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    };
    ~Node();
};
void insert(Node *&Head, Node *&Tail, int data)
{
    if (Head == NULL)
    {
        Node *New_Node = new Node(data);
        Head = New_Node;
        Tail = Head;
        cout << "\nHead_1 Node created : \n";
        return;
    }

    else
    {
        Node *New_Node = new Node(data);

        Tail->next = New_Node;
        Tail = New_Node;
        return;
    }
}
void Print(Node *Head)
{
    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *Reverse_The_LL(Node *Head)
{
    Node *Current = Head;
    Node *Previous = NULL;
    Node *Forward = NULL;

    while (Current != NULL)
    {
        Forward = Current->next;
        Current->next = Previous;
        Previous = Current;
        Current = Forward;
    }
    return Previous;
}

Node *Add_2_LL(Node *LL_1, Node *LL_2)
{
    Node *Head_1 = LL_1;
    Node *Head_2 = LL_2;

    while (Head_2 != NULL)
    {
        if (Head_1->data + Head_2->data >= 10)
        {
            Head_1->data = (Head_1->data + Head_2->data) % 10;
            Head_1->next->data = Head_1->next->data + 1;
            if (Head_2->next == NULL)
            {
                return Reverse_The_LL(LL_1);
            }
            Head_1 = Head_1->next;
            Head_2 = Head_2->next;
        }
        else
        {
            Head_1->data = Head_1->data + Head_2->data;
            if (Head_2->next == NULL)
            {
                return Reverse_The_LL(LL_1);
            }
            Head_1 = Head_1->next;
            Head_2 = Head_2->next;
        }
    }
    return Reverse_The_LL(LL_1);
}
int main()
{
    int i = 0, data;
    Node *Head_1 = NULL;
    Node *Tail_1 = Head_1;
    while (i < 4)
    {
        cout << "\nEnter Data : ";
        cin >> data;
        insert(Head_1, Tail_1, data);
        i++;
    }

    cout << endl;
    cout << "THE FIRST lINKED LIST IS  : ";
    Print(Head_1);

    i = 0;
    Node *Head_2 = NULL;
    Node *Tail_2 = Head_2;
    while (i < 3)
    {
        cout << "\nEnter Data : ";
        cin >> data;
        insert(Head_2, Tail_2, data);
        i++;
    }

    cout << endl;
    cout << "THE SECOND lINKED LIST IS  : ";
    Print(Head_2);

    Head_1 = Reverse_The_LL(Head_1);
    cout << "THE Reversed lINKED LIST IS  : ";
    Print(Head_1);

    Head_2 = Reverse_The_LL(Head_2);

    cout << "THE Reversed lINKED LIST IS  : ";
    Print(Head_2);

    Head_1 = Add_2_LL(Head_1, Head_2);
    Print(Head_1);
}

// T.C = O( m + n )
// S.C = O( max (m , n))
// class Solution
// {
// private:
//     Node *reverse(Node *head)
//     {

//         Node *curr = head;
//         Node *prev = NULL;
//         Node *next = NULL;

//         while (curr != NULL)
//         {
//             next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }

//     void insertAtTail(struct Node *&head, struct Node *&tail, int val)
//     {

//         Node *temp = new Node(val);
//         // empty list
//         if (head == NULL)
//         {
//             head = temp;
//             tail = temp;
//             return;
//         }
//         else
//         {
//             tail->next = temp;
//             tail = temp;
//         }
//     }

//     struct Node *add(struct Node *first, struct Node *second)
//     {
//         int carry = 0;

//         Node *ansHead = NULL;
//         Node *ansTail = NULL;

//         while (first != NULL || second != NULL || carry != 0)
//         {

//             int val1 = 0;
//             if (first != NULL)
//                 val1 = first->data;

//             int val2 = 0;
//             if (second != NULL)
//                 val2 = second->data;

//             int sum = carry + val1 + val2;

//             int digit = sum % 10;

//             // create node and add in answer Linked List
//             insertAtTail(ansHead, ansTail, digit);

//             carry = sum / 10;
//             if (first != NULL)
//                 first = first->next;

//             if (second != NULL)
//                 second = second->next;
//         }
//         return ansHead;
//     }

// public:
//     // Function to add two numbers represented by linked list.
//     struct Node *addTwoLists(struct Node *first, struct Node *second)
//     {
//         // step 1 -  reverse input LL
//         first = reverse(first);
//         second = reverse(second);

//         // step2 - add 2 LL
//         Node *ans = add(first, second);

//         // step 3
//         ans = reverse(ans);

//         return ans;
//     }s
// };
void insert_at_Tail(Node *&Head, Node *&Tail, int data)
{
    Node *New_Node = new Node(data);

    if (Head == NULL)
    {
        Head = New_Node;
        Tail = New_Node;
    }
    else
    {
        Tail->next = New_Node;
        Tail = New_Node;
    }
}
