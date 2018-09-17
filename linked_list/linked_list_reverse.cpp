#include <stdlib.h>
#include <stdio.h>

struct Node
{
	int data;
	Node* next;
};


struct Node* Insert(struct Node* head, int x)
{
	Node* temp = (Node*)malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = head;
	head = temp;

	return head;
}

void Print(struct Node* head)
{
	Node* temp = head;
	printf("List is: ");
	while(temp != NULL)
	{
		printf(" %d", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

struct Node* Reverse(struct Node* head)
{
	struct Node *current, *prev,*next;
	current = head;
	prev = NULL;

	while(current != NULL)
	{
		next = current->next;
		current ->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
	return head;
}

int main()
{
	Node* head = NULL;
	head = Insert(head ,2);
	head = Insert(head ,4);
	head = Insert(head ,6);
	head = Insert(head ,8);
	Print(head);
	head = Reverse(head);
	Print(head);
	
}