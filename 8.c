#include<stdio.h>
#include<math.h>
#include<ctype.h>
float stack[50];
int top=-1;
void push(float n)
{
stack[++top]=n;
}

float pop()
{
return(stack[top--]);
}

float evaluate(char postfix[])
{
float op1,op2,res; 
char ch;
int i=0;
while((postfix[i])!='\0')
{
ch=postfix[i];
if(isdigit(ch))
push(ch-'0');
else
{
op2=pop();
op1=pop();
switch(ch)
{
case '^':
case '$':res=pow(op1,op2);
	 break;
case '*':res=op1*op2;
	break;
case '/':res=op1/op2;
	break;
case '+':res=op1+op2;
	break;
case '-':res=op1-op2;
	break;
}
push(res);
}
i++;
}
return pop();
}

void main()
{
float r;
char postfix[50];
printf("enter postfix exp");
scanf("%s",postfix);
r=evaluate(postfix);
printf("resulr is %f",r);
}
