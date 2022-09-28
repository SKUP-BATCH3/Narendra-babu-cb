#include<stdio.h>
void main()
{
int size,t=0,i,j;
printf("sort an array using pointer");
printf("\n .......   ");
printf("\n enter the number of elements to stor in array");
scanf("%d",&size);
int a[size],*p=&a;
printf("input %d number of elements in array \n",size);
for(int i=0;i<size;i++)
{
printf("elements-%d:",i+1);
scanf("%d",&p[i]);
}
for(i=0;i<size;i++)
{
for(j=size-1;j>i;j--)
{if(p[i]>p[j])
{
t=p[j];
p[j]=p[i];
p[i]=t;
}}}
printf("the elements in array after sorting:");
for(i=0;i<size;i++)
{
printf("\n element-%d:%d",i+1,p[i]);
}}
