#include <bits/stdc++.h>
using namespace std;
int length;
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
        this->next= NULL;
    };
    ~Node();
};
void insert(Node *&Head, Node *&Tail, int data)
{
    // First Node 
    if (Head == NULL){
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
void print(Node *Head)
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

    int data, i = 4;

    while (i < 4)
    {
        cout << "Enter the data : ";
        cin >> data;
        insert(Head, Tail, data);
        i++;
    }
    cout << "The LL is : ";
    print(Head);
}