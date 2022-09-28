// not getting output plz check

#include<stdio.h>
int pointer(int p,int a,int b);
{
p=a+b;
return p;
}
main()
{
int a=5,b=2;
int r;
int *p=&r;
printf("%d %d %d",pointer(p,a,b));
}
