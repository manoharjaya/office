#include "stdio.h"
#include "stdlib.h"
struct Node
{
	int data;
	struct Node *next;
};

/*
struct Node *head;

void Insert(int x)
{
	struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=x;
	temp->next=head;
	head=temp;	
}*/
Node* Insert(struct Node* head,int x)
{
        struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=x;
        temp->next=head;
        head=temp;      
	return head;
}
/*void Print()
{
	printf("List are:\n");
	struct Node *temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("\n");
}*/

void Print(struct Node* head)
{
        printf("List are:\n");
        while(head!=NULL)
        {
                printf("%d\t",head->data);
                head=head->next;
        }
        printf("\n"); 
}

void main()
{
	int num=0,i=0,x=0;
	//head=NULL;
	struct Node* head=NULL; //mentioned as local variable//
	printf("How many no?\n");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("Enter the no:");
		scanf("%d",&x);
		head=Insert(head,x);
		Print(head);
	}
}
