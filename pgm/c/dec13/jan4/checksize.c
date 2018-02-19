/*#include "stdio.h"
#include "stdlib.h"
int test2()
{
	printf("%s\n","test2" );

	return 1;
}

void test1(test2)
{
	printf("%s\n","test1" );
}	

int main()
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
	test1();
return 0;
}


	
*/

	#include "stdio.h"

    int f(int g(void)) {
    	printf("%d\n",7%5 );
        return 2*g();
    }
    int x(void) {
       return 12;
    }
    int main(void) {
       int n = f(x);

       printf("%d\n",n );
       return 0;
    }