#include<stdio.h>
void main()
{
	int al[4][2]={{1,2},{4,5},{7,8},{10,11}},i=0,j=0;
	for(i=0;i<4;i++)
		for(j=0;j<2;j++)
		{
			printf("\nal[%d][%d]=%d",i,j,al[i][j]);
		}
	printf("%s\n","test");
}
