#include <stdlib.h>
#include <stdio.h>

struct Node
{
	int data;
	Node* next;
};

Node* head ;

void Insert(int data)
{
	Node* temp1 = new Node();
	temp1->data = data;
	temp1->next = NULL;

	if (head == NULL)
	{
		head = temp1;
		return;
	}

	Node* temp2 = head;

	while(temp2->next != NULL)
	{
		temp2 = temp2 -> next;
	}

	temp2-> next = temp1;
}

void Print()
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

void Delete(int n)
{
	Node* temp1 = head;

	if (n == 1)
	{
		head = temp1->next;
		free(temp1);
		return;
	}

	for (int i = 0; i < n-2; i++)
		temp1 = temp1->next;

	Node* temp2 = temp1->next;
	temp1->next = temp2->next;

	free(temp2);

}

int main()
{
	head = NULL;

	Insert(2);
	Insert(4);
	Insert(6);
	Insert(5);
	Print();
	int n;
	printf("Enter a position \n");
	scanf("%d",&n);
	Delete(n);
	Print();
}