#include "stdio.h"
#include "stdlib.h"
struct Node 
{
	int data;
	struct Node *next;
};
struct Node* head;//global
void Insert(int data,int n)
{
	int i;
	struct Node *temp1=(struct Node*)malloc(sizeof(struct Node));
	temp1->data=data;
	temp1->next=NULL;
	if(n==1)
	{
		temp1->next=head;  // head initially NULL
		head=temp1;  // head =100
		return;
	}
	struct Node* temp2=head;
	for(i=0;i<n-2;i++){
		temp2=temp2->next;
	}
	temp1->next=temp2->next; //NULL
	temp2->next=temp1; // new node is pointed to old one
}
void Print()
{
	struct Node* temp=head; // head is global variable is updated in insert block
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
void main()
{
	head=NULL; // empty list
        Insert(1,1);   //1
        Insert(2,2);//1,2
        Insert(3,1);//3,1,2
        Insert(4,2);//3,4,1,2
	Insert(5,1);//5,3,4,1,2
	Print();

}

