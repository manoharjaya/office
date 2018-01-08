#include<stdio.h>
void pass(int*);
void main()
{
	int al[4]={5,10,15,20};
	pass(al);
}
void pass(int *a)
{
                int j=0;
                for(j=0;j<4;j++)
                {
                        printf("\na[%d]=%d",j,a[j]);
                }
}

