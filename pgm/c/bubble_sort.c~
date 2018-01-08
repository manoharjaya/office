#include<stdio.h>
void main()
{
	int arr[6]={5,4,8,3,10,7};
	int temp;
	int i,j;
	printf("before sorting..\n");

	for(i=0;i<6;i++)
	{	
		printf("arr=%d\n",arr[i]);
	}
	
	printf("\n");
		
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;			
			}
		}	
	}
	printf("\n");
	for(i=0;i<6;i++)
	{	
		printf("arr=%d\n",arr[i]);
	}
}
