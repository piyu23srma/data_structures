#include <stdlib.h>
#include <stdio.h>

struct Node
{
	int data;
	Node* next;
};

Node* head ;

Node* Insert(Node* head, int data)
{
	Node* temp = new Node();
	temp->data = data;
	temp->next = NULL;

	if (head == NULL) head = temp;
	else{
		Node* temp1 = head;
		while(temp1->next != NULL) temp1 = temp1->next;
		temp1->next = temp;
	}
	return head;
}

void Print(Node* p)
{
	if (p == NULL) return;
	printf("%d, ", p->data);
	Print(p->next);
}

void Reverse(Node* p)
{
	if (p->next == NULL) {
		head = p;
		return;
	}
	Reverse(p->next);
	
	Node* q = p->next;
	q->next = p;
	p->next = NULL;
	
}
int main()
{
	head = NULL;
	head = Insert(head,2);
	head = Insert(head,3);
	head = Insert(head,4);
	head = Insert(head,5);
	head = Insert(head,6);

	Print(head);
	printf("\n");
	Reverse(head);
    Print(head);
    printf("\n");


}