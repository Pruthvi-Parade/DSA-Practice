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
bool Check_If_2_LL_Are_Equal(Node *&Head_1, Node *&Head_2){
    Node *temp_1 = Head_1;
    Node *temp_2 = Head_2;

    while (temp_1 != NULL && temp_2 != NULL)
    {
       // Basic condition  
        if (temp_1->data == temp_2->data)
        {
            temp_1 = temp_1->next;
            temp_2 = temp_2->next;
        }
        else
        {
            return false;
        }
    }

    return true;
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
    int i = 0, data;
    Node *Head_1 = NULL;
    Node *Tail_1 = Head_1;
    while (i < 3)
    {
        cout << "\nEnter Data : ";
        cin >> data;
        insert(Head_1, Tail_1, data);
        i++;
    }

    cout << endl;
    cout << "THE FIRST lINKED LIST IS  : ";
    Print(Head_1);

    i = 0;
    Node *Head_2 = NULL;
    Node *Tail_2 = Head_2;
    while (i < 3)
    {
        cout << "\nEnter Data : ";
        cin >> data;
        insert(Head_2, Tail_2, data);
        i++;
    }

    cout << endl;
    cout << "THE SECOND lINKED LIST IS  : ";
    Print(Head_2);

    bool Result = Check_If_2_LL_Are_Equal(Head_1, Head_2);
    cout << Result;
}