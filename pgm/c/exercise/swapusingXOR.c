#include "stdio.h"
void main()
{
	int a=10,b=20;
	printf("a=%d\tb=%d\n",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
        printf("a=%d\tb=%d\n",a,b);

}
