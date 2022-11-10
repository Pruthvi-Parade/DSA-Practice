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

Node *Reverse_K_Group_Linked_List(Node *&Head, int K)
{
    // Base Case
    if (Head == NULL)
    {
        return NULL;
    }

    Node *Current = Head;
    Node *Previous = NULL;
    Node *Forward = NULL;
    int Count = 0;

    // Step 1 : Reverse K nodes
    while (Current != 0 && Count < K)
    {
        Forward = Current->next;
        Current->next = Previous;
        Previous = Current;
        Current = Forward;
        Count++;
    }

    // Step 2: Recursive Call

    if (Forward != NULL)
    {
        Head->next = Reverse_K_Group_Linked_List(Forward, K);
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
    while (i < 8)
    {
        cout << "\nEnter Data : ";
        cin >> data;
        insert(Head, Tail, data);
        i++;
    }
    cout << endl;
    cout << "THE lINKED LIST IS  : ";
    Print(Head);

    int K;
    cout << "Enter the value of K : ";
    cin >> K;
    cout << "The K GROUP reversed Linked List is : "
         << "Head : " << Head->data << "      Tail : " << Tail->data << endl;

    Head = Reverse_K_Group_Linked_List(Head, K);
    Print(Head);
}
