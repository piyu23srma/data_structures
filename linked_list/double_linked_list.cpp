#include <stdlib.h>
#include <stdio.h>

struct Node
{
	int data;
	Node* next;
	Node* prev;
};
Node* head;

struct Node* GetNewNode(int x){
	Node* newNode = new Node();
	newNode->data =x;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}

void InsertAtHead(int x){
	Node* newNode = GetNewNode(x);

	if (head == NULL){
		head = newNode;
		return;
	}

	head->prev = newNode;
	newNode->next = head;
	head = newNode;
}

void ReversePrint(){
	Node* temp = head;
	if (temp == NULL) return;

	while(temp->next != NULL){
		temp = temp->next;
	}

	while(temp != NULL){
		printf("%d \n",temp->data );
		temp = temp->prev;
	}

}

void Print(Node* p)
{
	if (p == NULL) return;
	printf("%d, ", p->data);
	Print(p->next);
}

int main()
{
	head = NULL;
	InsertAtHead(2); 
	Print(head); 
	ReversePrint();
	InsertAtHead(4); 
	Print(head); 
	ReversePrint();
	InsertAtHead(6); 
	Print(head); 
	ReversePrint();
	
}