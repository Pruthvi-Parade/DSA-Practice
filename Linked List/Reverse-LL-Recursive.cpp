#include<bits/stdc++.h>
using namespace std;

class Node
{
private:
    /* data */
public:
    int data;
    Node *next; 
    Node(int data){
        this->data = data;
        this->next = NULL;
    };
    ~Node();
};

void insert(Node *&Head, Node *&Tail, int data){
    if( Head == NULL ){
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

void print(Node *&Head)
{
    Node *temp = Head;
    while (temp !=  NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

void print_Reverse_LL(Node *Head){
    // Base Condition 
    if (Head !=  NULL)
    {
        print_Reverse_LL(Head->next);
        printf("%d", Head->data);
    }

}
Node* print_Reverse_LL_2(Node *&Head){
    Node *Current = Head, *Previous = NULL, *Forward = NULL;
    while (Current != NULL)
    {
        // cout << "Current data : " << Current->data << endl;
        Forward = Current->next;
        Current->next = Previous;
        Previous = Current;
        Current = Forward;
    }
    return Previous;
}
int main(){
    Node *Head = NULL;
    Node *Tail = Head;

    int data;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter data : " ;
        cin >> data;
        insert(Head, Tail, data);
    }
    
    cout << "The LL is  : ";
    print(Head);

    Node *temp = Head;
    // print_Reverse_LL(temp);

    Head = print_Reverse_LL_2(Head);
    cout << "Revesed LL is  : - ";
    print(Head);
}
