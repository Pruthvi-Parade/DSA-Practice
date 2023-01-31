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
        Node *New_node = new Node(data);
        Head = New_node;
        Tail = Head;
        cout << "\nHead Node now created : \n";
        return;
    }

    else
    {
        Node *New_node = new Node(data);
        
        Tail->next = New_node;
        Tail = New_node;
        return;
    }
}

void print_LL(Node *Head)
{
    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


void add_the_LL(Node *&_Head_1, Node *&Head_2)
{
    Node *temp_1 = _Head_1->next;
    Node *temp_2 = Head_2->next;

    int num_1 = _Head_1->data, num_2 = Head_2->data, result;
    
    while (temp_1 != NULL && temp_2 != NULL)
    {
        num_1 = num_1 * 10;
        num_1 = num_1 + temp_1->data;
        temp_1 = temp_1->next;

        num_2 = num_2 *10;
        num_2 = num_2 + temp_2->data;
        temp_2 = temp_2->next;
    }

    result = num_1 + num_2;
    cout << result << endl;

    Node *Result = NULL;
    Node *R_tail = Result;
    
    while (result != 0)
    {
        insert(Result, R_tail, result % 10);
        result = result / 10;
    }
    cout << "Final LL is : ";
    print_LL(Result);
} 

int main()
{

    int i = 0, data;

    Node *Head_1 = NULL;
    Node *Tail_1 = Head_1;

    cout << "Enter the First LL : ";

    while (i < 4)
    {
        cout << "Enter the data : ";
        cin >> data;
        insert(Head_1, Tail_1, data);
        i++;
    }
    cout << endl;
    cout << "First LL is : " << endl;
    print_LL(Head_1);

    i = 0;
    Node *Head_2 = NULL;
    Node *Tail_2 = Head_1;

    cout << "Enter the Second  LL : ";

    while (i < 4)
    {
        cout << "Enter data : ";
        cin >> data;
        insert(Head_2, Tail_2, data);
        i++;
    }

    cout << "Second LL is : ";
    print_LL(Head_2);

    cout << "Result : ";
    add_the_LL(Head_1, Head_2);
}