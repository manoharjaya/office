#include "stdio.h"
#ifndef MAX_SIZE
#define MAX_SIZE 101
#endif
int Array[10];
int top=-1;
//pushing the element upto max_size==-1
void Push(int data)
{
	if (top==MAX_SIZE-1)
	{
		return;
	}
	//top++;
	Array[++top]=data;
}
void Pop()
{
	if (top==-1)
	{
		return;
	}
	top--;
}

int Top()
{
	return Array[top];
}


void Print()
{
	for (int i = 0; i <= top; ++i)
	{
		printf("%d\n", Array[i]);
	}
	printf("\n");
}

int main(int argc, char const *argv[])
{
	printf("Hello World Stack\n");
	Push(1);
	Push(2);
	Push(3);
	Push(4);
	Push(5);
	printf("%d\n",Top());
	Print();
	Pop();
	Pop();
	printf("%d\n",Top() );
	Print();

	return 0;
}