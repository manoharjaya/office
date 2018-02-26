#include "stdio.h"
void main()
{
	int year;
	printf("Enter the year\n");
	scanf("%d",&year);
	printf("year=%d\n",(year=year%100));
}
