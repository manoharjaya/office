#include "stdio.h"

int* display()
{
	int arr[5]={10,20,30,40,50},b[5];
	for (int i = 0; i < 5; ++i)
	{
		b[i]=arr[i];
		// printf("%d\n",b[i]);
	}
	return b;
}
int main(int argc, char const *argv[])
{
	
	printf("main manohar\n");
	int *bs=display();
	for (int i = 0; i < 5; ++i)
		printf("%d\n",bs[i]);

	return 0;
}