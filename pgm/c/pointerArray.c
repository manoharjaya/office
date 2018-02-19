#include "stdio.h"
int main(int argc, char const *argv[])
{
	int a[5]={1,2,3,4,5};
	int b[5];
	printf("%s\n", "hello");
	printf("%d\n",a);
	for (int i = 0; i < 5; ++i)
	{
		printf("%d\t",a+i );
		printf("%d\n",*(a+i) );
			
	}

	for (int j = 0; j < 5; ++j)
	{
		scanf("%d",b+j);
	}
	printf("\n");
	for (int i = 0; i < 5; ++i)
	{
		printf("%d\t",*(b+i));
	}
	printf("\n");
	return 0;
}

