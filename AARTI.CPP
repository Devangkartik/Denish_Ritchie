#include<iostream.h>
#include<conio.h>
class sonam
{
public:
sonam(int num)
{
if(num%2==0)
{
cout<<"even";
}
else
{
cout<<"odd";
}
}
};
int main()
{
clrscr();
int d;
cout<<"Enter the number which you nwant to check : " ;
cin>>d;
sonam  obj(d);
getch();
}