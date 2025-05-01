#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
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

void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

void reverseALinkedList(Node *&head)
{
    Node *curr = head;
    Node *prev = NULL;

    while (curr != NULL)
    {
        Node *temp = curr->next;
        curr->next = prev;

        prev = curr;
        curr = temp;
    }
    head = prev;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertAtTail(head, tail, 60);
    insertAtTail(head, tail, 70);
    insertAtTail(head, tail, 80);
    reverseALinkedList(head);

    print(head); // because we want to print tail right

    return 0;
}