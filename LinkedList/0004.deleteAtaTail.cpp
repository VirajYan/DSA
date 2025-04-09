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
    }
    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

void deleteTail(Node *&head, Node *&tail)
{
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    tail = temp;
}

int main()
{
    Node *head = NULL;
    Node *tail = new Node(10);
    insertAtTail(head, tail, 60);
    insertAtTail(head, tail, 70);

    deleteTail(head, tail);

    print(tail);

    return 0;
}