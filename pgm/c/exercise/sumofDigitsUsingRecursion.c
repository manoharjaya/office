#include "stdio.h"
int sumRecur(int temp)
{
	if(temp==0) return;
	return (temp%10)+sumRecur(temp/10);
}
void main()
{
	int temp;
	printf("Enter the ele\n");
	scanf("%d",&temp);
	printf("sum=%d\n",sumRecur(temp));
}
