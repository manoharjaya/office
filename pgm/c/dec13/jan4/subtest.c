#include "stdio.h"

int pattern()
{
	int i,j,count=0,n=4;
 for ( i = 0; i < n; ++i)
        {
                for (j = 0; j <= i;j++)
                {
                        count++;
                        char a='*';
                        printf("%c\t",a);
                        
                }
                printf("\n");
        }
return 500;
return 78788;
return 878;
}



void   main(int argc, char const *argv[])
{
	//int i=0,n=4,j,count=0;
	
	int getcount=pattern();
	//int pageNot=pageNodt();
	printf("getcount=%d\n",getcount);

}
