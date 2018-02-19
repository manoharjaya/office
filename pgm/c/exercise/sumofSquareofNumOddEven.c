#include <stdio.h>
int square(int sq)
{
	return sq*sq;
}
int sum(int sq)
{		
	return square(sq);
}
int main(int argc, char const *argv[])
{
	printf("sum of square of N number\n");
	int i,ele[10],no,even,odd;
	printf("how many no\n");
	scanf("%d",&no);
	printf("enter the ele\n");
	for (i = 0; i < no; ++i){
		scanf("%d",&ele[i]);
		if(ele[i]%2==0)
		{
			even=even+sum(ele[i]);
		}
		else
			odd=odd+sum(ele[i]);
	}	
	printf("sumofSquare od even no=%d\n",even);
	printf("sumofSquare od odd no=%d\n",odd);
	return 0;
}