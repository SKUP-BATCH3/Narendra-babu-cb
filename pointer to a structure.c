#include<stdio.h>
struct employee
{int age;
int salary;
float yoe;
};
int main()
{
struct employee *ptr;

struct employee s={30,1000,2.5};
ptr=&s;
printf("%d %d %f",(*ptr).age,(*ptr).salary,(*ptr).yoe);
}
