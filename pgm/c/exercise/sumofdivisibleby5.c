#include "stdio.h"
int main()
{
	int ele1,ele2,count=0,no,i,sum;
        printf("Enter the ele..\n");
	scanf("%d%d",&ele1,&ele2);
        for(i=ele1;i<=ele2;i++)
	{
		if(i%5==0)
		{
			count++;
			sum=sum+i;
		}
	}
	printf("total count=%d\n",count);
	printf("total sum=%d\n",sum);
	return 0;
}
