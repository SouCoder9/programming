#include <iostream>
using namespace std;
typedef struct node
{
    int data;
    struct node *next;
} node;

node *constructNode(int data)
{
    node *head = NULL;
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;
    head = newNode;
    return head;
}
void insertAtfirst(int data,node* head){
    cout << "enter  the data to be inserted at first position:" ;
    cin >>  data;
    node* temp = head;
}

int main()
{

    return 0;
}