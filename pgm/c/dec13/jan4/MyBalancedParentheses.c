#include "stdio.h"
#include "stdlib.h"
struct Node
{
	char data;
	struct Node *next;
};
struct Node* head;


void Print()
{
	struct Node* temp=head;
	while(temp!=NULL)
	{
		printf("%c\t",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

char Pop()
{
	struct Node* temp1=head;
	char cstr;
	struct Node* temp2;
	if(temp1!=NULL)
	{
		cstr=temp1->data;
		temp2=temp1->next;
	}
	free(temp1);
	head=temp2;
	return cstr;
}

int Macth(int str,int data)
{
	if((str=='{') &&  (data=='}')) 
	{
		return 1;
	}
	else if((str=='[') &&  (data==']'))
	{
		return 1;
	}
	else if((str=='(') &&  (data==')'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int  Push(char *data,int n)
{
	int i=0;
	for ( i = 0; i < n; ++i)
	{
		// Print();
		if((data[i]=='{') || (data[i]=='[') || (data[i]=='('))
		{
			struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
			temp->data=data[i];
			temp->next=head;
			head=temp;
		}

		else if((data[i]=='}') || (data[i]==']') || (data[i]==')'))
		{
			char str=Pop();
			printf("%c\n",str);
			// printf("%c\n",head );
			
			int id= Macth(str,data[i]);
			printf("m=%d\n",id);
			if(!id)
				return 0;
		}

		if(head==NULL)
			return 1;
		else 
			return 0;
	}
	
	
	
}



int main(int argc, char const *argv[])
{
	head=NULL;
	char a[10]="{[()]}";


	int id=Push(a,6);
	printf("%d\n",id );
	if(id)
		printf("%s\n","balanced.." );
	else 
		printf("%s\n","Not balanced.." );

	Print();
	
	return 0;
}