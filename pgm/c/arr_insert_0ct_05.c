
#include<stdio.h>
#include<stdlib.h>

int al[15],n,i,j,item,k,dis=0;
void main()
{
	
	void display()
	{
		printf("-------------------------------------------\n");
		printf("Given array are..\n");
		printf("-------------------------------------------\n");		
		for(i=0;i<n;i++)
			printf("index %d\tvalue =%d\n",i,al[i]);
	}
	void create()
	{
		printf("-------------------------------------------\n");
		printf("Enter the size of an array..\n");
		scanf("%d",&n);
		printf("-------------------------------------------\n");
		printf("Enter the Element of an array..\n");
		for(i=0;i<n;i++)
		scanf("%d",&al[i]);	
		dis++;
	}
	void insert()
	{
		printf("-------------------------------------------\n");
		printf("Enter the Position to insert an array..\n");
		scanf("%d",&i);
		n++;
			
			printf("-------------------------------------------\n");
			printf("Enter the Item to insert ..\n");
			scanf("%d",&item);
			for(j=n;j>=i;j--)	
			al[j+1]=al[j];
			al[i]=item;	
			printf("-------------------------------------------\n");
			for(i=0;i<n;i++)
				printf("index %d\tvalue =%d\n",i,al[i]);
			printf("-------------------------------------------\n");		
	
	}
	void delete()
	{
		int al[5]={1,5,9,7,4},item=97,n=5,k=2,i,j;
		for(j=k;j<n;j++)
		al[j]=al[j+1];
		printf("-------------------------------------------\n");
		for(i=0;i<n-1;i++)
			printf("index %d\tvalue =%d\n",i,al[i]);
		printf("-------------------------------------------\n");	
	}	
	void update()
	{
		printf("Enter the element to update..\n");
		scanf("%d",&j);
		printf("-------------------------------------------\n");
		printf("Enter the index possition to update..\n");
		scanf("%d",&i);
		al[i]=j;
		printf("-------------------------------------------\n");
		for(i=0;i<n;i++)
			printf("index %d\tvalue =%d\n",i,al[i]);	
	}
	
	do
	{
		printf("-------------------------------------------\n");
		printf("Enter Your choice..\n");
		printf("-------------------------------------------\n");		
		printf("1.create..\n");
		printf("2.display..\n");
		printf("3.insert..\n");
		printf("4.update..\n");		
		printf("5.Exit..\n");
		printf("-------------------------------------------\n");
		scanf("%d",&i);
		switch(i)
		{
			case 1:create();
				break;
			case 2:if(dis!=0)
				{	
					display();
					break;
				}
				else
					printf("Please create an array..\n");
					break;
		
			case 3:insert();
				break;
			case 4:update();
				break;
			case 5:
				printf("System goes to sleep..\n");
				exit(0);			
			default:
				printf("-------------------------------------------\n");
				printf("NOTA..\n");
				printf("-------------------------------------------\n");
				break;
			
		};
	}while(i!=5);
	//insert();
	//delete();
	//update();
}
