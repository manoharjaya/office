#include "stdio.h"
int value1()
{
	return 10;
}
int value2()
{
	return 60;
}
int add(int a)
{
	return a+1;
}
int main(int argc, char const *argv[])
{
	printf("hello manohar\n");

	printf("%d%d\n", add(value1()),add(value2()));
	return 0;
}