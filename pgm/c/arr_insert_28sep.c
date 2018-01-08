#include<stdio.h>
void main()
{
	int al[5]={1,5,7,9,4},i=0,item=97,k=2,j=0,m=0;
	for(i=0;i<5;i++)
	{
		printf("index al[%d]=%d\n",i,al[i]);
	}
	j=5;
	while(j>=k)
	{
		al[j+1]=al[j];
		j--;	
	}
	al[k]=item;
	for(m=0;m<6;m++)
		printf("index m al[%d]=%d\n",m,al[m]);
}
