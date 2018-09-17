#include <stdlib.h>
#include <stdio.h>

struct Node
{
	int data;
	Node* next;
};

Node* head ;

void Insert(int x)
{
	Node* temp = (Node*)malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = head;
	head = temp;
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

int main()
{
	head = NULL;

	printf("How many number ?\n");
	int n,i,x;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		printf("Enter the number \n");
		scanf("%d",&x);
		Insert(x);
		Print();
	}
}