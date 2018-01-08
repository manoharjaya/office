#include "stdio.h"
#include "stdlib.h"
struct Node 
{
	int data;
	struct Node *next;
};
struct Node *head;
void insert(int x,int n)
{
	int idx,i=0;
	struct Node *temp1=(struct Node*)malloc(sizeof(struct Node));
	temp1->data=x;
	temp1->next=NULL;
	if(n==1)
	{
		temp1->next=head;//NULL->0
		head=temp1;
		return;
	}
	struct Node *temp2=head;   // initial address
	for(idx=0;idx<n-2;idx++)  // to reach n-1 th node 
	{
		temp2=temp2->next; // reach upto n-t node address		
	}

	temp1->next=temp2->next; //NULL -> 0
	temp2->next=temp1;	// new address is pointed to header node (temp2=head)

}
void print()
{
	struct Node* temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
deletePosition(int pos)
{
	int i=0;
	struct Node *temp1=head;
	if(pos==1)
	{
		head=temp1->next;
		free(temp1);
		return;
	}	
	for(i=0;i<pos-2;i++)
		temp1=temp1->next;   // now pointer points to n-1 node//
	struct Node* temp2=temp1->next;
	temp1->next=temp2->next;
	free(temp2);
}
void main()
{
	int pos=0;
	head=NULL;
	insert(5,1);//5
	insert(7,2);//5,7
        insert(10,1);//10,5,7
        insert(17,2); //10,5,7,17
	insert(50,1);    //50,10,17,5,7
	print();
	printf("\nEnter the position you want to delete \n");
	scanf("%d",&pos);
	deletePosition(pos);
	print();
}
