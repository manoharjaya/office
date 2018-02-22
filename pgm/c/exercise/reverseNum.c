#include "stdio.h"
int main(int argc, char const *argv[])
{
	int re,num,rev=0;
	printf("reverseNum\n");
	printf("Enter the Num\n");
	scanf("%d",&num);
	int temp=num;
	while(num>0)
	{
		re=num%10;
		rev=rev*10+re;
		num=num/10;
	}
	// printf("rev=%d%d\n",temp,rev);
	if(rev==temp) printf("palin=%d\n",rev);
	else
		printf("Not palin=%d\n",num);
	return 0;
}