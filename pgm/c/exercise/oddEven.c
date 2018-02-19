#include "stdio.h"
int main(int argc, char const *argv[])
{
	printf("manohar\n");
	int no;
	printf("Enter the integer..\n");	
	scanf("%d",&no);
	if(no%2==0)
		printf("no=%d is an even num\n",no);
	else
                printf("no=%d is an odd num\n",no);
	return 0;
}
