void insert(Node *&Head, Node *&Tail, int data)
{
    if (Head == NULL)
    {
        Node *New_Node = new Node(data);
        Head = New_Node;
        Tail = Head;
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

Node *Clone_Head = NULL;
Node *Clone_Tail = NULL;

Node *Temp = Head;

while (Temp != NULL)
{
    insert(Clone_Head, Clone_Tail, Temp->data);
    Temp = Temp->next;
}

unordered_map<Node *, Node *> Old_To_New;

Temp_1 = head;
Temp_2 = Clone_Head;
