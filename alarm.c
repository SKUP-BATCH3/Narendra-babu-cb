#include<stdio.h>
void main()
{
int mon=1,tue=2,wed=3,thu=4,fri=5,sat=6,sun=7;
int num,holiday;
printf("mon=1\t tue=2\t wed=3\t thu=4\t fri=5\t sat=6\t sun=7\n");
printf("enter the numbers by considering above days");
scanf("%d",&num);

if(num==1||num==2||num==3||num==4||num==5||num==6)
{
printf("7:00\n");
}
if(num==7)
{
printf("10 am\n");
}
char p[10]="yes";
char q[10]="no";
 printf("tomorrow you want vacation( yes or no)\n");
 scanf("%d",&holiday);
 printf("rescheduling\t");

 if(holiday==p[0])
 {
 printf("no alarm");
 }
 if(holiday!=p[0])
{
printf("10 am\n");
}
}
