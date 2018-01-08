#include<stdio.h>
void main()
{
	int arr[]={25,2,15,7,70};
	int add_item,index,nid,n=5,id;
	for(nid=0;nid<n;nid++)
	{
		printf("The given array is a[%d]=%d\n",nid,arr[nid]);
	}

	printf("\nEnter the item");
	scanf("%d",&add_item);
	printf("\nEnter the index to Insert..");
	scanf("%d",&index);
	
	while(index<=n)
	{
		arr[n+1]=arr[n];
		n--;
	}
	arr[index]=add_item;
	n=5;
	for(id=0;id<n+1;id++)
	{
		printf("changed array is a[%d]=%d\n",id,arr[id]);
	}
}
