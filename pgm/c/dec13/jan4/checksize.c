#include "stdio.h"
#include "stdlib.h"
void main()
{
	int *p;
	p=(int*)malloc(sizeof(int));
	printf("%d\n",p);
	printf("%d\n",sizeof(p));
	if(p==NULL) printf("hello\n");
	printf("hi\n");
	
	while(1)
	{
		if(1<5)
		{
			printf("manohar\n");	
		//	break;	
			if(1<5)
			{
				printf("test 4\n");
				break;
			}
		}
		printf("while\n");
	}
}
