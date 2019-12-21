#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
int i,j,m,n,sum=0,d1=0,d2=0,(*p)[3];
printf("enter the size of matrix" );
scanf("%d %d",&m,&n);
p=(int *)malloc(m*n*sizeof(int));
printf("enter the matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",*(p+i)+j);
if(i==j)
d1=d1+*(*(p+i)+j);
if(i+j==m-1)
d2=d2+*(*(p+i)+j);
sum=sum+*(*(p+i)+j);
}
}
printf("p d is %d",d1);
printf("s d is %d",d2);
printf("sum is %d",sum);
}
