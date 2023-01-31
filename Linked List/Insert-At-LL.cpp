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
void insert(Node *&Head, Node *&Tail, int data, int choice)
{
    if(Head == NULL)
    {
        cout << "Inserting at head as Head was Null : ";
        Node *new_node = new Node(data);
        Head = new_node;
        Tail = Head;
        return;
    }
    else if (choice == 1)
    {
        cout << "Insert at head"
             << "\n";
        Node *new_node = new Node(data);
        new_node->next = Head;
        Head = new_node;
    }

    else if (choice == 2)
    {
        cout << "Insert at tail"
             << "\n";
        Node *New_Node = new Node(data);
        Tail->next = New_Node;
        Tail = New_Node;
    }

    else if (choice == 3)
    {
        int position, count = 1;
        cout << "Enter the position you want to enter : ";
        cin >> position;
        Node *temp = Head;
        while (temp != NULL)
        {
            if (count == position - 1)
            {
                Node *new_node = new Node(data);
                new_node->next = temp->next;
                temp->next = new_node;
                return;
            }
            else
            {
                temp = temp->next;
                count++;
            }
        }
    }
    else
    {
        cout << "Please enter valid choice";
    }

    return;
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

int main()
{
    int i = 0, data, choice;
    Node *Head = NULL;
    Node *Tail = Head;

    while (i < 5)
    {
        cout << "\n>Head : press 1\n>Tail : press 2\n>Positon : press 3\n";
        cin >> choice;
        cout << "Enter Data : ";
        cin >> data;
        insert(Head, Tail, data, choice);
        i++;
    }

    cout << "THE lINKED LIST IS  : ";
    Print(Head);
}