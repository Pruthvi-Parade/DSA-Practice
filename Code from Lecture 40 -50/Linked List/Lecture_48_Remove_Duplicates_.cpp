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
    ~Node()
    {
        // Free Memory
        if (this->Next != NULL)
        {
            delete Next;
            this->Next = NULL;
        }
        cout << "\nThe Node deleted of value : " << this->data << endl;
    };
};

// void removeDuplicates(Node *Head)
// {
//     // Write your code here
//     Node *Current = Head;
//     Node *Travel = NULL;

//     while (Current != NULL)
//     {
//         Travel = Current;
//         while (Travel != NULL)
//         {
//             if ((Travel->Next != NULL) && Current->data == Travel->Next->data)
//             {
//                 cout << "\nCurrent data = " << Current->data << " Travel data = " << Travel->Next->data << endl;
//                 // Node *Travel_next = Travel->Next;
//                 // delete (Travel);
//                 // Travel = Travel_next;
//                 // cout << Travel->data << "   " << endl;
//                 Travel->Next = Travel->Next->Next;
//             }
//             else
//             {
//                 Travel = Travel->Next;
//             }
//         }
//         Current = Current->Next;
//         if (Current == NULL)
//         {
//             break;
//         }

//         cout << "Current -> Next " << Current->Next << endl;
//         cout << "Current  data : " << Current->data << endl;
//     }
//     cout << "Exit" << endl;
// }

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
void Remove_By_Sorting(Node *Head, int N)
{
    Node *Current = Head->Next;
    Node *Previous = Head;
    int count = 0, count_2 = 0;
    while (count < N)
    {
        cout << "Value of count  :  " << count << endl;
        count_2 = 0;
        while (count_2 < N - count)
        {
            if ((Current != NULL) && Previous->data > Current->data)
            {
                swap(Previous->data, Current->data);
                // cout << "Swaped" << endl;
            }
            Previous = Current;
            Current = Current->Next;
            count_2++;
            cout << "Value of count_2  :  " << count_2 << endl;
            if (count_2 >= N - count)
            {
                break;
            }
        }
        count++;
        cout << "Value of count  :  " << count << endl;
    }
}
int Number_of_Nodes(Node *Head)
{
    int count = 0;
    while (Head != NULL)
    {
        cout << Head->data << " ";
        Head = Head->Next;
        count++;
    }
    return count;
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
    // removeDuplicates(Head);
    int N = Number_of_Nodes(Head);
    cout << "Nodes = " << N << endl;
    Remove_By_Sorting(Head, N);
    Print(Head);
}