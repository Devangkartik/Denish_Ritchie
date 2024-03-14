
/******************************DEVANG KARTIK******************************/

#include<iostream.h>
#include<conio.h>
int main()
{
int x,y,oprator;
clrscr();
cout<<"Enter the first number : "<<endl;
cin>>x;
cout<<"enter the second number : " <<endl;
cin>>y;
cout<<"choose anyone oprator(+,-,*,/) : ";
cin>>oprator;
switch(oprator)
{
case '+ ':
cout<<x<<"+"<<y<<"="<<x+y;
break;

case '-' :
cout<<x<<"-"<<y<<"="<<x-y;
break;

case '*' :
cout<<x<<"*"<<y<<"="<<x*y;
break;

case '/' :
cout<<x<<"/"<<y<<"="<<x/y;
break;

default:
cout<<oprator<<"this operator is not find here Plzzzz try again";
break;
}
getch();
}