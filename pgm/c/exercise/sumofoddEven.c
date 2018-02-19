#include <stdio.h>
int main(int argc, char const *argv[])
{
	printf("sumof odd even\n");
	int i,ele,no,odd=0,even=0;
	printf("Hom many no\n");
	scanf("%d",&no);
	for (i = 0; i < no; ++i)
	{	
		
		scanf("%d",&ele);
		if(ele%2==0)
			even=even+ele;
		else
			odd=odd+ele;
	}
	printf("sum of odd=%d\n",odd);
	printf("sum of even=%d\n",even);
	
	return 0;
}
