#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int sum,mul,sub,div;
char oprator;
double x,y;
cout<<"Enter the first number : ";
cin>>x;
cout<<"choose anyone oprator (+,-.*,/) : ";
cin>>oprator;
cout<<"Enter the second number : ";
cin>>y;
switch(oprator)
{
case '+' :
cout<<"sum = "<<x+y;
break ;
case '-' :
cout<<"subtraction = "<<x-y;
break;
case '*' :
cout<<"multiplication = "<<x*y;
break;
case '/' :
cout<<"divide = "<<x/y;
break;
case '
default:
cout<<"Oprator not avaiable Please try again";
}
 getch();
}