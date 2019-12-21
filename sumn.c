#include<stdio.h>
#include<stdlib.h>
void main()
{
int *p,i,n,sum=0;
printf("enter the no of nos \n");
scanf("%d",&n);
p=(int *)malloc(n*sizeof(int));
printf("enter %d nos",n);
for(i=0;i<n;i++)
{
scanf("%d",(p+i));
sum+=*(p+i);
}
printf("sum is %d",sum);
}

