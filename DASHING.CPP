#include<iostream.h>
#include<conio.h>
int main()
{
int i,j,num;
clrscr();
cout<<"***************Dashing devang kartik suryavanshi****************"<<endl;

cout<<"***************make a trangle pattern : ***************"<<endl;

cout<<"Enter the number :  "<<endl;
cin>>num;
for(i=1; i<=num; i++)
{
for(j=i; j<=num; j++)
{
 cout<<"*";
}
cout<<endl;
}
getch();
}