#include<stdio.h>
void main()
{
	int arr[]={25,2,15,7,70},i=0,n=5,item,index;
	printf("enter the item and index to search\n");
	scanf("%d",&item);
	printf("%d\n",item);
	
	while(i<n)
	{
		if(arr[i]==item)
			break;
		i++;
	}
	
	printf("array index %d and value %d\n",i,arr[i]);
	
	
}
