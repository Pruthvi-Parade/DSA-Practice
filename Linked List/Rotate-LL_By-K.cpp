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
Node *rotateRight(Node *&Head, int k)
{
    int count = 1;
    while (count <= k)
    {
        Node *temp = Head;
        while (temp != NULL)
        {
            Node *Tail = temp->next;
            if (Tail->next == NULL)
            {
                Tail->next = Head;
                Head = Tail;
                temp->next = NULL;
                break;
            }
            else
            {
                temp = temp->next;
            }
        }
        count++;
    }
    return Head;
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
    int i = 0, data, k;
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
    cout << "THE lINKED LIST IS  : \n";
    Print(Head_1);

    cout << "Enter k : ";
    cin >> k;
    Head_1 = rotateRight(Head_1, k);
    Print(Head_1);
}