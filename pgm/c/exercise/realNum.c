#include "stdio.h"
struct complexNum
{
	int real;
	int img;
};
void main()
{
	struct complexNum c1,c2,c3;
	printf("complexNum\n");
        printf("Enter the c1 real and img\n");
	scanf("%d%d",&c1.real,&c1.img);
	printf("Enter the c2 real and img\n");
        scanf("%d%d",&c2.real,&c2.img);
	c3.real=c1.real+c2.real;
	c3.img=c1.img+c2.img;
	printf("c3 value are=%d+i%d\n",c3.real,c3.img);
		
}
