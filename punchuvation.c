#include<stdio.h>
void main()
{
char a[50];
int i;
printf("enter the string");
gets(a);
for(i=0;a[i]!=NULL;i++)
{
if((a[i]>='a'&a[i]<='z')||(a[i]>='0'&a[i]<='9'))
{
continue;
}
else
printf("%c",a[i]);
}
}
