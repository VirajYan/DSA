#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // this default constructor is used when u want to create a empty node
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    // this is used when u u dont want empty node
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // here why only constructor is used here and not anything else?
    //  In this code:
    //  Node* head = new Node(10);
    //  You're creating a new node with value 10.

    // So instead of writing this every time:

    // Node* head = new Node;
    // head->data = 10;
    // head->next = NULL;
    // You just do:

    // Node* head = new Node(10);
    // That’s the whole purpose of the constructor — to automatically set up an object’s data when it is created.

    // We have a parameter named data, and we also have a class member named data.

    // So when we write:

    // data = data;
    // The compiler gets confused — both refer to the parameter data. It won't know you meant to assign the parameter to the class member.

    // this->data = data;
    // Here’s what it means:

    // this is a pointer to the current object — the object being constructed.

    // this->data means the data variable that belongs to the object (class member).

    // The right-hand side data is the parameter passed into the constructor.

    // So this line:

    // this->data = data;
    // means:

    // Set the class member data to the value passed into the constructor.
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertAtHead(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

int main()
{
    Node *head = new Node(10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    insertAtHead(head, 50);

    print(head);
    return 0;
}