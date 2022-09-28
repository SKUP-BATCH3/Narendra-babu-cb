#include<stdio.h>
void main()
{
int speed;
printf("enter the speed");
scanf("%d",&speed);
if(speed<=60)
{
printf("no tickets-0",speed);
}
else if(speed>=61&&speed<=80)
{
printf("small ticket-1",speed);
}
else
{
printf("big ticket-2",speed);
}
}
