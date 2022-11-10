#include <bits/stdc++.h>
using namespace std;
class Node
{
private:
    /* data */
public:
    Node *Next;
    int data;
    Node(int data)
    {
        this->Next = NULL;
        this->data = data;
    };
    ~Node();
};

void Add_at_Tail(Node *&Head, Node *&Tail, int data)
{
    if (Head == NULL)
    {
        Node *New_Node = new Node(data);
        Head = New_Node;
        Tail = Head;
    }

    else
    {
        Node *New_Node = new Node(data);
        Tail->Next = New_Node;
        Tail = New_Node;
    }
}

void Print(Node *Head)
{
    Node *Temp = Head;
    while (Temp != NULL)
    {
        cout << Temp->data << " ";
        Temp = Temp->Next;
    }
}
int main()
{
    Node *Head = NULL;
    Node *Tail = NULL;

    int count = 0, data;
    while (count < 4)
    {
        cout << "Enter the data : ";
        cin >> data;
        Add_at_Tail(Head, Tail, data);
        count++;
    }
    Print(Head);

    // Back To Question

    // Create a map to keep track of visted nodes

    // Tail->next = Head->Next;               Just To check if there is a loop

    // Approach 1 : Using Maps

    // map<Node *, bool> Visited;

    // Node *Temp = Head;
    // while (Temp != NULL)
    // {
    //     if (Visited[Temp] == true)
    //     {
    //         cout << "\nThere is a Loop in the LL.";
    //         break;
    //     }

    //     Visited[Temp] = true;
    //     Temp = Temp->Next;
    // }

    // if (Temp == NULL)
    // {
    //     cout << "\nThere is no Loop in the LL.";
    // }

    // Approach 2 :Floyd Algorithm

    // Create 2 Pointer one fast and the other slow

    // Tail->Next = Head->Next;
    // Node *Fast = Head;
    // Node *Slow = Head;
    // while (Fast != NULL)
    // {
    //     Fast = Fast->Next;
    //     if (Fast != NULL)
    //     {
    //         Fast = Fast->Next;
    //     }
    //     Slow = Slow->Next;
    //     if (Slow == Fast)
    //     {
    //         break;
    //     }
    // }

    // if (Fast == Slow)
    // {
    //     cout << "\nLoop exists at : " << Fast->data << endl;
    // }
    // else
    // {
    //     cout << "\nThere is no loop.";
    // }

    // Approach 3 : My method

    Tail->Next = Head->Next;
    // Print(Head);
    Node *Temp = Head->Next;
    Head->data = 0;
    while (Temp != NULL)
    {
        if (Temp->Next->data == 0)
        {
            cout << "\nLoop Exists at : " << Temp->data << " Temp -> next = " << Temp->Next << endl;
            Temp->Next = NULL;
            cout << "\nLoop is removed : " << Temp->data << " Temp -> next = " << Temp->Next << endl;
            break;
        }
        Temp->data = 0;
        Temp = Temp->Next;
        if (Temp == NULL)
        {
            cout << "No Loop" << endl;
        }
    }
}