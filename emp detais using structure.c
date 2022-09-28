#include<stdio.h>
struct emp
{
char name[50];
int age,id,salary;
float yoe;
};
int main()
{
struct emp s;
printf("enter the details:\n ");
printf("name:");
printf("id:");
printf("age:");
printf("salary:");
printf("yoe:");

printf("entered details is:");
printf("name:%s",s.name);
printf("id:%d",s.id);
printf("age:%d",s.age);
printf("salary:%d",s.salary);
printf("year of exp:%f",s.yoe);
return 0;
}
