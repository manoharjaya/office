#include "stdio.h"
int main()
{
	int ele;
	printf("positive or negative\n");
	printf("enter the ele\n");
	scanf("%d",&ele);
	if(ele>0)
		printf("%d is positive integer\n",ele);
	else
		printf("%d negative integer\n",ele);
}
