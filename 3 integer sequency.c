#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the integers");
scanf("%d %d %d",&a,&b,&c);

if(a<b||a<c|b<c||c>a||c>b||b>a||a==b||a==c||b==c)
{
printf("true");
}
else
{
printf("enter number is not in sequency");
}}
