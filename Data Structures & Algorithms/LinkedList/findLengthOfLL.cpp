#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};

Node *createLinkedList(const vector<int> &arr)
{
    if (arr.empty())
        return nullptr;
    Node *head = new Node(arr[0]);
    Node *current = head;
    for (size_t i = 1; i < arr.size(); ++i)
    {
        current->next = new Node(arr[i]);
        current = current->next;
    }
    return head;
}

int lengthOfLL(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp)
    {
        // cout << temp -> data << " ";
        temp = temp->next;
        count++;
    }
    return count;
}
int main()
{
    vector<int> arr = {2, 5, 8, 14, 89};
    Node *head = createLinkedList(arr);
    cout << lengthOfLL(head) << endl;

    return 0;
}
