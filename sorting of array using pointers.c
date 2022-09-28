#include<stdio.h>
void main()
{
int a[5],i,*p,*q,temp,n;
p=&i;
q=&n;
scanf("%d",&a[i]);
for(*p=0;*p<5;(*p)++)
{
for(*q=*p+1;*q<5;++(*q))
{
if(a[*p]>a[*q])
temp=a[*p];
a[*p]=a[*q];
a[*q]=temp;
}
for(*p=0;*p<5;(*p)++)
printf("%d\t",a[i]);
}
}
