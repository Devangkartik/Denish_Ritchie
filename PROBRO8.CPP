#include<stdio.h>
#include<string.h>
#include<conio.h>

struct student
{
char name[20];
int roll_no;
};
int main()
{
clrscr();
student s1;
s1.roll_no=101;
strcpy(s1.name,"devang kartik");
printf("your good name is=%s\n and roll_no=%d",s1.name,s1.roll_no);
getch();

}