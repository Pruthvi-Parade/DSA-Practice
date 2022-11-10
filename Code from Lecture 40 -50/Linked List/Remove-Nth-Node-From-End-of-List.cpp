#include <bits/stdc++.h>
using namespace std;
int length = 0;
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
    // First Node
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

void final_LL(Node *&Head, Node *&Tail, int n)
{
    int count = 1;
    int gotill = length - n;

    if (n == length)
    {
        Head = Head->next;
        return;
    }
    Node *temp = Head;
    while (count <= gotill)
    {
        if (count == gotill)
        {
            temp->next = temp->next->next;
            if (temp->next == NULL)
            {
                Tail = temp;
            }
            return;
        }
        else
        {
            count++;
            temp = temp->next;
            continue;
        }
    }
}
void print(Node *Head)
{
    Node *temp = Head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
        length++;
    }
    cout << "\n";
}
int main()
{
    Node *Head = NULL;
    Node *Tail = Head;

    int data, i = 0, n;

    while (i < 4)
    {
        cout << "Enter the data : ";
        cin >> data;
        insert(Head, Tail, data);
        i++;
    }
    cout << "The LL is : ";
    print(Head);

    cout << "Enter the value of n : ";
    cin >> n;

    final_LL(Head, Tail, n);
    print(Head);
}