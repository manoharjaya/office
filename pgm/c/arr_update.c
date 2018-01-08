#include<stdio.h>
void main()
{
	int arr[]={25,2,15,45,70};
	int n=5;
	int item=45;
	int i=0,j=0;
	int k=3;
	
	for(i=0;i<n;i++)
	{
		printf("index=[%d] value=%d\n",i,arr[i]);
	}
	
	while(j<n)
	{
		if(arr[j]==item)
		{
			arr[j]=100;
			break;
		}		
		j++;	
	}
	
	for(i=0;i<n;i++)
	{
		printf("index=[%d] value=%d\n",i,arr[i]);
	}
}
