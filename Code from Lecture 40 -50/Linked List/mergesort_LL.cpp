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

Node *Reverse_The_LL(Node *Head)
{
    Node *Current = Head;
    Node *Previous = NULL;
    Node *Forward = NULL;

    while (Current != NULL)
    {
        Forward = Current->next;
        Current->next = Previous;
        Previous = Current;
        Current = Forward;
    }
    return Previous;
}

Node *findMid(node *head)
{
    node *slow = head;
    node *fast = head->next;
    
    while(fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    } 
    return slow;
}

Node *merge(Node *left, Node *right)
{
//     If left is NULL
    if(left == NULL)
    {
        return right;
    }
    
//     If right is NULL
    if(right == NULL)
    {
        return left;
    }
    
//     Append the sorted items in this list
    Node *answer = new Node(-1);
    Node *temp = answer;
    
//    Merge them both 
    while(left != NULL && right != NULL)
    {
        if(left->data < right->data)
        {
            temp->next = left;
            temp = left;
//          or u can right temp = temp-> next
            left = left->next;
        }
        else
        {
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }
    
//     If left is not ended
    while(left != NULL)
    {
        temp->next = left;
        temp = left;
        left = left->next;
    }
//     If right is not ended
    while(right != NULL)
    {
        temp->next = right;
        temp = right;
        right = right->next;
    }
    
    return answer->next;
} 
Node* mergeSort(Node *head) {
//     Base Case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    
//     Find mid
    Node *mid = findMid(head);
    
//     Set left and right
   Node *left = head;
   Node *right = mid->next;
   mid->next = NULL;
    
//    Sort them recurrsively
    left = mergeSort(left);
    right = mergeSort(right);
    
//    Merge left abd right
    Node *result = merge(left, right);
    
    return result;
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
    cout << "THE FIRST lINKED LIST IS  : ";
    Print(Head_1);

    node *result = mergeSort(Head_1);
}