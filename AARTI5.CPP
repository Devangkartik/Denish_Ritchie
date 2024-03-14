#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int num;
cout<<"Enter the number check the grade : ";
cin>>num;

if(num<0||num>100)
{
cout<<"Out of the grade range ";
}

else if(num>=0 && num<50)
{
cout<<"you are fail  this year ";
}

else if(num<=50 && num<<60)
{
cout<<"pass with D grade congrutulation!";
}

else if(num>=60 && num<70)
{
cout<<"you are pass with C grade congrutulation! ";
}

else if(num>70 && num<80)
{
cout<<"you are pass with B grade congrutulation !";
}

else if(num>80 && num<90)
{
cout<<"congrutulation you are pass maximum number with A grade ";
}

else if(num>95)
{
cout<<"Best of luck you are  the college TOPPER Devang kartik ";
}

else
{
cout<<"fukers";
}

getch();
}