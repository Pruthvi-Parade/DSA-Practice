#include <bits/stdc++.h>
using namespace std;
class Node
{
private:
    /* data */
public:
    int Data;
    Node *Previous;
    Node *Next;
    Node(int data)
    {
        this->Data = data;
        this->Previous = NULL;
        this->Next = NULL;
    };
    ~Node()
    {
        if (this->Next != NULL)
        {
            this->Next = NULL;
        }
        cout << "Node deleted of Value : " << this->Data << endl;
    };
};
void Insert(Node *&Head, Node *&Tail, int Data)
{
    if (Head == NULL)
    {
        Node *New_Node = new Node(Data);
        Head = New_Node;
        Tail = Head;
    }

    else
    {
        Node *New_Node = new Node(Data);
        New_Node->Previous = Tail;
        Tail->Next = New_Node;
        Tail = New_Node;
    }
}
Node *Reverse_LL(Node *Head)
{
    Node *Current = Head;
    Node *Temp = Head;
    cout << "Head - Previous = " << Head->Previous << " Head - Next = " << Head->Next << endl;
    while (Current != NULL)
    {
        swap(Current->Next, Current->Previous);
        Temp = Temp->Next;
        if (Temp == NULL)
        {
            return Current;
        }
        Current = Temp;
    }
    return Temp;
}
void Print(Node *&Head)
{
    Node *Temp = Head;
    cout << "The LL is : \n";
    while (Temp != NULL)
    {
        cout << Temp->Data << " ";
        // cout << "\nPrevious = " << Temp->Previous << " Next = " << Temp->Next;
        Temp = Temp->Next;
    }
    cout << endl;
}
int main()
{
    int i = 0, data;
    Node *Head = NULL;
    Node *Tail = Head;
    while (i < 4)
    {
        cout << "Enter data : ";
        cin >> data;
        Insert(Head, Tail, data);
        i++;
    }
    Print(Head);
    cout << "Reversing : " << endl;
    Tail = Head;
    Head = Reverse_LL(Head);
    cout << "Head = " << Head << " Head - Previous = " << Head->Previous << " Head - Next = " << Head->Next << endl;
    Print(Head);
}