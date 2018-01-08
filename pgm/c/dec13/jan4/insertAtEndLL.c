#include "stdio.h"
#include "stdlib.h"
struct Node 
{
	int data;
	struct Node *next;

};
struct Node* head;
void Insert(int x)
{
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data=x;
        temp->next=NULL; 
//	printf("head=%d\n",head);
	if(head==NULL){
		head=temp;
//		printf("%d\n",head);
		return;
	}
	else
	{	
		struct Node* current=head;
//		printf("eles=%d\n",current);
		while(1)
		{
			if(current->next==NULL)
			{
				current->next=temp;
				break;
			}
			current=current->next;
		}
	}    
}
void Print()
{	
	struct Node* temp=head;
	while(temp!=NULL)       
        {
                printf("%d\t",temp->data);
                temp=temp->next;
        }
        printf("\n");   
	
}
void main()
{
	head=NULL;
	Insert(17);
        Insert(27);
        Insert(7);
	Print();
/*	
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data=2;
	temp->next=NULL;
	head=temp; // head is set 100
	struct Node* temp1=temp;

	temp = (struct Node*)malloc(sizeof(struct Node));       
        temp->data=4;
        temp->next=NULL;
	temp1->next=temp;
	temp1=temp;
	
	temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data=6;
        temp->next=NULL;
        temp1->next=temp;


	while(head!=NULL)	
	{
		printf("%d\t",head->data);
		head=head->next;
	}
	printf("\n");	
*/
}
