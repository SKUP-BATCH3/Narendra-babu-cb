#include<stdio.h>
struct emp
{
char name[50];
int age,id,salary;
float exp;
}a,b,c;
void main()
{
struct emp a={"rashmi",22,2022,19000,1};
struct emp b={"aaaaa",20,2021,15000,2};
struct emp c={"bbbbb",21,2020,160000,6};

printf("employee name  1:%s\n",a.name);
printf("employee id:%d\n age:%d\n salary:%d\n",a.age,a.id,a.salary);
printf("year of experiance:%f\n",a.exp);

printf("employee name  2:%s\n",b.name);
printf("employee id:%d\n age:%d\n salary:%d\n",b.age,b.id,b.salary);
printf("year of experiance:%f\n",b.exp);

printf("employee name  3:%s\n",c.name);
printf("employee id:%d\n age:%d\n salary:%d\n",c.age,c.id,c.salary);
printf("year of experiance:%f\n",c.exp);
}
