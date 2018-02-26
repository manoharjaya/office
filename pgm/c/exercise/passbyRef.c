#include "stdio.h"
void cube(int *temp)
{
	*temp =(*temp)*(*temp)*(*temp);
}
void main()
{
	int num=10;
	cube(&num);
	printf("cube=%d\n",num);
}
