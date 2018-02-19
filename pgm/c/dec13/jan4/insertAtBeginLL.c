#include "stdio.h"
#include "stdlib.h"
struct Node 
{
	int data;
	struct Node* next;
};
//struct Node *head;
void  Insert(struct Node** head,int x)
{
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=x;
	temp->next=NULL;
	if(*head!=NULL)temp->next=*head;  // or temp->next=head   head=temp
	*head=temp;
}
void Print(struct Node *head)
{
	
	printf("List are..\n");
	while(head!=NULL)
	{
		printf("%d\t",head->data);
		head=head->next;
	}
	printf("\n");
}
int  main()
{
	int no,data,i;
	struct Node *head=NULL;
	printf("How many no:\n");
	scanf("%d",&no);
	for(i=0;i<no;i++)
	{
		printf("Enter the no:\n");
		scanf("%d",&data);
		Insert(&head,data);
		Print(head);
	}
	return 0;
}
