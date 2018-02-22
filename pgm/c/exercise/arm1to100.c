#include "stdio.h"
int cube(int temp)
{
        return temp*temp*temp;
}
void main()
{
        int qu,re,sum=0,temp,init=0,i=1;
        printf("arm Num\n");
        printf("Enter the ele\n");
        scanf("%d",&temp);
        init=temp;   // 900
        int temp2=i;
        while(i<=temp)
        {
		sum=0,temp2=i;
                while(temp2!=0)
                {
                        qu=temp2/10;
                        re=temp2%10;
                        int t=cube(re);
                        sum=sum+t;
                        temp2=qu;
                }
                if(sum==i){ printf("arm=%d\n",sum);}
		i++;
        }
}
