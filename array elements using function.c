#include<stdio.h>
void display(int[],int);
int a[],i;
void main()
{
display(a,5);
}
void display(int a[],int size)
{
printf("enter the elements");
for(i=0;i<size;i++)
{
    scanf("%d",&a[i]);
}
    for(i=0;i<size;i++)
    {
        printf("%d \t",a[i]);

}}
