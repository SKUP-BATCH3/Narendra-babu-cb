#include<stdio.h>
int main()
{
int ctr=0,i,freq=0;
int t,h,e,spc=0;
char str[100];
printf("enter the number of times");
printf("input the string");
ctr=strlen(str);
for(i=0;i<=ctr-3;i++)
{
t=(str[i]=='t'||str[i]=='T');
h=(str[i+1]=='h'||str[i+1]=='H');
e=(str[i+2]=='e'||str[i+2]=='E');
spc=(str[i+3]=='\0'||str[i+3]=='\0');
if(t&&h&&e&&spc)
freq++;
}
printf("freq");
}
