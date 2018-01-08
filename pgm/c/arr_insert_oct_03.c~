#include<stdio.h>
void main()
{
	int al[5]={1,5,7,9,4},item=97,k=2,n=5,j=0,i=0;//  1,5,97,7,9,4
	
	void insert()
	{
		 printf("The given array are..");
	         for(i=0;i<n;i++)
       		 printf("\nindex %d value %d",i,al[i]);
       		 j=n-1;
       		 while(j>=k)
        		{
                		al[j+1]=al[j];
               			 j--;
        		}
        	al[k]=item;
        	for(j=0;j<n+1;j++)
        		printf("\n inserted array index %d value %d",j,al[j]);
	}
	
	void delete()
	{
		printf("\nDelete operation");
                printf("\nThe given array are..");
                for(i=0;i<n+1;i++)
                      printf("\nindex %d value %d",i,al[i]);
                printf("\n");
                j=k;
                while(j<=n)
                {
                    al[j]=al[j+1];
                    j++;
                }
                for(j=0;j<n;j++)
                      printf("\n deleted array index %d value %d",j,al[j]);
	}
	void search()
	{
		printf("\nSearch operation");
		printf("The given array are..");
		for(i=0;i<n;i++)
		printf("\nindex %d value %d",i,al[i]);
		printf("\nEnter the value to search..");
		scanf("%d",&i);
		for(j=0;j<n;j++){
		        if(al[j]==i)
		                break;
		}
		printf("\nitem =%d and index=%d",i,j);

	}
        printf("\n Enter 0 for Insert 1 for delete 2 for search 3 for exit..\t");
	scanf("%d",&i);
	switch(i!=-1)
	{
		case 0:insert();
			break;
		case 1:delete();
			break;
		case 2:search();
			break;
		default : printf("exit..");
			break;
	}
}
