#include "stdio.h"
void main()
{
	
	printf("%s\n","Arithmetic_Nov_11");
	int aid,bid;
	printf("Enter the ele\n");
	scanf("%d%d",&aid,&bid);
	printf("add=%d\n", aid+bid);
	printf("sub=%d\n", aid-bid);
	printf("mul=%d\n", aid*bid);
	printf("div=%d\n", aid/bid);
	printf("modulo=%d\n", aid%bid);
	// bitwise 
	printf("\n");
	printf("AND=%d\n", aid&bid);
	printf("OR=%d\n",aid|bid);
	printf("XOR=%d\n",aid^bid);
	printf("Right=%d\n", aid>>1);
	printf("Left=%d\n", aid<<1);


	printf("%s\n",(aid>bid)?"False":"Hello Manohar You must have to learn Data Structure..");

}
