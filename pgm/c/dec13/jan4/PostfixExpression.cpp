#include "iostream"
#include "stack"
#include "stdlib.h"
#include "stdio.h"
using namespace std;

struct Node
{
	char data;
	struct Node* next;
};
struct Node *head;
stack<char> s;
void Insert(char data[],int n)
{
	int i;
	for ( i = 0; i < n; ++i)
	{
		// printf("%c\t",data[i] );
		struct Node *temp1=(struct Node*)malloc(sizeof(struct Node));
		temp1->data=data[i];
		temp1->next=NULL;

		// head=temp1;

		// printf("data=%c\t",temp1->data );
		// printf("\n");
		// printf("next=%d\t",temp1->next );
		
		if(head==NULL)
		{
			head=temp1;
			continue;
		}	
		struct Node* temp2=head;
		while(temp2->next!=NULL) temp2=temp2->next;
		temp2->next=temp1;
	}
	
}

void Print()
{
	struct Node* temp1=head;
	while(temp1!=NULL)
	{
		// cout <<temp1->data<<"\t";
		printf("%c\t",temp1->data);
		temp1=temp1->next;
	}
	cout<<endl;
}


void Push()
{
	struct Node* temp1=head;
	int ta1,ta2,ta3;
	while(temp1!=NULL)
	{
		if((temp1->data!='*') || (temp1->data!='-') || (temp1->data!='+'))
		{
			char c=temp1->data;
			s.push(c);
			temp1=temp1->next;
		}
		
		if((temp1->data=='*')) 
		{
			ta1=(int)s.top();
			s.pop();
			ta2=(int)s.top();
			s.pop();
			ta3=ta1*ta2;
			s.push((char)ta3);
		}
		else if((temp1->data=='-'))
		{
			ta1=(int)s.top();
			s.pop();
			ta2=(int)s.top();
			s.pop();
			ta3=ta1-ta2;
			s.push((char)ta3);
		}
		else
		{
			ta1=(int)s.top();
			s.pop();
			ta2=(int)s.top();
			s.pop();
			ta3=ta1+ta2;
			s.push((char)ta3);
		}
	}
}



// struct Node* Top()
// {
// 	return s.top();
// }

int main(int argc, char const *argv[])
{
	head=NULL;
	int i,no;
	char Arr[9]={'2','5','*','7','4','*','+','6','-'};
	Insert(Arr,9);
	// printf("%s\n", "How many character?");
	// scanf("%d",&no);
	// for (int i = 0; i < no; ++i)
	// {
	// 	printf("%s\n", "Enter the element?");
	// 	scanf("%d",&num);
	// 	Insert(num);
	// }

	Print();
	Push();

	// head=Top();
	// printf("%c\n",head->data);

	// cout<<"hello manohar"<<endl;

	return 0;
}