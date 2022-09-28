#include<stdio.h>
int range(int);
int main()
{
int n,sum ;
printf("enter the range\n");
scanf("%d",&n);
sum=range(n);
printf("the sum is %d:%d\n",n,sum);
return 0;
}
int range(int n)
{
    int res;
if(n==1)
{
return(1);
}
else
{
res=n+range(n-1);
}
return res;
}

