#include<stdio.h>
void main()
{
int x;
func();
func();
}
void func()
{
static int x=5;
x=x+1;
printf("%d\n",x);
return;
}
