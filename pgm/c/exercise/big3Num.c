#include "stdio.h"
int main(int argc, char const *argv[])
{
	printf("biggest 3\n");
	int a,b,c;
	printf("enter the ele\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c) printf("a=%d\n",a);
		else
			printf("c=%d\n",c);
	}
	else if(b>c)
			printf("b=%d\n",b);
	else
			printf("c=%d\n",c);
	return 0;
}
