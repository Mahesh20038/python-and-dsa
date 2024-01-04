#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#define max 5
int stack[max];
int top=0,x;
void push(int);
int pop();
void display();
int isempty();
int isfull();
int main()
{
int ch,item,d;
char a;
while(1)
{
cout<<"\n\t1.PUSH";
cout<<"\n\t2.POP";
cout<<"\n\t3.Display";
cout<<"\n\t4.IsEmpty";
cout<<"\n\t5.IsFull";
cout<<"\n\t6.Exit";
printf("\n\t Enter Your Choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:cout<<"Enter an Element to PUSH: \n";
cin>>item;
push(item);
break;
case 2:x=pop();
cout<<"The element POP out from Stack is " << x;
break;
case 3:display();
break;
case 4:x=isempty();
if(x==1)
cout<<"Stack is Empty";
else
cout<<"Stack is Not Empty";
break;

case 5:x=isfull();
if(x==1)
cout<<"Stack is Full";
else
cout<<"Stack is Not Full";
break;
case 6:exit(1);
break;
default:cout<<"INVALID Choice\n";
break;
}
}
}
void push(int x)
{
if(top>=max)
printf("Stack is OVERTFLOW\n");
else
{
stack[top]=x;
top++;
}
}
int pop()
{
if(top<=0)
printf("Stack is UNDERFLOW\n");
else
{
top--;
x=stack[top];
}
return x;
}
void display()
{
int i;
i=top-1;
if(top<=0)
printf("Stack is Empty");
else
printf("The Elments in Stack are \n");
while(i>=0)
{
printf(" %d\n",stack[i--]);

}
}
int isempty()
{
if(top<=0)
return 1;
else
return 0;
}
int isfull()
{
if(top>=max)
return 1;
else
return 0;
}
