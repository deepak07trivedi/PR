#include<stdio.h>
#include<malloc.h>
#include<string.h>
struct emp
{
char name[30];
int id;
char dept[10];
float salary;
};
void main()
{
struct emp *e;
int i,n;
char dep[10];int sal;
printf("enter the no of employee");
scanf("%d",&n);
printf("enter the details of employee\n");
e=(struct emp *)malloc(n*sizeof(struct emp));
for(i=0;i<n;i++)
{
printf("enter name of  employee %d\n",i+1);
scanf("%s",(e+i)->name);
printf("enter id of  employee %d\n",i+1);
scanf("%d",&(e+i)->id);
printf("enter dept name of  employee %d\n",i+1);
scanf("%s",(e+i)->dept);
printf("enter salary of  employee %d\n",i+1);
scanf("%f",&(e+i)->salary);
}
printf("employee details are: \n");
for(i=0;i<n;i++)
{
printf(" name of  employee %d is %s\n",i+1,(e+i)->name);
printf(" id of  employee %d is %d\n",i+1,(e+i)->id);
printf(" dept name of  employee %d is %s\n",i+1,(e+i)->dept);
printf(" salary of  employee %d is %f\n",i+1,(e+i)->salary);
}
printf("enter the name of dept for which salary is to be calculated\n");
scanf("%s",&dep);
compute_sal(e,n,dep);
}

void compute_sal(struct emp *e,int n,char depn[])
{
int i;
float sal=0;
for(i=0;i<n;i++)
if(strcmp((e+i)->dept,depn)==0)
{ 
sal=sal+(e+i)->salary;
}
printf("%f",sal);
}















