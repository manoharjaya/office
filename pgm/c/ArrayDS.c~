#include<stdio.h>
#include<stdlib.h>

void main()
{
	int al[5]={1,5,7,9,4},item=97,k=2,n=5,j=0,i=0;//  1,5,97,7,9,4
		
	void add()
	{
		printf("\n---------------------------------------------------------------------");
		printf("\nThe given array are..");
		printf("\n---------------------------------------------------------------------");

		 for(i=0;i<n;i++)
			 printf("\nindex %d value %d",i,al[i]);
		 j=n-1;
		 while(j>=k)
			{
				al[j+1]=al[j];
	       			 j--;
			}
		al[k]=item;
		printf("\n---------------------------------------------------------------------");
		for(j=0;j<n+1;j++)
			printf("\ninserted array index %d value %d",j,al[j]);
		printf("\n---------------------------------------------------------------------");
		printf("\n");
		
	}
	void delete()
	{	
		printf("\n---------------------------------------------------------------------");
		printf("\nDelete operation");
		printf("\n---------------------------------------------------------------------");
		printf("\nThe given array are..");
		printf("\n---------------------------------------------------------------------");                
		for(i=0;i<n;i++)
                      printf("\nindex %d value %d",i,al[i]);
                printf("\n");
                j=k;
                while(j<=n)
                {
                    al[j]=al[j+1];
                    j++;
                }
		printf("\n---------------------------------------------------------------------");
                for(j=0;j<n;j++)
                      printf("\n deleted array index %d value %d",j,al[j]);	
		printf("\n---------------------------------------------------------------------");

	}
	void search()
	{
		printf("\n---------------------------------------------------------------------");
		printf("\nSearch operation");
		printf("\n---------------------------------------------------------------------");
		printf("The given array are..");
		printf("\n---------------------------------------------------------------------");
		for(i=0;i<n;i++)
		printf("\nindex %d value %d",i,al[i]);
		printf("\n---------------------------------------------------------------------");
		printf("\nEnter the value to search..");
		printf("\n---------------------------------------------------------------------");
		scanf("%d",&i);
		for(j=0;j<n;j++){
		        if(al[j]==i)
		                break;
		}
		printf("\nitem =%d and index=%d",i,j);

	}
	printf("\n---------------------------------------------------------------------");
	printf("\n 1.insert\t2.delete\t3.search..");
	printf("\n---------------------------------------------------------------------");	
	printf("\n");	
	scanf("%d",&i);
	do
	{

	switch(i)
	{
		case 1:add();
			break;
		case 2:delete();
			break;		
		default:
			printf("\nExit Thank U....");
			break;
			//exit(0);
	
	}
	}while(i==0);
}
