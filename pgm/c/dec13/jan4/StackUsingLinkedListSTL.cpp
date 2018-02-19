#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "stack"
using namespace std;
struct Node
{
	char data;
	struct Node *next;
};
stack<struct Node*> s;

struct Node* head;
void Insert(char *data,int n)
{
	for (int i = 0; i < n; ++i)
	{
		// printf("%d\t%d\n",i,n);
		struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
		// printf("%c\n",data[i] );
		temp->data=data[i];
		temp->next=NULL;
		if (head==NULL)
		{
			head=temp;
			//return;  // it returns to main functions at first iterations 
			continue;
		}
		
		struct Node* temp1=head;
		while(temp1->next!=NULL) temp1=temp1->next; 
			temp1->next=temp;
	}
	/*struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=data;
	temp->next=head;
	head=temp;*/

	/*Insert node at end of the list */


	
}
void Print()
{
	struct Node* temp=head;
	while(temp!=NULL)
	{
		printf("%c\t",temp->data );
		temp=temp->next;
	}
	printf("\n");
}

void Push()
{
	struct Node* temp=head;
	while(temp!=NULL)
	{
		s.push(temp);
		// printf("%d\n",temp );
		temp=temp->next;
	}
}

void Pop()
{
	struct Node* temp= s.top();

	// printf("%d\n",temp );
	head=temp; //
	s.pop();
	while(!s.empty())
	{
		temp->next=s.top();
		s.pop();
		temp=temp->next;
	}
	temp->next=NULL;// very important 
}


/*void Pop()
{
	struct Node* temp=s.top();
	while(!s.empty())
	{
		printf("%c\t",temp->data);
		s.pop();
		temp=s.top();
	}
}*/

int main(int argc, char const *argv[])
{
	struct Node* head=NULL;
	/*Insert(1);
	Insert(2);
	Insert(3);
	Insert(4);
	Insert(5);*/

//	solution 1
	/*Insert('H');
	Insert('E');
	Insert('L');
	Insert('L');
	Insert('O');*/

	char name[10]="manohar";
	Insert(name,7);
	
	Print();
	Push();

	Pop();

	Print();
	return 0;
}



