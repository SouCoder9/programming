#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node *back;

    Node(int data1, Node *next1 = nullptr, Node *back1 = nullptr) {
        data = data1;
        next = next1;
        back = back1;
    }
};

Node* createDLL(vector<int> &arr) {
    if (arr.empty()) return nullptr;

    Node *head = new Node(arr[0]);
    Node *prev = head;

    for (size_t i = 1; i < arr.size(); ++i) {
        Node *temp = new Node(arr[i]);
        prev->next = temp;
        temp->back = prev;
        prev = temp;
    }

    return head;
}

void print(Node *head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = createDLL(arr);
    print(head);

    return 0;
}
