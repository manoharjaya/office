#include "stdio.h"
int main(int argc, char const *argv[])
{
	int nid=10;
	int Array[5]={2,4,6,8,10};
	int i=0;
	for ( i = 0; i < 5; ++i)
	{
		
		printf("%d\n", Array[i]);
		printf("%d\n", &Array[i]);
			
	}
	printf("%d\n", nid);
	printf("%d\n", &nid);
	printf("Hello world\n");
	return 500;
}