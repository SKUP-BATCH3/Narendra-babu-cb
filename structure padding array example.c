#include<stdio.h>
struct marks
{
int tm;
float cgpa;
};
int main()
{
struct marks m[3];
//for(int i=0;i<3;i++)
printf("enter the integer  and floating values");
scanf("%d %f",&m[0].tm,&m[0].cgpa);
printf("%d %f",m[0].tm,m[0].cgpa);

}
