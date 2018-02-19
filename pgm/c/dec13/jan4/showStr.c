#include "stdio.h"
#include "string.h"
int main(int argc, char const *argv[])
{
	char a[5]={'a','b','c','\0'};
	printf("%s\n", "Hello world");
	for (int i = 0; i < 5; ++i)
	{
		/* code */
		printf("%c\n",a[i] );
	}
	return 0;
}