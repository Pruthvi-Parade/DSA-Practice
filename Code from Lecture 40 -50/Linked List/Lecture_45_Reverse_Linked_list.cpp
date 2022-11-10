// TC = O(n)
// SC = O(n)

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
        cout << "\nFirst Node created : ";
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

void Recursive_Reverse(Node *&Head, Node *Current, Node *Previous)
{
    // Base Case
    if (Current == NULL)
    {
        Head = Previous;
        return;
    }

    Recursive_Reverse(Head, Current->next, Current);
    Current->next = Previous;
}

Node *Reverse_Linked_List(Node *&Head, Node *&Tail)
{
    Node *Current = Head, *Previous = NULL, *Forward = NULL;
    Tail = Head;
    while (Current != NULL)
    {
        // cout << "Current data : " << Current->data << endl;
        Forward = Current->next;
        Current->next = Previous;
        Previous = Current;
        Current = Forward;
    }
    return Previous;
}
void Print(Node *&Head)
{
    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
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
        cout << "\nEnter Data : ";
        cin >> data;
        insert(Head, Tail, data);
        i++;
    }
    cout << endl;
    cout << "THE lINKED LIST IS  : ";
    Print(Head);

    // Normal 3 Pointer way

    // Head = Reverse_Linked_List(Head, Tail);
    // cout << "The reversed Linked List is : "
    //      << "Head : " << Head->data << "Tail : " << Tail->data << endl;
    // Print(Head);

    // Recursive way

    // Node *Current = Head;
    // Node *Previous = NULL;
    // cout << "The reversed Linked List is : "
    //      << "Head : " << Head->data << "     Tail : " << Tail->data << endl;
    // Recursive_Reverse(Head, Current, Previous);
    // Print(Head);
}