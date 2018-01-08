#include<stdio.h>
void main()
{
	int al[5]={1,2,3,4,5},i,n=5;
	printf("Given array are..\n");
	printf("-------------------------------------------\n");		
	for(i=0;i<n;i++)
		printf("index %d\tvalue =%d\n",i,al[i]);
	printf("len=%d",sizeof(al)/sizeof(al[0]));
}
