#include "stdio.h"
#include "stdlib.h"
struct employee
{
	int id;
	char name[25];
}emp1[5],emp2,*emp3;
void main()
{
	int i,j=0;
	int num=0;
	printf("Enter the no : \n");
	scanf("%d",&num);
	//printf("enter your details..\n");
/*	for(i=0;i<num;i++)
	{
		printf("enter your id..\t");
		scanf("%d",&emp1[i].id);
	        printf("enter your name..\t");
                scanf("%s",&emp1[i].name);
	}	
	printf("\n");
	for(j=0;j<num;j++)
        {
                printf("data=\t%d\t%s\n",emp1[j].id,emp1[j].name);
        } */ 
	printf("\n-----------------------------------------------");
	emp3=(struct employee*)malloc(num*sizeof(struct employee));
	for(i=0;i<num;i++)
        {
                printf("enter your id..\t");
                scanf("%d",&(emp3+i)->id);
                printf("enter your name..\t");
                scanf("%s",&(emp3+i)->name);
        }
        printf("\n");
        for(j=0;j<num;j++)
        {
                printf("data=\t%d\t%s\n",(emp3+j)->id,(emp3+j)->name);
        }
	/*printf("Enter the details..\n");
	scanf("%d%s",&emp2.id,&emp2.name);
	printf("%d\t%s",emp2.id,emp2.name);
	*/
	

}
