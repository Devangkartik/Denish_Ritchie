#include<stdio.h>
#include<conio.h>
void sum()
{
int a,b;
printf("Enter the first number : ");
scanf("%d",&a);
printf("Enter the second number : ");
scanf("%d",&b);
printf("Sum of two number is = %d",(a+b));
}
int main()
{
clrscr();
sum();
getch();
}