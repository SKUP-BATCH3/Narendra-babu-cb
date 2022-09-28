#include<stdio.h>
void main()
{
int a[7]={1,-1,0,2,3,5,4};
int b[7]={1,-1,0,2,3,5,4};
int c[7]={1,-1,0,2,3,5,4};
int d[7]={1,-1,0,2,3,5,4};
int e[7]={1,-1,0,2,3,5,4};

int *p=&a;
int *q=&b;
int *r=&c;
int *s=&d;
int *t=&e;

printf("%d\n",*p++);
printf("%d\n",++*q);
printf("%d\n",*++r);
printf("%d\n",*(s++));
printf("%d\n",(*t)++);
}
