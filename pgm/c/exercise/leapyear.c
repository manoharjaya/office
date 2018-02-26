#include "stdio.h"
void main()
{
	int year;
	printf("Enter the Year\n");
	scanf("%d",&year);
	if(year%4==0)
	        printf("Leap Year=%d\n",year);
	else
                printf("Not Leap Year=%d\n",year);


}
