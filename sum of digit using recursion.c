#include<stdio.h>
int sum(int n)
{
int s=0;
if(n==0)
return n;
s=n+sum(n-1);
return s;
}
int main()
{
int a=10;
a=sum(a);
printf("%d",a);
}
