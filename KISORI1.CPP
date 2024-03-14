#include<iostream.h>
#include<conio.h>
class A
{
public:
void seen()
{
cout<<" My name is devang kartik suryavanshi ";
}
};
class B:public A
{
public:
void show()
{
cout<<"I am lived in india";
}
};
class C:public B;
{
public:
void display()
{
cout<<"I LOVE YOU ";
}
};
int main()
{
clrscr();
C obj;
C.seen();
C.show();
C.display();
getch();
}