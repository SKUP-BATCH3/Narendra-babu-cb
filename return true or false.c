#include<stdio.h>
int a[],b[];
int size;
int onearray(int a[],int size)
{
printf("from one array");
printf("\n enter the elements");
for(int i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
if(a[0]==a[size-1])
return 1;
else
return 0;
}
int twoarray(int b[],int size)
{
printf("\n from two arrays");
printf("enter the elements");
for(int i=0;i<size;i++)
{
scanf("%d",&b[i]);
}
if(a[0]==b[0]||a[size-1]==b[size-1])
return 1;
else
return 0;
}
main()
{
printf("enter the size of an array");
scanf("%d",&size);
printf("%d",onearray(a,size));
printf("%d",twoarray(b,size));
}
