#include "stdio.h"
int main()
{
	int ele[10],count=0,no,i;
	printf("How many no..");
	scanf("%d",&no);
        printf("Enter the ele..\n");
	for(i=0;i<no;i++)
		scanf("%d",&ele[i]);
        for(i=0;i<no;i++)
	{
		if(ele[i]%5==0)
		{
			count++;
			printf("%d is divisibel by 5\n",ele[i]);
		}
	}
	printf("total count=%d\n",count);
	return 0;
}
