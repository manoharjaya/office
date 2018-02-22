#include "stdio.h"
void main()
{
	int a,b,temp=0;
	printf("without product\n");
	printf("Enter the ele\n");
	scanf("%d%d",&a,&b);
	while(b!=0)
	{
		temp=temp+a;
		b--;
	}
	printf("product=%d\n",temp);
}
