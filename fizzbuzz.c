#include<stdio.h>
void main()
{
int a;
printf("enter the digit");
scanf("%d",&a);
if(a%3==0&&a%5==0)
{
printf("FIZZBUZZ");
}
else if(a%3==0)
{
printf("FIZZ");
}
else if(a%5==0)
{
printf("BUZZ");
}
else
{
printf("%d!",a);
}
}
