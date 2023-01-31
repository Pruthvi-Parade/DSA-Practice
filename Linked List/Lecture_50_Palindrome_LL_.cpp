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
Node *Get_Mid_of_LL(Node *Head)
{
    Node *Slow = Head;       // Increment by 1 used to find mid
    Node *Fast = Head->next; // Increment by 2

    while (Fast != NULL && Fast->next != NULL)
    {
        Fast = Fast->next->next;
        Slow = Slow->next;
    }
    return Slow->next;
}
Node *Reverse_The_LL(Node *Mid)
{
    Node *Current = Mid;
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

bool Check_Palindrome(Node *Head, Node *Mid)
{
    while (Head != Mid && Mid != NULL)
    {
        if (Head->data != Mid->data)
        {
            return false;
        }
        else
        {
            Head = Head->next;
            Mid = Mid->next;
        }
    }
    return true;
}

int main()
{
    int i = 0, data;
    Node *Head_1 = NULL;
    Node *Tail_1 = Head_1;
    while (i < 6)
    {
        cout << "\nEnter Data : ";
        cin >> data;
        insert(Head_1, Tail_1, data);
        i++;
    }

    if (Head_1 == NULL || Head_1->next == NULL)
    {
        cout << "It is a Palindrome : " << endl;
    }
    cout << endl;
    cout << "THE lINKED LIST IS  : ";
    Print(Head_1);

    Node *Mid = Get_Mid_of_LL(Head_1);
    cout << "Value at mid = " << Mid->data << endl;

    Mid = Reverse_The_LL(Mid);
    Print(Mid);

    if (Check_Palindrome(Head_1, Mid))
    {
        cout << "It is a Palindrome : " << endl;
    }
    else
    {
        cout << "It is not a Palindrome : " << endl;
    }
}