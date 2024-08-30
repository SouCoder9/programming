#include "bits/stdc++.h"
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
Node *constructLL(vector<int> &arr)
{
    if (arr.empty())
        return nullptr;
    Node *head = new Node(arr[0]);
    Node *temp = head;
    for (size_t i = 1; i < arr.size(); ++i)
    {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    return head;
}

void print(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = constructLL(arr);
    print(head);
    return 0;
}