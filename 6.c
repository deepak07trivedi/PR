#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
#define size 5
struct student 
{
char name[20];
int usn[10];
};
struct stack
{
struct student a[size];
int top;
};
void push(struct stack *p,struct student d)
{
if(p->top==size)
printf("stack overflow");
(p->top)++;
strcpy(p->a[p->top].name,d.name);
strcpy(p->a[p->top].usn,d.usn);
}
struct student pop(struct stack *p)
{
if(p->top==-1)
printf("stack underflow");
(p->top)--;
}
void main()
{
struct stack s;
struct student st1,rt1;
int ch,i;
s.top=-1;
while(1)
{
printf("\nenter\n1.push\n 2.poo\n3.display\n4.exit");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter name and usn to push\n");
scanf("%s %s",st1.name,st1.usn);
push(&s,st1);
break;
case 2:
pop(&s);
break;
case 3:
if(s.top==-1)
printf("no elements in stack");
else
for(i=s.top;i>=0;i--)
printf("%s %s\t",s.a[i].name,s.a[i].usn);
break;
case 4:exit(1);
break;
}
}
}



























