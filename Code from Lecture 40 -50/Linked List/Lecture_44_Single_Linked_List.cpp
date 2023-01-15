#include <bits/stdc++.h>
using namespace std;
class Node
{
private:
    /* data */

public:
    int Data;
    Node *next; // Assign the address to datatype class ass it is pointer of Node type
    Node(int Data)
    {
        this->Data = Data; // As it is called from constructor class parameter is passed while creating object.
        this->next = NULL; // Each new address is assigned as NULL
    }

    ~Node()
    {
        // Free Memory
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "The Node deleted of value : " << this->Data << endl;
    };
};

int Lenght_Of_LL(Node *&Head)
{
    Node *temp = Head;
    int count = 1;
    while (temp->next != NULL)
    {
        temp = temp->next;
        cout << temp->Data << " ";
        count++;
    }
    cout << "\nThe count is" << count << endl;
    return count + 1;
}
void Add_At_Head(Node *&Head, int Data)
{
    Node *temp = new Node(Data);
    temp->next = Head;
    Head = temp;
}

void Add_At_Tail(Node *&Tail, int Data)
{
    Node *temp = new Node(Data); // Create a new node
    Tail->next = temp;           // Point the tail nodes next which shoulde be NULL to the address of new node
    Tail = temp;                 // Assign the tail to the new node address
}

void Insert_At_N(Node *&Head, Node *&Tail, int Data, int Position)
{
    // If it is Head Position
    if (Position == 1)
    {
        Add_At_Head(Head, Data);
        return;
    }

    Node *temp = Head;
    int count = 1;

    while (count < Position - 1) // Travese till we find the position which is required
    {
        temp = temp->next; // Access the temp-> next to traverse
        count++;
    }

    // If it is Tail Position
    if (temp->next == NULL)
    {
        Add_At_Tail(Tail, Data);
        return;
    }

    // Create a new Node
    Node *New_Node = new Node(Data);

    // Assign the New nodes -> next to the current Nodes -> next
    New_Node->next = temp->next;

    // Assign the New nodes -> next to the address of the current node- > next
    temp->next = New_Node;
}
void Delete_Node(Node *&Head, Node *&Tail, int Position)
{
    // What if... The Position is the Head node itself
    if (Position == 1)
    {
        Node *temp = Head; // Creating the temp node to make deletion (Free the memory)
        Head = Head->next;
        // Free the Memory
        temp->next = NULL; // As the destructor code is set that way we need to set the temp->next pointer to NULL
        delete temp;
    }

    else
    {
        // Deleting any other than the Head including Tail
        Node *Current = Head;
        Node *Previous = NULL;

        int Count = 1;

        while (Count < Position) // Traverse till we find the position
        {
            Previous = Current;      // Set the previous node
            Current = Current->next; // Set the current node to its next
            Count++;
        }

        Previous->next = Current->next; // Thats how U delete a node
        Current->next = NULL;           // We Need to assign current->next to NULL
        delete Current;                 // Free The Memory

        if (Position == Lenght_Of_LL(Head))
        {
            Tail = Previous;
        }
    }
}
void Print(Node *&Head)
{
    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->Data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *Node_1 = new Node(100); // We have create a pointer object to the class Node

    // cout << "Data = " << Node_1->Data << endl;
    // cout << "Next Address : " << Node_1->next << endl;

    
    Node *Head = Node_1; // Initializing the Head pointer with the 1st Node

    // int i = 0, data;
    // while (i < 5) // Create a Loop for N enteries
    // {
    //     cout << "Enter data : ";
    //     cin >> data;
    //     Add_At_Head(Head, data); // Call the function which  will add the node at Head
    //     i++;
    // }

    // cout << "Printing the data at the nodes : " << endl;
    // Print(Head); // Create a function to print the node data starting from the Head node

    cout << "Add the Node at the Tail : \n";

    // Create at tail pointer
    Node *Tail = Head; // Initializing at the Head if their is a single node

    int i = 0, data;
    while (i < 5) // Create a Loop for N enteries
    {
        cout << "Enter data : \n";
        cin >> data;
        Add_At_Tail(Tail, data); // Call the function which  will add the node at Tail
        i++;
    }
    cout << "Printing the data at the nodes : \n"
         << endl;
    Print(Head);

    // int position; // Enter the position and the data (value)
    // cout << "Enter the position and the data : ";
    // cin >> position >> data;

    // Insert_At_N(Head, Tail, data, position); // Function call
    // Print(Head);

    cout << "Head : " << Head->Data << " Tail : " << Tail->Data << endl;

    int Delete_Position;
    cout << "Enter position to delete : ";
    cin >> Delete_Position;                   // Enter the position
    Delete_Node(Head, Tail, Delete_Position); // Function call
    Print(Head);

    cout << "Head : " << Head->Data << " Tail : " << Tail->Data << endl;
}