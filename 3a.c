#include<stdio.h>
void strcopy(char *s1,char *s2)
{
while (*s1!='\0')
{
*s2=*s1;
s1++;
s2++;
} 
}

int strcomp(char *s1,char *s2)
{ 
if (*s1==*s2)
return 0;
else return *s1-*s2;
}

void strcat(char *s1,char *s2)
{
while(*s1!='\0')
{
s1++;
}
while(*s2!='\0')
{
*s1=*s2++;
}
}


void main()
{
int ch,res;
char st1[30], st2[20];
printf("enter\n 1.copy \n 2.cmp\n 3.concat\n 4.rev\n");
scanf("%d",&ch);
switch(ch)
{
case '1':printf("enter the string to be copied");
	 scanf("%s",st1);
	 strcopy(st1,st2);
	 printf("string copied is %s");
          break;
case '2':printf("enter 1st string to cmp");
	 scanf("%s",st1);
	printf("enter 2nd string to cmp");
	 scanf("%s",st2);
	res=strcomp(st1,st2);
        if (res==0)
	printf("string equal");
	else 
	printf("string not equal");
	break;
case '3':printf("enter 1st string to concat");
	 scanf("%s",st1);
	 printf("enter 2nd string to concat");
	 scanf("%s",st2);
         strcat(st1,st2);
	 break;
default: printf("no such option\n");
	break;
};
}
























