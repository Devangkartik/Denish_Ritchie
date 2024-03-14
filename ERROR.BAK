#include<iostream.h>
#include<conio.h>
class GST
{

float price;
float percent;
public:
void input(float a,float b)
{
price=a;
percent=b;
}
void print()
{
cout<<"price :"<<price<<"\n";
cout<<"percent :" <<percent<<"\n";
}
};
int main()
{

GST p[3];
GST *q=p;
int i;
float s,t,f;
for(i=0; i<3; i++)
{
cout<<"Provide the price and percent"<<"\n";
cin>>s>>t;
q->input(s,t);
cout<<"you have entered"<<"\n";
q->print();
f=s*t;
cout<<"price after GST   :  "<<f<<"\n";
}
getch();
}