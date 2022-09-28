#include<stdio.h>
struct emp
{
char name[50];
int age,id,salary;
float exp;
}a,b,c;
void main()
{
struct emp a;
struct emp b;
struct emp c;

printf("enter the emp 1");
scanf("employee name :%a %d %f\n",&a.name,&a.id,&a.exp);
printf("employee name :%a %d %f\n",a.name,a.id,a.exp);

printf("enter the emp 2");
scanf("employee name :%s %d %f\n",&b.name,&b.id,&b.exp);
printf("employee name:%s %d %f\n",b.name,b.id,b.exp);

printf("enter the emp 3");
scanf("employee name:%s %d %f\n",&c.name,&c.id,&c.exp);
printf("employee name:%s %d %f\n",c.name,c.id,c.exp);
}
