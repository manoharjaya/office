#include "stdio.h"
int cube(int temp)
{
	return temp*temp*temp;
}
void main()
{
        int qu,re,sum=0,temp,init=0;
        printf("arm Num\n");
        printf("Enter the ele\n");
        scanf("%d",&temp);
	init=temp;
        while(temp!=0)
        {
                qu=temp/10;
                re=temp%10;
		int t=cube(re);
                sum=sum+t;
                temp=qu;
        }
	if(sum==init) printf("arm=%d\n",sum);
	else
		printf("not arm=%d\n",sum);
	
}	
