#include "stdio.h"
#include "stdlib.h"
struct Node
{
	int data;
	struct Node* next;
};
struct Node *head;
struct Node* Reverse()
{
	struct Node *current,*pre,*next;
	current=head;
	pre=NULL;
	while(current!=NULL)
	{
		next=current->next;
		current->next=pre;
		pre=current;
		current=next;
	}
	head=pre;
	return head;
}
void Insert(struct Node** head,int x)
{
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data=x;
        temp->next=NULL; 
	if(*head==NULL){
		*head=temp;
		return;
	}
	else
	{	
		struct Node* current=*head;
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
void Print(struct Node *head)
{	
	//struct Node* temp=head;
	while(head!=NULL)       
        {
                printf("%d\t",head->data);
                head=head->next;
        }
        printf("\n");   
	
}
void main()
{
	head=NULL;
	Insert(&head,1);
	Insert(&head,2);
	Insert(&head,3);
	Insert(&head,4);
	Insert(&head,5);
       	Print(head);
	head=Reverse();
	Print(head);
}
