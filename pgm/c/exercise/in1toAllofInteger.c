#include "stdio.h"
void main()
{
	int qu=0,re=0,sum=0,temp;
	printf("Enter the no\n");
	scanf("%d",&temp);
	while(temp!=0)
	{
		qu=temp/10;
		re=temp%10;
		sum=sum+(re+1);
		temp=qu;
	}
	printf("sum =%d",sum);
	printf("\n");
}
