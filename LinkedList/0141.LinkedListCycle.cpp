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
    cout << endl;
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

/*brute force
class Solution {
public:
   bool hasCycle(ListNode *head) {
       ListNode *temp=head;

       while(temp != NULL)
       {
           if(temp->val == INT_MAX)
           {
               return true;
           }
           temp->val=INT_MAX;
           temp=temp->next;
       }
       return false;
   }
};
*/

bool hasCycle(Node *head)
{
    if (head == NULL)
        return false;

    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertAtTail(head, tail, 1);
    insertAtTail(head, tail, 2);
    insertAtTail(head, tail, 3);
    insertAtTail(head, tail, 4);
    insertAtTail(head, tail, 5);
    insertAtTail(head, tail, 3);

    // Create a cycle: tail->next points to node with value 3
    Node *temp = head;
    int count = 1;
    while (count < 3)
    {
        temp = temp->next;
        count++;
    }
    tail->next = temp;

    bool ans = hasCycle(head);
    cout << ans;
    return 0;
}