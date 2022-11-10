#include <bits/stdc++.h>
using namespace std;

class Node
{
private:
    /* data */

public:
    Node *Previous;
    int Data;
    Node *Next;
    Node(int Data)
    {
        this->Previous = NULL; // For the previous node
        this->Data = Data;     // For the data to hold
        this->Next = NULL;     // For the next Node
    };

    ~Node()
    {
        int value = this->Data;
        cout << "This is Destructor : " << endl;
        cout << "--------------------------------------------------------------------------------------------------\n";
        if (Next != NULL)
        {
            delete Next;
            this->Next = NULL;
            ;
        }
        cout << "The Node deleted value was : " << value << endl;
        // cout << "\nTo confirm both are pointing at NULL : \nPrevious : " << this->Previous << " Next : " << this->Next << "\n"
        //    << endl;
        cout << "--------------------------------------------------------------------------------------------------\n";
    };
};
int Length_Of_LL(Node *&Head)
{
    Node *temp = Head;
    int Count = 1;
    while (temp != NULL)
    {
        temp = temp->Next;
        Count++;
    }

    return Count;
}
void Add_At_Head(Node *&Head, int Data)
{
    Node *temp = new Node(Data);

    temp->Next = Head;
    Head->Previous = temp;
    Head = temp;
}
void Add_at_Tail(Node *&Tail, int Data)
{
    Node *temp = new Node(Data);

    Tail->Next = temp;
    temp->Previous = Tail;
    Tail = temp;
}
void Insert_at_n(Node *&Head, Node *&Tail, int Data, int Position)
{
    Node *temp = Head;
    int Count = 1;

    if (Position == 1)
    {
        Add_At_Head(Head, Data);
        return;
    }

    while (Count < Position - 1)
    {
        temp = temp->Next;
        Count++;
    }

    if (temp->Next == NULL)
    {
        Add_at_Tail(Tail, Data);
        return;
    }

    Node *New_Node = new Node(Data);

    New_Node->Next = temp->Next;
    New_Node->Previous = temp;
    temp->Next->Previous = New_Node;
    temp->Next = New_Node;
}
void Delete_a_node(Node *&Head, Node *&Tail, int Position)
{
    if (Position == 1)
    {
        // For the Head Node
        Node *temp = Head;
        temp->Next->Previous = NULL;
        Head = temp->Next;
        temp->Next = NULL;
        delete temp;
        return;
    }

    Node *Current = Head;
    Node *Previous = NULL;

    int Count = 1;
    while (Count < Position)
    {
        Previous = Current;
        Current = Current->Next;
        Count++;
    }

    if (Current->Next == NULL)
    {
        // For the Tail node
        Node *temp = Tail;
        temp->Previous->Next = NULL;
        Tail = temp->Previous;
        temp->Previous = NULL;
        delete temp;
        return;
    }
    Current->Next->Previous = Current->Previous;
    Previous->Next = Current->Next;

    Current->Next = NULL;
    Current->Previous = NULL;

    delete Current;
}
void Print(Node *&Head)
{
    Node *temp = Head;
    cout << "The Linked List is : " << endl;
    while (temp != NULL)
    {
        cout << /*"Previous : " << temp->Previous <<*/ "  Data : " << temp->Data /*<< "    Next : " << temp->Next*/ << endl;
        temp = temp->Next;
    }
    cout << endl;
}
void Print_Reverse(Node *&Tail)
{
    Node *temp = Tail;
    cout << "\nPrinting in reverse order : " << endl;
    while (temp != NULL)
    {
        cout << temp->Data << "\t";
        temp = temp->Previous;
    }
    cout << "\n";
}
int main()
{
    Node *node_1 = new Node(1);

    cout << "Previous  : " << node_1->Previous << " Data : " << node_1->Data << " Next : " << node_1->Next << endl;

    Node *Head = node_1;

    int i = 1, Data, Position;
    // while (i < 4)
    // {
    //     cout << "Enter Data : ";
    //     cin >> Data;
    //     Add_At_Head(Head, Data);
    //     i++;
    // }
    // cout << "Head = " << Head->Data << endl;

    // Creating a Tail Pointer
    Node *Tail = Head;
    while (i < 4)
    {
        cout << "\nEnter Data : ";
        cin >> Data;
        Add_at_Tail(Tail, Data);
        i++;
    }
    cout << "\nTail = " << Tail->Data << endl;
    Print(Head);

    // cout << "Enter the Position to insert and data: " << endl;
    // cin >> Position >> Data;
    // Insert_at_n(Head, Tail, Data, Position);

    // cout << "Tail = " << Tail->Data << endl;
    Print(Head);

    cout << "Head = " << Head->Data << " Tail = " << Tail->Data << endl;

    Print_Reverse(Tail);

    cout << "Enter the position to delete : ";
    cin >> Position;
    Delete_a_node(Head, Tail, Position);
    cout << "Head = " << Head->Data << " Tail = " << Tail->Data << endl;
    Print(Head);
    Print_Reverse(Tail);
}