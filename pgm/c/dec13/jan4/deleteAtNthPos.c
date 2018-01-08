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
	if(head==NULL){
		head=temp;
	//	printf("Insert=%d\n",head);
		return;
	}
	struct Node* current=head;
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
void Print()
{	
	struct Node* temp=head;
        //printf("Print=%d\n",temp);
	while(temp!=NULL)       
        {
                printf("%d\t",temp->data);
                temp=temp->next;
        }
        printf("\n");   
	
}
void Delete(int n)
{
	struct Node* temp1=head;
        //printf("delete=%d\n",temp1);

	if(n==1)
	{
		head=temp1->next;//head move to next of temp
		free(temp1);
		return;
	}
	int i;
	for(i=0;i<n-2;i++)
	temp1=temp1->next; // reaching upto n-1 node
	struct Node* temp2=temp1->next;// get the next address of deleted node
	temp1->next=temp2->next; // pointed to n+1 node 
	free(temp2);
}
void main()
{
	head=NULL;
	Insert(17);
        Insert(27);
        Insert(7);
	Insert(57);
	Insert(66);
	Print();
	int no;
	printf("Enter the pos:\n");
	scanf("%d",&no);
//	printf("%d\n",head);
	Delete(no);
	Print();
}
