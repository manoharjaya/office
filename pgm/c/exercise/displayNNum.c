#include <stdio.h>
int main(int argc, char const *argv[])
{
	printf("display N number\n");
	int i,ele[10],no;
	printf("Hom many no\n");
	scanf("%d",&no);
	for (i = 0; i < no; ++i)
		scanf("%d",&ele[i]);
		// printf("%d\n",ele);
	for (i = 0; i < no; ++i)
		printf("%d\t",ele[i]);
	return 0;
}
