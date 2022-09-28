#include<stdio.h>
void main()
{
char a[20];
printf("enter the string");
scanf("%s",&a);
int len=strlen(a);
if(a[0]=='f'&a[len-1]=='b')
{
printf("FIZZBUZZ");
}
else if(a[0]=='f')
{
printf("fizz");
}
else if(a[len-1]=='b')
{
printf("buZZ");
}
}
