#include"stdio.h"
#include"stdlib.h"
void main()
{
	int *nptr,narr[5],nidx=0,num=0;
	printf("%s\n","Enter the value..");
	scanf("%d",&num);
	//printf("size=%d",sizeof(int));
	nptr=(int*)malloc(num*sizeof(int));
	printf("nptr=%x",nptr);
	int *nid=(int*)malloc(sizeof(int));
	scanf("%d",nid);
	printf("%d",*nid);
	/*for(nidx=0;nidx<num;nidx++)
	{
		scanf("%d",(nptr+nidx));
	}
	for(nidx=0;nidx<num;nidx++)
        {
                printf("%d",*(nptr+nidx));
        }*/		
}
