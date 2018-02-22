#include "stdio.h"
void main()
{
        int temp,sum=0,i=2;
        printf("arm Num\n");
        printf("Enter the ele\n");
        scanf("%d",&temp);  //6
        while(i!=temp)
        {
                if(temp%i==0) sum=sum+i;
                i++;
        }
        if((sum+1)==temp) printf("%d perfect\n",sum+1);
        else
                 printf("%d not perfect\n",temp);

}	
