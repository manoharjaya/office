#include "stdio.h"
int main()
{
	int ele1,ele2,temp;
    printf("Enter the ele..\n");
	scanf("%d%d",&ele1,&ele2);
    printf("before swap %d %d\n",ele1,ele2);
    temp=ele1;
    ele1=ele2;
    ele2=temp;
    printf("after swap %d %d\n",ele1,ele2);
}
