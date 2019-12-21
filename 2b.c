#include<stdio.h>
#include<string.h>
void main()
{
int i,j,n,f;
char *name[10],*temp;
printf("enter n ");
scanf("%d",&n);
for(i=0;i<n;i++)
name[i]=(char *)malloc(n*sizeof(name[10]));
printf("enter %d names",n);
getchar();
for(i=0;i<n;i++)
gets(name[i]);
for(i=i;i<n;i++)
{
f=0;
for(j=0;j<n-i;j++)
{
if(strcmp(name[j],name[j+1])>0)
{
temp=name[j];
name[j]=name[j+1];
name[j+1]=temp;
f=1;
}
if(f==0)
break;
}
}
for(i=0;i<n;i++)
puts(name[i]);
}
