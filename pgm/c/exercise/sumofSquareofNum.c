#include <stdio.h>
int square(int sq)
{
	return sq*sq;
}
int sum(int sq[5],int no)
{	int sumofSe=0,i;
	for (i = 0; i < no; ++i){
		int t=square(sq[i]);
		sumofSe=sumofSe+t;
	}
	return sumofSe;
}
int main(int argc, char const *argv[])
{
	printf("sum of square of N number\n");
	int i,ele[10],no;
	printf("how many no\n");
	scanf("%d",&no);
	for (i = 0; i < no; ++i)
		scanf("%d",&ele[i]);

	int sq= sum(ele,no);
	printf("sumofSe=%d\n",sq);

	return 0;
}