#include<stdio.h>
#include<time.h>
void main()
{
time_t clock=time(NULL);
printf("current time %s",ctime(&clock));
}
