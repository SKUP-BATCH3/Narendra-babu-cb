#include<stdio.h>
int(*ptr)(int,int);
void sum(int,int);
void main()
{
    int res=0;
int(*ptr)(int,int)=&sum;
res=(*ptr)(3,2);
printf("%d",res);
}
void sum(int a,int b)
{
    int res1,res2,res3;
a=3,b=2;
res1=a+b;
//printf("%d",res);
}
