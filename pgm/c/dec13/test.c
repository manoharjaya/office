#include "stdio.h"
#include "stdlib.h"
struct Node
{
        int data;
        struct Node *next;
};

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

struct Node* Insert(struct Node* head,int x)
{
        struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=x;
        temp->next=head;
        head=temp;
        return head;
}
struct Node* reverse(struct Node *head)
{
	struct Node* current=head;
	struct Node *pre=NULL,*next=NULL;
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
void main()
{
	int num=0,i=0,x;
	struct Node* head=NULL; 
	printf("How many no?\n");
        scanf("%d",&num);
        for(i=0;i<num;i++)
        {
                printf("Enter the no:\n");
                scanf("%d",&x);
                head=Insert(head,x);
                Print(head);
                head=reverse(head);
		Print(head);
                

        }
}                                                                          
