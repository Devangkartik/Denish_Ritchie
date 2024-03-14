#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,rows=7,k=0;
printf("the pattern is below/n");
for(a=1;a<=rows;++a;k=0)
{
for(b=1; b<=rows-a; ++b)
{
printf(" ");
}
while(k!=2*a-1)
{
printf("*");
++k;
}
 printf("/n");
}
getch();
}