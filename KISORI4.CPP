#include<stdio.h>
#include<conio.h>
void prime()
{
int num,i,c=0;
printf("Enter the number : ");
scanf("%d",&num);
for(i=1; i<=num; i++)
{
if(num%i==0)
{
c++;
}
}
if(c==2)
{
printf("prime");
}
else
{
printf("not prime");
}
}
int main()
{
clrscr();
prime();
getch();
}