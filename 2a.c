#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
int m,n,p,q,(*a)[3],(*b)[3],(*c)[3],i,j,k;
printf("enter the size of matrix 1\n");
scanf("%d %d",&m,&n);
printf("enter the size of matrix 2\n");
scanf("%d %d",&p,&q);
if(n!=p)
printf("multiplication not possible\n");
else
{
printf("enter natrix a\n");
a=(int *)malloc(m*n*sizeof(int));
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",*(a+i)+j);
}
}
printf("enter matrix b\n");
b=(int *)malloc(p*q*sizeof(int));
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",*(b+i)+j);
}
}
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{*(*(c+i)+j)=0;
for(k=0;k<p;k++)
{
*(*(c+i)+j)=*(*(c+i)+j)+*(*(a+i)+k)**(*(b+k)+j);
}
}
}
printf("multiplication is \n");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",*(*(c+i)+j));
}
printf("\n");
}
}
}
