#include "stdio.h"
void main()
{
	int quo,re,temp,sum;
	printf("Enter the ele\n");
	scanf("%d",&temp);
	while(temp>0)
	{
		quo=temp/10;
		re=temp%10;
		sum=sum+re;
		temp=quo;
	}
	printf("sum=%d\n",sum);
}
