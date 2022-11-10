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

Node *Sort_LL(Node *Current)
{
    Node *Head = Current;
    Node *Previous = Current;
    while (Previous != NULL)
    {
        Current = Previous->next;
        while (Current != NULL)
        {
            if (Current->data < Previous->data)
            {
                swap(Current->data, Previous->data);
                Current = Current->next;
            }
            else
            {
                Current = Current->next;
            }
        }
        Previous = Previous->next;
    }
    return Head;
}

int Lenght_of_LL(Node *&Head)
{
    Node *temp = Head;
    int count = 1;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
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

Node *solve(Node *Head_1, Node *Head_2)
{
    Node *Current_1 = Head_1;
    Node *Next_1 = Current_1->next;
    Node *Current_2 = Head_2;
    Node *Next_2 = Current_2->next;

    while (Next_1 != NULL && Current_2 != NULL)
    {
        if ((Current_2->data >= Current_1->data) &&
            (Current_2->data <= Next_1->data))
        {
            //          Add nodes between the Head_1 and the last node
            Current_1->next = Current_2;
            Next_2 = Current_2->next;
            Current_2->next = Next_1;
            //          Update the pointers
            Current_1 = Current_2;
            Current_2 = Next_2;
        }
        else
        {
            Current_1 = Next_1;
            Next_1 = Next_1->next;
            if (Next_1 == NULL)
            {
                Current_1->next == Current_2;
                return Head_1;
            }
        }
    }
    return Head_1;
}
Node *sortTwoLists(Node *Head_1, Node *Head_2)
{
    // Write your code here.

    //     If only 1 element is present
    if (Head_1->next == NULL)
    {
        Head_1->next = Head_2;
        return Head_1;
    }
    //  If no element is present in Head_1
    if (Head_1 == NULL)
    {
        return Head_2;
    }
    //  If no element is present in Head_2
    if (Head_2 == NULL)
    {
        return Head_1;
    }
    //  Check if data in the Head_1 node of both LL and pass accordingly

    if (Head_1->data <= Head_2->data)
    {
        return solve(Head_1, Head_2);
    }
    else
    {
        return solve(Head_2, Head_1);
    }
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
    cout << "THE lINKED LIST IS  : ";
    Print(Head_1);

    cout << "The Sorted LL is  : " << endl;
    Head_1 = Sort_LL(Head_1);
    Print(Head_1);

    i = 0;
    Node *Head_2 = NULL;
    Node *Tail_2 = Head_2;
    while (i < 4)
    {
        cout << "\nEnter Data : ";
        cin >> data;
        insert(Head_2, Tail_2, data);
        i++;
    }
    cout << endl;
    cout << "THE lINKED LIST IS  : ";
    Print(Head_2);

    cout << "The Sorted LL is  : " << endl;
    Head_2 = Sort_LL(Head_2);
    Print(Head_2);

    // Tail_1->next = Head_2;
    // Head_1 = Sort_LL(Head_1);
    // Print(Head_1);

    // Head_1 = Optimised_Sort_for_LL(Head_1,Head_2);

    Head_1 = sortTwoLists(Head_1, Head_2);
    Print(Head_1);
}