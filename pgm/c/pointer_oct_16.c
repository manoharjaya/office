/*#include<stdio.h>
void main()
{
	int a=500,*t;
	printf("\na=%d",a);
	printf("\n&a=%x",&a);
	printf("\n&t=%x",&t);
	t=&a;
	printf("\n*t=%d",*t);
	printf("\n&t=%x",&t);
	printf("\nt=%x",t);
	 printf("\nt=%d",t);

}*/

#include <stdio.h>

int main(){

   int* pc;

   int c;

   c=22;

   printf("Address of c:%u\n",&c);

   printf("Value of c:%d\n\n",c);

   pc=&c;  //pc=6356744

   printf("Value of pointer pc:%u\n",pc);

   printf("Address of pointer pc:%u\n",&pc);

   printf("Content of pointer pc:%d\n\n",*pc);

   c=11;

   printf("Value of pointer pc:%u\n",pc);

   printf("Address of pointer pc:%u\n",&pc);

   printf("Content of pointer pc:%d\n\n",*pc);

   *pc=2;

   printf("Address of c:%u\n",&c);

   printf("Value of c:%d\n\n",c);

   return 0;

}
