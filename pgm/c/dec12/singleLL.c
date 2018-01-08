#include "stdio.h"
#include "stdlib.h"
struct Node
{
	int data;
	struct Node *next;	 
};
void main()
{
	struct Node *head=NULL;
	struct Node *first=NULL;
	struct Node *second=NULL;

        head=(struct Node*)malloc(sizeof(struct Node));
	first=(struct Node*)malloc(sizeof(struct Node));
        second=(struct Node*)malloc(sizeof(struct Node));
	
	printf("head=%x\n",head);
	printf("first=%x\n",first);
        printf("second=%x\n",second);
	
	printf("------------------------------------\n");
	head->data=15;
	head->next=first;
	
	first->data=25;
	first->next=second;
	
	second->data=75;
	second->next=NULL;

//	printf("head=%d\n",head->data);
	while(head!=NULL)
	{
	        printf("head=%d\n",head->data);
		head=head->next;
	}	
}
