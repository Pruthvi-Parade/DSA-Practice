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
        Node *new_node = new Node(data);
        Head = new_node;
        Tail = Head;
        return;
    }
    else
    {
        Node *new_node = new Node(data);
        Tail->next = new_node;
        Tail = new_node;
        return;
    }
}

Node *Swap_adjecent(Node *&Head, Node *&Tail)
{
    Node *Current = Head->next;
    Node *Previous = Head;
    Head = Current;
    while (true)
    {
        Previous->next = Current->next;
        Current->next = Previous;
        print(Head);
        Previous = Previous->next;
        if(Previous->next == NULL && Previous == NULL)
        {
            break;
        }
        else
        {
            Current = Previous->next;
        }
    }

    return Head;
}
Node* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL)
        return head;
    struct ListNode *previous, *current, *temp = NULL;
    previous = head;
    current = head->next;
    if (head->next->next != NULL)
    {
        temp = head->next->next;
    }
    head = current;
    while (temp != NULL && temp->next != NULL)
    {
        current->next = previous;
        previous->next = temp->next;
        previous = temp;
        current = previous->next;
        temp = current->next;
    }
    current->next = previous;
    previous->next = temp;
    return head;
    }
void print(Node *&Head)
{
    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

int main()
{
    Node *Head = NULL;
    Node *Tail = Head;

    int data;

    for (int i = 0; i < 6; i++)
    {
        cout << "Enter data : ";
        cin >> data;
        insert(Head, Tail, data);
    }

    cout << "The LL is  : ";
    print(Head);

    Head = Swap_adjecent(Head, Tail);

    print(Head);
}
