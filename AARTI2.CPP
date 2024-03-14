
#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int x,y;
cout<<"Enter the first number  a: ";
cin>>x;
cout<<"Enter the second number  b: ";
cin>>y;
cout<<"Before swapping two numbers :x="<<x<<"  y="<<y<<endl;
x=x+y;
y=x-y;
x=x-y;
cout<<"after swapping a= "<<x<< "  b="<<y;
getch();
}