#include "stdio.h"
#include "stdlib.h"
struct Node
{
	int data;
	struct Node* next;
};

struct Node* Insert(struct Node *head,int data)
{
	int i=0;
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=data;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		return;
	}
	struct Node *temp1=head;
	while(temp1->next!=NULL) temp1=temp1->next;
	temp1->next=temp;
	return  head;
}
void Print(struct Node* head)
{
	//using iterative 
	/*while(head!=NULL)
	{
		printf("%d\t",head->data);
		head=head->next;
	}
	printf("\n");
	*/
	
	//using recursive call
	/*
	if(head==NULL) return;
	printf("%d\t",head->data);
	Print(head->next);
	*/
		
	if(head==NULL) return;
	Print(head->next);
	printf("%d\t",head->data);
	printf("\n");
}
void main()
{
 	struct Node* head=NULL;
	head=Insert(head,1);
        head=Insert(head,2);
        head=Insert(head,3);
        head=Insert(head,4);
        head=Insert(head,5);
	Print(head);
}
