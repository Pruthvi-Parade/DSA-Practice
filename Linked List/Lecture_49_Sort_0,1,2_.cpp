/********************************
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

********************************/

// First approach based on counting the number of zeros ones and twos in the LL

// Node *sortList(Node *head)
// {
//     // Write your code here.
//     int Count_of_Zero = 0;
//     int Count_of_One = 0;
//     int Count_of_Two = 0;

//     Node *Temp = head;

//     while (Temp != NULL)
//     {
//         if (Temp->data == 0)
//             Count_of_Zero++;
//         else if (Temp->data == 1)
//             Count_of_One++;
//         else if (Temp->data == 2)
//             Count_of_Two++;

//         Temp = Temp->next;
//     }
//     Temp = head;
//     //     cout << " 0 : " << Count_of_Zero << "\n 1 : " << Count_of_One << "\n 2 : " << Count_of_Two;
//     while (Temp != NULL)
//     {
//         if (Count_of_Zero != 0)
//         {
//             Temp->data = 0;
//             Count_of_Zero--;
//         }
//         else if (Count_of_One != 0)
//         {
//             Temp->data = 1;
//             Count_of_One--;
//         }
//         else if (Count_of_Two != 0)
//         {
//             Temp->data = 2;
//             Count_of_Two--;
//         }
//         Temp = Temp->next;
//     }
//     return head;
// }

// Approach 2 where data replacement is not allowed but you can change links

/********************************
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

********************************/
// void Insert_At_Tail(Node *&Tail, Node *Temp)
// {
//     Tail->next = Temp;
//     Tail = Temp;
// }
// Node *sortList(Node *head)
// {
//     // Write your code here.
//     Node *Zero_Head = new Node(-1);
//     Node *Zero_Tail = Zero_Head;
//     Node *One_Head = new Node(-1);
//     Node *One_Tail = One_Head;
//     Node *Two_Head = new Node(-1);
//     Node *Two_Tail = Two_Head;

//     Node *Temp = head;

//     //     Create A LL for each i.e 0,1,2
//     while (Temp != NULL)
//     {
//         int Value = Temp->data;
//         if (Value == 0)
//             Insert_At_Tail(Zero_Tail, Temp);
//         else if (Value == 1)
//             Insert_At_Tail(One_Tail, Temp);
//         else if (Value == 2)
//             Insert_At_Tail(Two_Tail, Temp);

//         Temp = Temp->next;
//     }

//     //     Merge The LLs

//     if (One_Head->next != NULL)
//         Zero_Tail->next = One_Head->next;

//     else
//         Zero_Tail->next = Two_Head->next;

//     One_Tail->next = Two_Head->next;
//     Two_Tail->next = NULL;
//     head = Zero_Head->next;

//     delete Zero_Head;
//     delete One_Head;
//     delete Two_Head;

//     return head;
// }