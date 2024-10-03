#include<iostream>
using namespace std;
typedef struct Node
{
	int data;
	struct Node* next;
}node;

node*createNode(int data){
	cout << " enter the node data: " ;
	cin >> data;
	node* newNode = (node*)malloc(sizeof(node));
	newNode -> data = data;
	newNode -> next = NULL;
	return newNode;
}

void insert(node *head,int data){
	cout << "enter the data to be inserted at Node:-";
	cin >> data;
	node* element = createNode(data);
	if(head == NULL){
		head = element;
	}else{
		node* temp = head;
		while(temp -> next != NULL){
			temp = temp ->next;
			temp-> next = element;
		}
	}
}

int main(){

}